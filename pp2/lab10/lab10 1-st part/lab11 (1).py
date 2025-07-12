# Function that returns all records based on a pattern (example of pattern: part of name, surname, phone number)

import psycopg2
from config import load_config

conn = psycopg2.connect(
    host = 'localhost',
    dbname = 'PhoneBook',
    user = 'postgres',
    password = 'Ravil180904'
)

cur = conn.cursor()

cur.execute('DROP TABLE phonebook_table;')

conn.commit()

cur.execute("""CREATE TABLE phonebook_table (
            id VARCHAR(255) PRIMARY KEY,
            first_name VARCHAR(255),
            last_name VARCHAR(255),
            phone_number VARCHAR(20) 
            
);
""")

conn.commit()

cur.execute("""INSERT INTO  phonebook_table (id, first_name, last_name, phone_number) VALUES
            ('1803541', 'Ruslan', 'Omarov', '+77003665875'),
            ('5556649', 'Timur', 'Omirbekov', '+77007015687');
            
""")

conn.commit()

cur.execute('SELECT id, first_name, last_name, phone_number FROM phonebook_table')

conn.commit()

def get_contacts_by_pattern(pattern):
    """ Get contacts based on a pattern in first name, last name, or phone number """
    sql = """
        SELECT contact_id, first_name, last_name, phone_number
        FROM phonebook_table
        WHERE first_name LIKE %s
           OR last_name LIKE %s
           OR phone_number LIKE %s
    """

    #conn = None
    phonebook_table = []
    config = load_config()
    try:
        conn = psycopg2.connect(**config)
        cur = conn.cursor()

        cur.execute(sql, (f"%{pattern}%", f"%{pattern}%", f"%{pattern}%"))
        phonebook_table = cur.fetchall()

        cur.close()
    except (Exception, psycopg2.DatabaseError) as error:
        print(error)
    finally:
        if conn is not None:
            conn.close()

    return phonebook_table

# Search for contacts with 'John' in their name or phone number
john_contacts = get_contacts_by_pattern('John')
for contact in john_contacts:
    print(contact)

# Search for contacts with '555' in their phone number
phone_contacts = get_contacts_by_pattern('555')
for contact in phone_contacts:
    print(contact)



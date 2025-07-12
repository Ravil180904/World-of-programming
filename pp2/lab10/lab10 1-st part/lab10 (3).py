# Implement updating data in the table (change user first name or phone)

import psycopg2
from config import load_config
from configparser import ConfigParser

conn = psycopg2.connect(
    host = 'localhost',
    dbname = 'PhoneBook',
    user = 'postgres',
    password = 'Ravil180904'
)

cur = conn.cursor()

cur.execute('DROP TABLE phonebook_table;')

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

def update_phone(phone_id, first_name=None, phone_number=None):
    updated_row_count = 0
    sql = """ UPDATE vendors
    SET first_name = COALESCE(%s, first_name),
    phone_number = COALESCE(%s, phone_number)
    WHERE phone_id = %s
    """
    config = load_config()
    conn = None

    try:
        params = config()
        conn = psycopg2.connect(**params)
        cur = conn.cursor()
        cur.execute(sql, (first_name, phone_number, phone_id))
        updated_row_count = cur.rowcount
        conn.commit()
        cur.close()
    except (Exception, psycopg2.DatabaseError) as error:
        print(error)
    finally:
        if conn is not None:
            conn.close()
    return updated_row_count

if __name__ == '__main__':
    update_phone(1, first_name= 'John')
    update_phone(2, phone_number= '911-1234')

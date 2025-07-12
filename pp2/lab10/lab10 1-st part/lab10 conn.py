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

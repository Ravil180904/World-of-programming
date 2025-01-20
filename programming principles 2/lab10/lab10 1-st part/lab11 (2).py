# Create procedure to insert new user by name and phone, update phone if user already exists

import psycopg2
from configparser import ConfigParser

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

# Get students
cur.execute('SELECT id, first_name, last_name, phone_number FROM phonebook_table')

conn.commit()

def load_config(filename='C:\\Users\\Darya\\Documents\\programming-principles-2\\lab10\\lab10 1-st part\\database.ini', section='postgresql'):
    parser = ConfigParser()
    parser.read(filename)

def call_procedure(name, phone):
    config = load_config()
    
    try:
        
        # Connect to the PostgreSQL server
        conn = psycopg2.connect(**config)
        cur = conn.cursor()
        # Call the stored procedure
        cur.callproc('insert_or_update_contact', (name, phone))
        # Commit the changes
        conn.commit()
        print(f"Contact '{name}' with phone number '{phone}' inserted or updated successfully.")
    except (Exception, psycopg2.DatabaseError) as error:
        print(error)

if __name__ == '__main__':
    call_procedure('Ruslan', '1234567890')
    call_procedure('Rustam', '0987654321')
    call_procedure('Timur', '9876543210') 

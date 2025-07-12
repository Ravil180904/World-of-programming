# Design tables for PhoneBook.

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
            ('5556649', 'Timur', 'Omirbekov', '+77007015687'),
            ('5558878', 'Ravil', 'Moldabayev', '+77770383669');
            
""")

conn.commit()

# Get students
cur.execute('SELECT id, first_name, last_name, phone_number FROM phonebook_table')

print(cur.fetchall())
print(cur.fetchall())

#import csv

#filename = 'C:\\Users\\Darya\\Documents\\programming-principles-2\\lab10\\lab10 1-st part\\Phonebook.csv'

#with open(filename, 'r') as csvfile:
 #   csvreader = csv.reader(csvfile, delimiter=',')
  #  for row in csvreader:
   #     id, first_name, last_name, phone_number = row

#        cur.execute(f"""INSERT INTO PhoneBook_table (id, first_name, last_name, phone_number) VALUES
 #                   ('{id}, '{first_name}', '{last_name}', '{phone_number}');
#        """)

 #       conn.commit()

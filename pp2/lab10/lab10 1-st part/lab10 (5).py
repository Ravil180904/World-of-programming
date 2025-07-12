#Implement deleting data from tables by username of phone

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


def delete_name(id, name=True):
    """ Delete part by part id """

    rows_deleted  = 0
    sql = 'DELETE FROM parts WHERE first_name = %s'
    config = load_config()

    try:
        with  psycopg2.connect(**config) as conn:
            with  conn.cursor() as cur:
                # execute the UPDATE statement
                cur.execute(sql, (id,))
                rows_deleted = cur.rowcount

            # commit the changes to the database
            conn.commit()
    except (Exception, psycopg2.DatabaseError) as error:
        print(error)    
    finally:
        return rows_deleted

if __name__ == '__main__':
    deleted_rows = delete_name('Ruslan')
    print('The number of deleted rows: ', deleted_rows)
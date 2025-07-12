# Querying data from the tables (with different filters)

import psycopg2
from config import load_config

def get_all_contacts():
    config = load_config()
    PhoneBook = []
    try:
        with psycopg2.connect(**config) as conn:
            with conn.cursor() as cur:
                cur.execute("SELECT id, first_name, last_name, phone_number FROM phonebook_table")
                contacts = cur.fetchall()
                params = config()
                conn = psycopg2.connect(**params)
                cur = conn.cursor()
                cur.close()
                for row in PhoneBook:
                    print(row)

    except(Exception, psycopg2.DatabaseError) as error:
        print(error)
    #return PhoneBook

if __name__ == '__main__':
    get_all_contacts()

#all_contacts = get_all_contacts()
#   print(contact)

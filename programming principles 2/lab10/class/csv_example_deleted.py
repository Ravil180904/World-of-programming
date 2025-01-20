# CSV - Comma Separated Values
# file format, where each line represents one row (one entity or tuple)
# and each comma separates one column (or attribute for the particular entity)
 

import psycopg2

# Connect to the database and get the connection object
conn = psycopg2.connect(
    host = 'localhost',
    dbname = 'Students',
    user = 'postgres',
    password = 'Ravil180904'
)

# Create a cursor to work with our DB
cur = conn.cursor()

#  Delete table 
cur.execute('DROP TABLE students_data;')

conn.commit()


# Create a new table
cur.execute("""CREATE TABLE students_data (
            name VARCHAR(255),
            id VARCHAR(255) PRIMARY KEY,
            study_year INT,
            phone_number VARCHAR(20)
);
""")

conn.commit()

import csv

filename = 'C:\\Users\\Darya\\Documents\\programming-principles-2\\lab10\\class\\students.csv'

with open(filename, "r") as csvfile:
    csvreader = csv.reader(csvfile, delimiter=',')
    for row in csvreader:
       # print(row) #('Ruslan', '24B202424', 1, '+77007007070'),
        name, id, study_year, phone_number = row
        # print(name, id, study_year, phone_number) #
        
    # Create new students
    cur.execute(f"""INSERT INTO students_data (name, id, study_year, phone_number) VALUES
                ('Ruslan', '24B202424', 1, '+77007007070'),
                ('Mariya', '24B212424', 1, '+77007017070');
                
""")


conn.commit()

# Update students
cur.execute("""Update students_data 
            SET study_year = 2
            WHERE id = '24B202424';
""")

conn.commit()

# WHERE name = 'Ruslan'

# Delete students
cur.execute("""DELETE FROM students_data 
            WHERE id = '24B202424';
""")

conn.commit()

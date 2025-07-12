import csv

filename = 'C:\\Users\\Darya\\Documents\\programming-principles-2\\lab10\\class\\students.csv'

with open(filename, "r") as csvfile:
    csvreader = csv.reader(csvfile, delimiter=',')
    for row in csvreader:
       # print(row) #('Ruslan', '24B202424', 1, '+77007007070'),
        name, id, study_year, phone_number = row
        # print(name, id, study_year, phone_number) #
        
# METHOD 1
import csv
from cs50 import get_string

file = open("phonebook.csv", "a")

name = get_string("Name: ")
number = get_string("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()

# Terminal: $ python phonebook.py
#           Name: Carter
#           Number: +1-617-495-1000
#           $ ls
#           phonebook.csv  phonebook.py



# METHOD 2 (if you use 'with', you don't have to use file.close)
import csv
from cs50 import get_string

name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file:  # We can use the with keyword, which will close the file for us after we’re finished:

    writer = csv.writer(file)
    writer.writerow([name, number])
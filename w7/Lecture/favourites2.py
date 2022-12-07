# import csv

# from cs50 import SQL

# db = SQL("sqlite:///favourites.db")  # opens up the database

# title = input("Title: ").strip()  # as the user for the title

# # db.execute to execute a SQL command inside python
# # db.execute() return a list of rows(dict), even there is only one row inside of it
# # give the COUNT(*) a nickname called counter
# rows = db.execute("SELECT COUNT(*) AS counter FROM favourites WHERE title LIKE ?", title)  # ? is like %s in C (a placeholder)
# # print(rows)  # --> [{'counter': 8}]

# row = rows[0]  # so this line of code just gives me the 1st and only row
# # print(row)  # --> {'counter': 8}

# print(row["counter"])  # this line go inside the row which turns out a dict and gives me the key counter and the value it corresponds to


# And we can tweak our program to print all the rows that match:
import csv

from cs50 import SQL

db = SQL("sqlite:///favourites.db")

title = input("Title: ").strip()

rows = db.execute("SELECT title FROM favourites WHERE title LIKE ?", title)
# print(rows)

for row in rows:
    print(row["title"])
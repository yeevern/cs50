# import csv

# with open("favourites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     for row in reader:
#         print(row["title"])  # row[] return a dictionary, so cannot use row[1]


# Now let’s try to filter out duplicates in our responses:
# import csv

# with open("favourites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     titles = []
#     for row in reader:
#         if row["title"] not in titles:
#             titles.append(row["title"])  # getting a list
#     # print(title)
# for title in titles:  # print out the current title
#     print(title)


# We see that there are still near-duplicates, since Friends and friends are indeed different strings still.
# We’ll want to change the current title to all uppercase, and remove whitespace(mayb user accidentally types in a space at the end) around it, before we add it to our list:
# import csv

# titles = []

# with open("favourites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     for row in reader:
#         title = row["title"].strip().upper()
#         if not title in titles:
#             titles.append(title)

# for title in titles:
#     print(title)


# It turns out that Python has another data structure built-in, set, which ensures that all the values are unique:
# import csv

# titles = set()

# with open("favourites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     for row in reader:
#         title = row["title"].strip().upper()
#         titles.add(title)  # Now, we can call add on the set, and not have to check ourselves if it’s already in the set.

# for title in titles:
#     print(title)


# To sort the titles, we can just change our loop to for title in sorted(titles), which will sort our set before we iterate over it:
import csv

titles = set()

with open("favourites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        title = row["title"].strip().upper()
        titles.add(title)

for title in sorted(titles):
    print(title)
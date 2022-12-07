# We can use a dictionary, instead of a set, to count the number of times we’ve seen each title, with the keys being the titles and the values being an integer counting the number of times we see each of them:
# import csv

# titles = {}  # a dictionary

# with open("favourites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     for row in reader:
#         title = row["title"].strip().upper()
#         titles[title] += 1

# for title in sorted(titles):
#     print(title)
# We have a KeyError, since the title HOW I MET YOUR MOTHER isn’t in the dictionary yet.


# We’ll have to add each title to our dictionary first, and set the initial value to 1:
import csv

titles = {}

with open("favourites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        title = row["title"].strip().upper()
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1

for title in sorted(titles):
    print(title, titles[title])


# We can also set the initial value to 0, and then increment it by 1 no matter what:
# import csv

# titles = {}

# with open("favorites.csv", "r") as file:
#     reader = csv.DictReader(file)

#     for row in reader:
#         title = row["title"].strip().upper()
#         if not title in titles:
#             titles[title] = 0
#         titles[title] += 1

# for title in sorted(titles):
#     print(title, titles[title])
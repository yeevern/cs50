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
def get_value(title):
    return titles[title]

for title in sorted(titles, key=get_value, reverse=True):  # key put in the unction name without the bracket
    print(title, titles[title])

# key=lambda title: titles[title]  --> can also write like this for the key so that we do not need to create a new funtion
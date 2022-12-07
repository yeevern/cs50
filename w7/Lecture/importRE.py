import csv
import re  # regular expression library

counter = 0

with open("favourites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        title = row["title"].strip().upper()
        if re.search("OFFICE", title):  # re.search(pattern, a str that you want to analyze for that pattern)
            counter += 1

print(f"Number of people who like The Office: {counter}")

# We can change our expression to "^(OFFICE|THE OFFICE)$", which will match either OFFICE or THE OFFICE, but only if they start at the beginning of the string, and stop at the end of the string (i.e., there are no other words before or after).
# We can even change THE OFFICE to THE.OFFICE, allowing any character (like a typo) to be in between those words. 
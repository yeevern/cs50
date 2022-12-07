import csv

houses = {
    "Gryffindor": 0,
    "Hufflepuff": 0,
    "Ravenclaw": 0,
    "Slytherin": 0
}

# Increment the nums
with open("hogwarts.csv", "r") as file:  # file is var name
    reader = csv.reader(file)
    next(reader)  # next() funtion is to ignore the first line of the file (ie: the header); it takes in an iterable obj
    for row in reader:
        house = row[1]  # [0] is timestamp, [1] is hse name
        houses[house] += 1

# Print the count
for house in houses:
    count = houses[house]
    print(f"{house}: {count}")


# We can improve our program by reading each row as a dictionary, using the first row in the file as the keys for each value:
# ...
# with open("hogwarts.csv", "r") as file:
#     reader = csv.DictReader(file)  # if use DictReader, you can throw away the next()
#     for row in reader:
#         house = row["House"]  # [] inside the bracket must use the name name as csv file
#         houses[house] += 1
# ...
# Now, we can say house = row["House"] to get the value in that column.
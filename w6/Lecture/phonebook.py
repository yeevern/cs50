# If we have a dictionary, a set of key-value pairs, we can also check for a particular key, and look at the value stored for it:
# We first declare a dictionary, people, where the keys are strings of each name we want to store, and the value for each key is a string of a corresponding phone number.
# Then, we use if name in people: to search the keys of our dictionary for a name. If the key exists, then we can get the value with the bracket notation, people[name].
from cs50 import get_string

people = {
    "Carter": "+1-617-495-1000",  # keys and valuesx
    "David": "+1-949-468-2750"
}

name = get_string("Name: ")
if name in people:
    number = people[name]  # people[__] - it can be a string or num
    print(f"Number: {number}")
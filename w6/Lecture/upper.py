from cs50 import get_string

before = get_string("Before:  ")
print("After:  ", end="")
for c in before:
    print(c.upper(), end="")
print()

# To make a string uppercase, we can also just write after = before.upper(), without having to iterate over each character ourselves.
before = get_string("Before:  ")
after = before.upper()
print(f"After: {after}")
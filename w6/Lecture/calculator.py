x = int(input("x: "))
y = int(input("y: "))
print(x + y)

# if user did not enter type int, it will give value error, eg:
# $ python calculator.py
# x: cat
# Traceback (most recent call last):
#   File "/workspaces/20377622/calculator.py", line 1, in <module>
#     x = int(input("x: "))
# ValueError: invalid literal for int() with base 10: 'cat'

# ValueError is a type of exception, or something that goes wrong when our code is running. In Python, we can try to do something, and detect if there is an exception:
try:
    x = int(input("x: "))
except ValueError:
    print("That is not an int!")
    exit()
try:
    y = int(input("y: "))
except ValueError:
    print("That is not an int!")
    exit()
print(x + y)

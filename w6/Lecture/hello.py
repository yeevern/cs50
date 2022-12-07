#  in console use python hello.py then can run edy
# METHOD 1
ans = "Yee Vern"
print(f"Hello, {ans}")

# METHOD 2
from cs50 import get_string

answer = get_string("What's your name? ")
print("hello, " + answer)

# METHOD 3
ans = input("What is your name? ")
print("hello, " + ans)
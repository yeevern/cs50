from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")
z = x / y
print(f"{z:.50f}")

####################################33
i = [1,2,3]
print(id(i))
i.append(4)
print(id(i))  # same id
# i = i + [4]
# print(id(i))  # diff id because this is reassign
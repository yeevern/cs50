from sys import argv

if len(argv) == 2:
    print(f"Hello, {argv[1]}")  # Since argv is a list, we can get the second item with argv[1].
else:
    print("Hello World")
print()
# argv[0] would be the name of our program, like argv.py, and not python.


# We can also let Python iterate over the list for us:
for arg in argv:
    if arg != "arg.py":  # can also change for loop to argv[1:]
        print(arg)
# $ python argv.py
# argv.py
# $ python argv.py foo bar baz
# argv.py
# foo
# bar 
# baz
s = input("Text: ")
letters = sentences = words = 0
for i in range(len(s)):
    if s[i] == " ":
        words += 1
    elif s[i].isalpha():
        letters += 1
    elif s[i] == "!" or s[i] == "." or s[i] == "?":
        sentences += 1
words += 1
L = round((letters / words) * 100, 2)
S = round((sentences / words) * 100, 2)
# print(letters, sentences, words, L, S)
index = round(0.0588 * L - 0.296 * S - 15.8)
if index >= 16:
    print("Grade 16+")
elif index < 1:
    print("Before Grade 1")
else:
    print("Grade %i" %index)
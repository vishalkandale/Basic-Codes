""""
Example:
Based on a list of fruits, you want a new list, containing only the fruits with the letter "a" in the name.
Without list comprehension you will have to write a for statement with a conditional test inside:
"""

list = ["apple","bannna","jerry"]
newlist = []

for x in list:
    if "a" in x:
        newlist.append(x)

print(newlist)


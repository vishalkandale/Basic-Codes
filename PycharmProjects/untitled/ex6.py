"""Write a Python program to get a new string from a given string where "Is" has been added to the front.
 If the given string already begins with "Is" then return the string unchanged."""

def funtion(n):
    if len(n)>=2 and n[:2] == "Is":
        return n
    return "Is"+n

print(funtion("Array"))
print(funtion("IsEmpty"))
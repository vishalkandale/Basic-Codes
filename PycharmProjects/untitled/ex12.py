"""Write a Python program to concatenate all elements in a list into a string and return it."""

def fun(item):
    output = ''
    for i in item:
        output += str(i)
    return output

print(fun([2,3,5,4]))
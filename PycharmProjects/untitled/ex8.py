"""Write a Python program to count the number 4 in a given list."""

def function(num):
    count = 0
    for i in num:
        if i == 4:
            count = count + 1
    return count
print(function([1,2,4,5,4,3]))
print(function([4,4,5,4,6]))
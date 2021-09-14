"""Write a Python function that takes a sequence of numbers and determines
whether all the numbers are different from each other."""

def function(num):
    if len(num) == len(set(num)):
        return True
    return False

print(function([1,3,5,5,7]))
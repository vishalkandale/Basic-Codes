"""Write a Python program to check whether a specified value is
 contained in a group of values.

Test Data:
3 -> [1, 5, 8, 3] : True
-1 -> [1, 5, 8, 3] : False """

def function(list , n):
    for value in list:
        if n == value:
            return True
    return False
print(function([1,3,4,5], 9))
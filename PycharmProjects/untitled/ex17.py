"""Write a Python program that will return true
if the two given integer values are equal or their sum or difference is 5"""

def num(x,y):
    if x == y or x+y == 5 or abs(x-y) == 5:
        return True
    else:
        return False
print(num(2,3))
print(num(5,10))
print(num(10,10))
print(num(2,6))
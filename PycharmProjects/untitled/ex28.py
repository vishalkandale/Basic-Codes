"""Write a Python program to remove and print every third number
from a list of numbers until the list becomes empty."""

def function(num):
    position = 2
    idx = 0
    lenlist = (len(num))
    while lenlist > 0:
        idx = (position+idx)%lenlist
        print(num.pop(idx))
        lenlist -= 1

list = [10,20,30,40,50,60,70,80,90]
function(list)
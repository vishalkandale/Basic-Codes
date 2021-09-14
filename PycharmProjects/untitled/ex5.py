"""Write a Python program to calculate the sum of three given numbers,
 if the values are equal then return thrice of their sum"""

a = int(input("Enter 1st value : "))
b = int(input("Enter 2nd value : "))
c = int(input("Enter 3rd value : "))

if a == b == c:
    sum = (a+b+c)*3
    print(sum)
else:
    sum1 = a+b+c
    print(sum1)
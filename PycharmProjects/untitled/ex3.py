"""Write a Python program which accepts a sequence of comma-separated numbers from user and
generate a list and a tuple with those numbers.

Sample data: 3, 5, 7, 23"""

x = input("Enter numbers : ")

list = x.split(",")
tuple = tuple(list)
print("List : " , list)
print("Tuple : " , tuple)
"""Write a Python program to find the median among three given numbers."""

x = int(input("Enter 1st : "))
y = int(input("Enter 2nd : "))
z = int(input("Enter 3rd : "))
print("middle number ")

if y < x and x < z:
    print(x)
elif z < x and x < y:
    print(x)

elif z < y and y < x:
    print(y)
elif x < y and y < z:
    print(y)

elif y < z and z < x:
    print(z)
elif x < z and z < y:
    print(z)
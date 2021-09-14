"""Write a Python program to input a number,
 if it is not a number generates an error message."""

while True:
    try:
        a = int(input("Enter number : "))
        break
    except ValueError:
        print("It is not number!")
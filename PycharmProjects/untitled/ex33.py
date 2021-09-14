"""Write a Python program to get the third side of right angled triangle from two given sides."""

def hypotenius(a,b,h):
    if a == str("x"):
        return ("a = " + str(((h**2)-(b**2))**0.5))
    elif b == str("x"):
        return ("b = " + str(((h**2)-(a**2))**0.5))
    elif h == str("x"):
        return ("h = "+ str(((a**2)+(b**2))**0.5))
    else:
        return "you know the value"


print(hypotenius(5,4,'x'))
print(hypotenius('x',4,5))
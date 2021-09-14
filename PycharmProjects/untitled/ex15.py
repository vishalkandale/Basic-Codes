"""Write a Python program to compute the greatest common divisor (GCD) of two positive integers."""

def gcd(x,y):
    z = x % y
    while z:
        x = y
        y = z
        z = x % y
    return y

print(gcd(5,12))
"""Write a Python function that takes a positive integer and returns the
sum of the cube of all the positive integers smaller than the specified number."""

def num(n):
    n -= 1
    total = 0
    while n > 0:
        total += n * n * n
        n-=1
    return total

print(num(3))
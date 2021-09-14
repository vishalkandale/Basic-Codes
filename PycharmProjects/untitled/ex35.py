"""Write a Python program to find the value of n where n degrees of number 2 are written sequentially in a line without spaces."""

def number(num):
    ans = True
    n,temp,i = 2,2,2
    while ans:
        if str(temp) in num:
            i+=1
            temp = pow(n,i)
        else:
            ans = False
    return i-1


print(number("2481632"))
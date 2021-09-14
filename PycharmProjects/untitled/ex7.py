"""Write a Python program to get a string
 which is n (non-negative integer) copies of a given string"""

def function(str , n):
    result = ""
    for i in range(n):
        result = result + str
    return result

print(function("txt " ,2))
print(function("abc " , 3))

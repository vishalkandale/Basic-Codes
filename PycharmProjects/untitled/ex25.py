"""Write a Python function to check whether a distinct pair of numbers
whose product is odd present in a sequence of integer values."""

def function(num):
    for i in range(len(num)):
        for j in range(len(num)):
            if i!=j:
                product = num[i] * num[j]
                if product & 1:
                    return True
    return False
list = [1,6,4,7,8]
print(list, function(list));
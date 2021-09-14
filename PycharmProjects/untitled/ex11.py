"""Write a Python program to create a histogram from a given list of integers."""


def histogram(item):
    for i in item:
        output = ''
        time = i
        while (time > 0):
            output += '*'
            time = time - 1
        print(output)

histogram([2,3,5,1])
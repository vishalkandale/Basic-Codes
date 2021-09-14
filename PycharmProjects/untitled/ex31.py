"""Write a Python program to get all possible two digit letter combinations from a digit (1 to 9) string."""

def letter(digits):
    if digits=="":
        return []
    string_map = {
        "1": "abc",
        "2": "def",
        "3": "ghi",
        "4": "jkl",
        "5": "mno",
        "6": "pqrs",
        "7": "tuv",
        "8": "wxy",
        "9": "z"
    }
    result = [""]
    for num in digits:
        temp = []
        for an in result:
            for char in string_map[num]:
                temp.append(an + char)
        result = temp
    return result

x = "47"
print(letter(x))
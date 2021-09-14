list = ["banana","apple","mango","coconut"]

list.sort()
print(list)

list.sort(reverse=True)
print(list)

list2 = ["banana","Apple","mango","Coconut"]
list2.sort()
print(list2)

list2.sort(key=str.lower)
print(list2)

list2.reverse()
print(list2)

list.extend(list2)
print(list)

list2 = list.copy()
print(list2)

list.append(list2)
print(list)

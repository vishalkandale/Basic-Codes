list = ["a","b","c","d","e"]

print(list)
print(list[1])
print(list[2:5])

list[2:4] = ["x","y","z"]
print(list)

list.insert(2,"P")
print(list)

list.append("vishal")
print(list)

ex = [1,2,3]
list.extend(ex)
print(list)
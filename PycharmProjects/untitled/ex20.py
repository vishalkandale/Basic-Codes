"""Write a Python program to convert seconds to day, hour, minutes and seconds."""

time = int(input("Enter time in second : "))

day = time // (3600*24)
hour = time // 3600
minute = time // 60

print("D:H:M:S -> %d:%d:%d:%d"%(day,hour,minute,time))
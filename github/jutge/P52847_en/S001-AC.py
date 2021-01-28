from jutge import read
a = read(int)
b = read(int)
c = read(int)
if a > b and a > c:
    print(a)
elif b > a and b > c:
    print(b)
else:
    print(c)
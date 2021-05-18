#print double triangle
for i in range(17):
    if i>8:
        i=16-i
    for j in range(9-i):
        print(" ",end="")
    for k in range(2*i-1):
        print('*',end='')
    print()

def print_rangoli(size):
    for i in range(size):
        for j in range((2*size-2)-2*i):
            print('-',end='')    
        for k in range(i):
            print(chr((96+size)-k),'-',sep='',end='')
        print(chr(96+size-i),end='')
        for k in range(i):
            print('-',chr((97+size-i)+k),sep='',end='')
        for j in range((2*size-2)-2*i):
            print('-',end='')
        print()                        
    for i in range(size-2,-1,-1):
        for j in range((2*size-2)-2*i):
            print('-',end='')    
        for k in range(i):
            print(chr((96+size)-k),'-',sep='',end='')
        print(chr(96+size-i),end='')
        for k in range(i):
            print('-',chr((97+size-i)+k),sep='',end='')
        for j in range((2*size-2)-2*i):
            print('-',end='')
        print()                            

n=int(input('Enter the size of rangoli: '))
print_rangoli(n)

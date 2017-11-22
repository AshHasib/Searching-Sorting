

def linearRecursive(L, start, end, key):
    if(start<=end):
        if L[start] is key:
            return True
        else:
            return linearRecursive(L, start+1, end, key)
    return False

if __name__=='__main__':
    L=[]
    N=int(input('Enter size:'))
    for i in range(0, N):
        num=int(input('Enter value:'))
        L.append(num)
    
    key=int(input('Enter key value:'))
    
    if linearRecursive(L, 0, len(L)-1, key) is True:
        print('Data found')
    else:
        print('Data not found')

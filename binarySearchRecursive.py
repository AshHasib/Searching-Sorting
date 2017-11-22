

def binarySearch(L, low, high, key):
    mid=(low+high+1)//2
    
    if(low<=high):
        if(L[mid] is key):
            return True
    
        elif (L[mid]>key):
            return binarySearch(L, low, mid-1,key)
    
        elif(L[mid]<key):
            return binarySearch(L, mid+1, high, key)
    
    return False
    

if __name__=='__main__':
    K=[1, 4, 5, 8, 9]
    length=len(K)
    print(binarySearch(K, 0, length-1, 8))

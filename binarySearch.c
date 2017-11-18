#include<stdio.h>

int main() {
    int A[1000];
    int N,i;
    int key,flag=0;
    int low,high,mid;
    printf("Enter size:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);

    low=0;
    high=N-1;
    while(low<=high) {

        mid=(low+high)/2;

        if(A[mid]==key){
            flag=1;
            break;
        }
        else if(A[mid]<key) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    if(flag==1) {
        printf("DATA FOUND\n");
    }
    else {
        printf("DATA NOT FOUND\n");
    }

    return 0;
}



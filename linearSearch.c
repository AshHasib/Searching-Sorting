#include<stdio.h>

int main(){
    int A[1000];
    int N,i,flag=0;
    int key;

    printf("Enter and element:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter key value:");
    scanf("%d",&key);

    for(i=0;i<N;i++) {
        if(A[i]==key) {
            flag=1;
            break;
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

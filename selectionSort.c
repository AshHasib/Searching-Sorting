#include<stdio.h>

int main() {
    int A[1000];
    int N,i,j,tmp;

    printf("Enter size:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }

    //performing selection sort

    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(A[i]>A[j]){
                tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    printf("SORTED DATA:");
    for(i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

    return 0;
}

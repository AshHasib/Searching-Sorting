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
    for(i=N;i>0;i--) {
        for(j=0;j<i-1;j++) {
            if(A[j]>A[j+1]){
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
    }
    printf("SORTED DATA:");
    for(i=0;i<N;i++)
        printf("%d\t",A[i]);

    printf("\n");

    return 0;
}

#include<stdio.h>
void quick(int[],int,int);

int main() {
    int A[1000];
    int N,i;

    printf("Enter size:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    quick(A,0,N-1);

    printf("SORTED DATA:");
    for(i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

    return 0;
}
void quick(int a[],int lb,int ub) {
    int left,right,pivot,next;
    left=lb;
    right=ub;
    pivot=a[lb];

    while(lb<ub) {
        while((a[ub]>=pivot)&&(lb<ub)) {
            ub--;
        }
        if (lb!=ub) {
            a[lb]=a[ub];
            lb++;
        }
        while((a[lb]<=pivot)&&(lb<ub)) {
            lb++;
        }
        if(lb!=ub) {
            a[ub]=a[lb];
            ub--;
        }
    }
    a[lb]=pivot;
    next=lb;
    lb=left;
    ub=right;
    if(lb<next){
        quick(a,lb,next-1);
    }
    if(ub>next){
        quick(a,next+1,ub);
    }
}



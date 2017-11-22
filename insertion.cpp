#include<stdio.h>

int main()
{
	int A[1000];
	int N;

	int i;

	printf("Enter size of the array:");
	scanf("%d",&N);

	printf("Enter elements:");

	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);
	}
	int K,PTR,TEMP;

	A[0]=-999999;

	for(K=2;K<=N;K++)
	{
		TEMP=A[K];
		PTR=K-1;

		while(TEMP<A[PTR])
		{
			A[PTR+1]=A[PTR];
			PTR--;
		}
		A[PTR+1]=TEMP;
	}

	printf("SORTED DATA:");

	for(i=1;i<=N;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");

	return 0;
}
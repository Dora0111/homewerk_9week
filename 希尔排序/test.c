#include"Shellsort.h"
#define N 10
int main(void)
{
	int A[N];
	for (int i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	Shellsort(A, N);
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("%d\n", A[i]);
	return 0;
}
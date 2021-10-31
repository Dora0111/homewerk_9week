#include<stdio.h>
#define LeftChild(i) (2*(i)+1)
void Swap(int* a, int* b);

void PerDown(int A[], int i, int N)
{
	int Child;
	int Tmp;
	for (Tmp = A[i]; LeftChild(i) < N; i = Child)
	{
		Child = LeftChild(i);
		if (Child != N - 1 && A[Child + 1] > A[Child])
			Child++;
		if (Tmp < A[Child])
			A[i] = A[Child];
		else
			break;
	}
	A[i] = Tmp;
}

void Heapsort(int A[], int N)
{
	int i;
	for (i = N / 2; i >= 0; i--)
		PerDown(A, i, N);
	for (i = N - 1; i > 0; i--)
	{
		Swap(&A[0], &A[i]);
		PerDown(A, 0, i);
	}
}

void Swap(int* a, int* b)
{
	int Tmp;
	Tmp = *a; *a = *b; *b = Tmp;
}
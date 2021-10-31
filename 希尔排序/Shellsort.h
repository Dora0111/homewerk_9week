#pragma once
#include<stdio.h>
void Shellsort(int A[], int N)
{
	int i, j, Increment;
	int Tmp;

	for (Increment = N / 2; Increment > 0; Increment /= 2)			//�������С��һ�붨Ϊ��һ�η���Ĵ�С
		for (i = Increment; i < N; i++)
		{
			Tmp = A[i];
			for (j = i; j >= Increment; j -= Increment)             //�ӷ����еڶ���Ԫ�ؿ�ʼ���в�������
			{
				if (Tmp < A[j - Increment])
					A[j] = A[j - Increment];
				else
					break;
			}
			A[j] = Tmp;
		}
}
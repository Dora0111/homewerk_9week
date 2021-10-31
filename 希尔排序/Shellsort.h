#pragma once
#include<stdio.h>
void Shellsort(int A[], int N)
{
	int i, j, Increment;
	int Tmp;

	for (Increment = N / 2; Increment > 0; Increment /= 2)			//将数组大小的一半定为第一次分组的大小
		for (i = Increment; i < N; i++)
		{
			Tmp = A[i];
			for (j = i; j >= Increment; j -= Increment)             //从分组中第二个元素开始进行插入排序
			{
				if (Tmp < A[j - Increment])
					A[j] = A[j - Increment];
				else
					break;
			}
			A[j] = Tmp;
		}
}
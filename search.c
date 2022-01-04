#include<stdio.h>

int main()
{
	int size, num, i, flag = 0;
	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter the element to be searched: ");
	scanf("%d", &num);
	int arr[size];
	printf("Enter array element: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	}
	int *ptr = arr;
	for(i = 0;i < size;i++)
	{
		if(*ptr == num)
		{
			flag = 1;
			break;
		}
		ptr++;
	}
	if(flag == 1)
	{
		printf("Element %d found position %d\n", num , i);
	}
	else
	{
		printf("Element not found\n");
	}
}


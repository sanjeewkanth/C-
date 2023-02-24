#include "func.h"
int* create_array(int size)
{
	int* arr = (int*)malloc(size*sizeof(int));
	if(arr == NULL)
	{
		printf("Error: Memory allocation failed.\n");
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
		printf("%d", arr[i]);
	}
	free(arr);
	printf("\n");
	return &arr[1];
}


//Quintanar Ortiz Brandon

#include <stdio.h>

int EliminarDuplicado(int arr[], int n)
{
	int i, j, k;
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				for (k = j; k < n - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}
	}
	return n;
}

int main()
{
	int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};
	int n = 9;
	int i, k;
	
	
	printf("\n Arreglo Original:\n\n");
	for(i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
	
	k = EliminarDuplicado(arr, n);
	
	printf("\n\n Arreglo sin duplicados:\n\n");
	
	for(i = 0; i < n; i++)
	{
		if (i < k)
		{
			printf(" %d", arr[i]);
		}
		else
			printf(" -");
		
	}
	printf("\n\n");
	printf(" Elementos: %d", k);
	printf("\n\n");
	 
	return 0;
}

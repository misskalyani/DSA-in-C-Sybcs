#include<stdio.h> 
#include<stdlib.h>  
int getMax(int a[], int n) 
{ 
 	int i; 
 	int max = a[0]; 
 	for (i = 1; i < n; i++)
	 { 
 		if (a[i] > max) 
 		max = a[i]; 
     } 
 	return max; 
} 
void radixSort(int a[], int n) 
{ 
 	int i,digitPlace = 1; 
 	int result[n]; 
 	int largestNum = getMax(a, n); 
 	while(largestNum/digitPlace >0) 
 	{ 
 		int count[10] = {0}; 
 		for (i = 0; i < n; i++) 
 		count[ (a[i]/digitPlace)%10 ]++; 
 		for (i = 1; i < 10; i++) 
 		count[i] += count[i - 1]; 
 		for (i = n - 1; i >= 0; i--) 
 		{ 
 			result[count[ (a[i]/digitPlace)%10 ] - 1] = a[i]; 
 			count[ (a[i]/digitPlace)%10 ]--; 
 		} 
		for (i = 0; i < n; i++) 
 		a[i] = result[i]; 
 		digitPlace *= 10; 
 	} 
} 
int main() 
{ 
 	int a[20],n,i; 
 	printf("Enter Limit of Array: "); 
 	scanf("%d",&n); 
 	printf("\nEnter elements:\n\n",n); 
 	for(i=0 ; i<n ; i++) 
 	{ 
 		scanf("%d",&a[i]); 
	}
	radixSort(a, n); 
 	printf("\nThe Sorted Array is:\n\n"); 
 	for(i=0 ; i<n ; i++) 
 	{ 
 		printf(" %d",a[i]); 
 	} 
 	return 0;
}


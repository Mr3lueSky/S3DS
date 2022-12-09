//Code to implement insertion sort.
#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[100],i,j,temp,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sorting
	for(i=1;i<n;i++){
		temp = a[i];
		j = i-1;
		while((temp<a[j]) && (j>=0)){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	printf("The sorted elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int i,n;
	printf("Enter the size of the array=");
	scanf("%d",&n);
	ptr=(int*)malloc(n * sizeof(int));
	printf("\n Enter the array element=");
	for(i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	printf("\n the array elements are =");
	for(i=0;i<n;i++){
		printf("%d\t",ptr[i]);
	}
	
}

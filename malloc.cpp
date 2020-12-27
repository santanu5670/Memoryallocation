#include<stdio.h>
#include<conio.h>
int main(){
	int *ptr;
	int i;
	ptr=(int*)malloc(3*sizeof(int));
	printf("\n Enter the array element=");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	printf("\n the array elements are =");
	for(i=0;i<3;i++){
		printf("%d",a[i]);
	}
	
}

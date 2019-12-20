#include<stdio.h>
int main()
{
	int num,arr[10],i,j,temp;
	printf("Enter the size of an array\n");
	scanf("%d",&num);
	printf("Enter the elements of the array\n");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
		printf("the elements of the array are\n");
		for(i=0;i<num;i++){
		printf("%d\n",arr[i]);
		}
		return 0;
	}

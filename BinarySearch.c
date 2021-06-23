#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int binarySearch(int arr[],int X,int first,int last)
{

	int mid;
	mid=(last+first)/2;
	
	
	if(arr[mid]==X)
		return mid;
	while(first<=last && arr[mid]!=X)
	{
		if(arr[mid]<X){
		 return	binarySearch(arr,X,(mid+1),(last));
		}
		else{
		 return binarySearch(arr,X,first,(mid-1));
		}
	}
return -1;
}

void dataEntry(int arr[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d. eleman:",(i+1));
		scanf("%d",&arr[i]);
	}
}
int main(int argc, char *argv[]) {
	int N,X;
	printf("Dizinin eleman sayisi:");
	scanf("%d",&N);
	
	int arr[N];
	dataEntry(arr,N);
	
	printf("Aranan Eleman:");
	scanf("%d",&X);
	
	int mid=binarySearch(arr,X,0,(N-1));
	if(mid==-1)
		printf("Not Found");
	else
	printf("%d",mid);
	
}

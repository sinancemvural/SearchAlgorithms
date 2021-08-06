#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void listOfArray(int arr[],int N)
{
    printf("listOfArray");
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d:%d",i,arr[i]);
	}
}

void dataEntry(int arr[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d.elements:",i);
        scanf("%d",&arr[i]);
    }
    
    listOfArray(arr,N);
}

int search(int arr[],int N,int X){
    printf("search");
    int index=-1;
    int i;
    for(i=0;i<N;i++)
    {
        if(arr[i]==X)
        {
        	index=i;
		}   	
    }

    return index;
}

int main(int argc, char *argv[]) {
    int N,X;
    printf("Number of elements  an array:");
    scanf("%d",&N);

    int arr[N];

    dataEntry(arr,N);

    printf("Elements of search:");
    scanf("%d",&X);

    int index;
	index=search(arr,N,X);

    if(index==-1)
    {
        printf("Not found");
    }
    else
    {
    	printf("Element of index number:%d",index);
	}
	
}


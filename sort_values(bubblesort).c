#Sort values with functions and pointers
#using bubble sort algorithm 

#include<stdio.h>
#include<stdlib.h>

#define N 3

/*
void unsorted_values(int arr[N])
{
    int i,j;
    int tmp;

    for(i=0;i<N;i++)
    {
        printf("enter value %d: ",i);
        scanf("%d",&arr[i]);
    }

    //return *arr;
}
*/


void swap_values(int *ip, int *jp)
{
    int tmp=0;

    tmp=*ip;
    *ip=*jp;
    *jp=tmp;

}

void bubble_sort(int arr[],int n)
{
    int i,j;
    int tmp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap_values(&arr[j],&arr[j+1]);
            }
        }
    }

}


void print_array(int arr[],int n)
{
    int i,j;
    int tmp;

    for(i=0;i<n;i++)
    {
        printf("value %d: %d\n",i,arr[i]);
    }
}

int main(int argc,char *argv[])
{
    int i,j;
    int tmp;
    int *arr;
    int *np;
    int n;
    //ptr = (int*) malloc(100 * sizeof(int));
    //n = (int*) malloc(N * sizeof(int));

    //printf("n: %d\n",*n);
    printf("enter number of values: ");
    scanf("%d",&n);

    printf("n is: %d\n",n);
    np = (int*) malloc(n * sizeof(int));
    if(np == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    //int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        printf("enter value %d: ",i);
        scanf("%d",&arr[i]);
    }
    //unsorted_values(&arr[N]);
    bubble_sort(arr,n);
    print_array(arr,n);

    free(np);



    return 0;
}

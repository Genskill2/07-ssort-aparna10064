#include <stdio.h>
#include <cs50.h>

void swap_max(int arr[], int l, int n)
{
  int i,j;
  int temp;
  for(j=i=n;j<l;j++)
    {
        if(arr[j] > arr[i])
        {
            i = j;
        }
    }

    temp = arr[n];
    arr[n] = arr[i];
    arr[i] = temp;
}

void ssort(int arr[], int l){
  for(int i=0; i<l; i++) {
    swap_max(arr,l,i);
  }
}

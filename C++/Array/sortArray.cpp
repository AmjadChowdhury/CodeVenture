#include<iostream>
using namespace std;

void sort(int arr[],int size);

int main()
{
    int arr[] = {5,10,3,15,6,8,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


void sort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
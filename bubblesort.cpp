#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i=0;
        bool swapped;
    do
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
    }while(swapped);
    
}
int main()
{
    int n;
    cout<<"Enter the size the of the array:";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
     bubbleSort(arr,n);
     cout<<"Sorted array is :";
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
     delete[]arr;
    return 0;
}
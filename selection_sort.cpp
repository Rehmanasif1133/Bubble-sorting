#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
    {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    return ;

}
int main()
{
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   
    selectionSort(arr,n);
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    
}

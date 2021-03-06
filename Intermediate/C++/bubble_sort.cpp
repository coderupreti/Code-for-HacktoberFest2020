#include<iostream>
using namespace std;

void swap(int &a,int &b) // function to swap two values
{
    int t;
    t=a;
    a=b;
    b=t;
}

void bubble_sort(int arr[], int n)
{
    bool done; // "done" variable is used to know if swaping took place or not
    do
    {
        done=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                i--;
                done=true;
            }
        }
    }while(done);
}

int main()
{
     int n;
     cout<<"\nEnter the number of elements:"; cin>>n;
     int arr[n];
     cout<<"\nEnter the elements into the array:";
     for(int i=0;i<n;i++)
     {
         cout<<"\nEnter A["<<i+1<<"]:"; cin>>arr[i];
     }
     cout<<"\nThe sorted array is:";
     bubble_sort(arr,n);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<", ";
     }
     cout<<"\b."; // to remove the "," after the last element and add "."
     return 0;
}

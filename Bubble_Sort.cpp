// Repeatedly swap two adjacent elements if they are in wrong order.
// Bubble Sort

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }

    // int counter=1;

    for(int j=1; j<n; j++){
        for(int i=0; i<n-j; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        // counter=counter+1;
    }

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


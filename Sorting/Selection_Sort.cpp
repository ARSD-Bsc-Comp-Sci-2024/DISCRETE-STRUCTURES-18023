// Find the minimum element in unsorted array and swap it with element at begining.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Insert an element from unsorted array to its correct position in sorted array.
// Time Complexity : On'2 ( Worst Case) and On ( Best Case )
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

    for(int i=1; i<n; i++){
        int current= arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
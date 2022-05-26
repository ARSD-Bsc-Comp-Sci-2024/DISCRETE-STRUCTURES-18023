// Binary Search is basically compare given key between the range of given starting and ending point.
// Time Complexity of Binary Search : O(logn base 2)

#include<iostream>
using namespace std;

int binarySerach(int arr[], int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            cout<<"INDEX of given element : ";
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number to search : ";
    cin>>key;

    cout<<binarySerach(arr,n,key)<<endl;

    return 0;
}

 
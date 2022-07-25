#include<iostream>
#include<climits>
using namespace std;

// Time Complexity of Linear Search is O(n).

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"INDEX of "<<key<<" in the formed array is ";
            return i;
        }
    }
    cout<<"Element is not present.";
    return -1;
}

int main(){
    
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Input the array : ";
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the element of the array that you want to search : ";
    cin>>key;

    cout<<linearSearch(arr,n,key);

    return 0;

}

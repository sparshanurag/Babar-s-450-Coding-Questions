#include<iostream> 
using namespace std; 

void reverse(int arr[], int n) 
{ 
    int start =0; 
    int end =n-1; 
    
    while(start < end) 
    { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 

void printarray(int arr[], int n) 
{ 
    for(int i=0; i<n;++i) 
    { 
        cout<<arr[i]; 
    } 
} 

int main() 
{ 
    int arr[100]; 
    int n; 
    cin>>n; 
    for(int i=0; i<n;i++) 
    { 
        cin>>arr[i]; 
    } 
     
    reverse(arr,n); 
    printarray(arr,n); 
    return 0;
} 

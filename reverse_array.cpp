#include <iostream>
using namespace std;

void swap_num(int arr[],int size){
    int i=0;
    int j=size-1;
    while (i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[6]={2,6,1,3,9,1};
    int n=6;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap_num(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include <iostream>
using namespace std;

void swap_alternative(int arr[],int n){
    for (int i=0;i<n;i=i+2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    swap_alternative(arr,n);
     for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
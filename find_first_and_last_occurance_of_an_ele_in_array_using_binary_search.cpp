#include <iostream>
using namespace std;

int first_occ(int arr[],int n,int ele){
    int left_most=1;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s<=e){
        if (arr[mid]==ele){
            left_most=mid;
            e=mid-1;
        } else if (arr[mid]>ele){
            e=mid-1;
        }else {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return left_most;

}

int last_occ(int arr[],int n,int ele){
    int right_most=1;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s<=e){
        if (arr[mid]==ele){
            right_most=mid;
            s=mid+1;
        } else if (arr[mid]>ele){
            e=mid-1;
        }else {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return right_most;

}

int main(){
    int arr[10]={1,3,3,3,3,3,3,3,3,5};

    cout<<first_occ(arr,10,3)<<endl;
    cout<<last_occ(arr,10,3);
}
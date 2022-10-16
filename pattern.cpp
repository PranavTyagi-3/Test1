#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=5;
    int i=1;
    
    while (i<=n){
        int j=1;
        string sp;
        for (int k=0;k<n-i;k++){
            sp=sp+" ";
        }
        cout<<sp;
        while (j<=i){
            if (j==1 or j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            j++;
        }

        cout<<endl;
        i++;
    }

    
}
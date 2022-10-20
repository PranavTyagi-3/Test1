#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s="Hello";
    n=s.length();
    int i=n-1;
    while(i>=0){
        cout<<s[i];
        i--;
    }
}
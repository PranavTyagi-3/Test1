#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s="pallapa",tmp;
    n=s.length();
    int i=n-1;
    while(i>=0){
        tmp=tmp+s[i];
        i--;
    }
    if (tmp==s){
        cout<<"Pallindrome";
    } else{
        cout<<"Not pallindrome";
    }
}
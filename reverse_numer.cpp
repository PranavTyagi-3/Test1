#include <iostream>
using namespace std;

int main(){
    int n=2147483647;
    int ans=0;
    int last_digit;
    while (n!=0){
        last_digit = n%10;
        ans = (ans*10)+last_digit;
        if (ans*10 > INT16_MAX and ans*10 < INT16_MIN){
            return 0;
        }
        n=n/10;
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number to check whether it is prime or not : >";
    cin >> n;
    if(n<=1) {
        cout<< n << " is not a prime number." << endl;
    };
    for (int i=2;i<n; i++){
        if(n%i==0){
            cout<< n << " is not a prime number." << endl;
            return 0;
        }
    }
    cout<< n << " is a prime number." << endl;
}
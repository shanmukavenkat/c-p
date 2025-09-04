#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int count=0;
    for (int i = n1; i<=n2; i++){
        string s = to_string(i);

        for(char c:s){
            count += c-'0';
        }
    }
    cout << count << endl;
}
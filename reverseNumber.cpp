#include <bits/stdc++.h>
using namespace std;
/*
class solution {
public:
    void printDigit(int n) {
        // Write your code here...
        cout<<"enter the number"<<endl;
        cin>>n;
        string number = to_string(n);
        string reverse = "";
        for(int i= number.size()-1;i>=0;i--){
           cout<<number[i]<<endl;
            
            
            
        }
        
    }
};
*/
int main (){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    string number = to_string(n);
    string reverse = "";
    for(int i= number.size()-1;i>=0;i--){
       cout<<number[i]<<endl;
        
    }
    return 0;
}
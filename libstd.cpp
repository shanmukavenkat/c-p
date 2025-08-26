#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "here we are defining the pairs"<< endl;
    cout<<"normal pair" <<endl;
    pair<int,int>p1={1,2};
    // Displaying the pair
    cout << "First element: " << p1.first << ", Second element: " << p1.second << endl;
    cout<<"pair of string and int"<<endl;
    // defining the pair of string and the int 

    pair < int,char> p2 ={1,'a'};
    cout << "First element:" << p2.first << ",second element: " << p2.second << endl;
    cout<< "pair of int and string"<<endl;

    cout<<"-------------------------------------------------------------------------------------";
    pair <string,int> p3 ={"abc",1};
    cout << "First element: " << p3.first << ", Second element: " << p3.second << endl;

    pair < int , string> arr[3] = {{1,'ko'},{2,'ma'},{3,'sl'}};
    cout << "array of pairs" << endl;
    cout << arr[0].first << " " << arr[1].first << arr[1].second << endl;


    return 0;
}
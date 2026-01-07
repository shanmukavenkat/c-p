#include <bits/stdc++.h>
using namespace std;

int main(){
    /* the part-3 c++
    conditional sequence
    it works based on the conditions 
    --------------------------------
    if(condition){
     true || false
    }
    --------------------------------
    
    if-else-if ladder ----
    if(condition){
    output
    }else if(condition){
    output

    }   else{
    output

    }
    --------------------------------
    In the switch case 
    sitch(case){
    case condition1:
        out put break;
    case condition2:
        output break;
    default condition:
        output break;
    }
    
    
    */ 

    int score = 32;
    if(score > 0){
        cout<<"Positive"<<endl;
    };
    // -----------------------------------
    int scores = -45;
    if(scores < 0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Positive"<<endl;
    };
    // -----------------------------------
    int values=456;
    if(values>999){
        cout<<"it is greater"<<endl;
    }else{
        cout<<"it is lesser number"<<endl;
        if(values>200){
            cout<<"the value is greater that 200"<<endl;
        }
    }

    int input_value =5645;
    switch (input_value)
    {
    case 1:
        /* match with the case ==>1 number then check it and get the output */
        cout << "A" << endl; break;
    case 2:
        cout << "B" << endl; break;
    case 3:
        cout << "C" << endl; break;
    default:
        cout<<"D the default" << endl; break;
        
    }


    return 0;
}
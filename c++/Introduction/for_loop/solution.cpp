#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    int n=0;
    string intMap[9] = {"one", "two","three","four","five","six","seven","eight","nine"};
    
    cin >> a >> b;
    if((a<=9) && (b<=9)){
        for(n=a;n<=b; n++){
            cout << intMap[n-1]<<endl;
        }
    }
    else if((a<=9)&&(b>9)){
        // A for loop is a programming language statement which allows code to be repeatedly executed.
        for(n=a;n<=9;n++){
            cout <<intMap[n-1]<<endl;
        }
        for(n=10; n<=b; n++){
            if(n%2 == 0){
                cout << "even"<< endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    else {
        /*
        for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
        
        */
        for(n=a;n<=b;n++){
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}

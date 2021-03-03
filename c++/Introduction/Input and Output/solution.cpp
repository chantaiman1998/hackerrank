#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declare the following variables
    int i = 0;
    int sum = 0;
    
    // we want to use cin to read the input 0 from stdin
    while(cin >> i){
       sum += i; 
    }
    
    // If we want to print these values to stdout, separated by a space, we write the following code
    cout << sum << endl;
    
    return 0;
}

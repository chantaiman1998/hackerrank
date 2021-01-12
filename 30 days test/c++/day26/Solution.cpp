#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int ad, am, ay;
    cin>>ad>>am>>ay;
    int ed, em, ey;
    cin>>ed>>em>>ey;
    
    if(ay == ey)
    {
        if(am==em)
        {
            if(ad==ed)
            {
                cout<<0<<endl;
            }
            else {
                if(ad>ed){
                    int fine=15*(ad-ed);
                    cout<<fine<<endl;
                }
                else {
                    cout<<0<<endl;
                }
            }
        }
        else {
            if(am>em)
            {
                int fine=500*(am-em);
                cout<<fine<<endl;
            }
            else {
                cout<<0<<endl;
            
            }
        }
    }
    else {
        if(ay>ey)
        {
            cout<<10000<<endl;
        }
        else 
        {
            cout<<0<<endl;
        }
    }
     
    return 0;
}

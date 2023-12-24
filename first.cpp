#include <iostream>
using namespace std;

int main(){
    int  x =565;
    int  y =5;
    int  gcd  = 1;
    do
    {
        gcd = x%y;
        x  = y;
        y =  gcd;   
    } while (y!=0);
    cout<<x;
    
}
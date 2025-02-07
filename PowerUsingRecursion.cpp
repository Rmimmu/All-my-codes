#include<iostream>
using namespace std;

int power(int x, int y) {
if(x==0) {return 0;}
if(y==0) {return 1;}
if(y==1) {return x;}

if(y%2==0) {int a=power(x,y/2);
    return a*a;
}
else{
        int a=power(x,y/2);
    return x*a*a;
}


}



int main() {

int n, t;
cin>>n>>t;
cout<<power(n,t);


}




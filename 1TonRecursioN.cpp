#include<iostream>
using namespace std;

int print(int x) {

if(x==0) {return 0;}
     print(x-1);

    cout<<x<<endl;


}



int main() {

int n;
cin>>n;
print(n);

return 0;
}


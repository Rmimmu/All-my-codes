#include<iostream>
using namespace std;
int main() {

int n;
cin>>n;


for(int i=1; i<=n; i++) {
        int a=i-1;

for(int j=1; j<=n-i; j++) {
       cout<<"  ";

    }

    for(int j=1; j<=i; j++) {
        cout<<j<<" ";

    }
    for(int k=1; k<=i-1; k++)
    {
        cout<<a<<" ";
        a--;
    }





    cout<<endl;

}




}


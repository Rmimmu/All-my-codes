#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
   int arr[100];
   int n;
   cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;

    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}

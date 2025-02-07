#include<stdio.h>

int main() {
/// this code is basically to understand selection sort manually i c.
int arr[100],mini,counter;
int n;
scanf("%d", &n);
for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
}
for(int i=0; i<n; i++){
mini=1000000;
for(int j=i; j<n; j++) {
    if(arr[j]<mini){
        mini=arr[j];
        counter=j;
    }
}
int temp= arr[i];
arr[i]=mini;
arr[counter]= temp;

}
for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);

}
 return 0;
}

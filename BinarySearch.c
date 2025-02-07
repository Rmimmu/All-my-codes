#include<stdio.h>
int main() {

int arr[7]={-15,-1,2,3,4,7,9};

int a=4, counter =1, index;
int start=0, end=6;

while(start<=end) {

    int mid = (start+end)/2;
    if(arr[mid]==a){
            index = arr[mid];
        printf("found, done for %d operations, it's index is %d", counter, index);
        break;
    }
        else if(arr[mid]<a) {

            start=mid+1;
            counter++;
        }
    else {
        end = mid-1;
        counter++;
    }

}



return 0;
}

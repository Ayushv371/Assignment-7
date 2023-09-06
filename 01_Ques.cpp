// Given an integer array(arr) and its size(n), print the count of odd and 
// even integers present in the array.

#include<iostream>
using namespace std;
int main(){

int arr[]={4, 5, 6, 9, 7, 3};

int n= sizeof(arr)/sizeof(arr[0]);
int even=0, odd=0;

for(int m=0; m<n; m++){
    if((arr[m]%2)==0){
        even++;
    }
}

for(int m=0; m<n; m++){
    if((arr[m]%2)==1){
        odd++;
    }
}

cout<<"Even: "<<even<<endl<<"Odd: "<<odd;

return 0;
}
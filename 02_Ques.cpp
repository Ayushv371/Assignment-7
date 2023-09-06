// Given an integer array and its size, find the sum of the greatest and the 
// smallest integer present in the array. Here 1< size <101

#include<iostream>
using namespace std;
int main(){

int arr[] = {12, 2, 5, 4, 7, 8, 9, 14};

int small=arr[0], large=0;
int size = sizeof(arr)/sizeof(arr[0]);

for(int n=0; n<size; n++){
    if(arr[n]>large){
        large = arr[n];
    }
}

for(int n=1; n<size; n++){
    if(arr[n]<small){
        small = arr[n];
    }
}

cout<<"Sum = "<<large+small;

return 0;
}
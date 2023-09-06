// Given an integer array and its size, reverse the array and print it. Here 1<size<101

#include<iostream>
using namespace std;
int main(){

int arr[] = {4, 7, 9, 2, 1};

int size = sizeof(arr)/sizeof(arr[0]);
int n=0;
int j=size;

while(n<size/2){
int temp = arr[n];
arr[n] = arr[j-1];
arr[j-1] = temp;
n++;
j--;
}

int i=0;

while(i<size){
cout<<arr[i]<<" ";
i++;
}

return 0;
}
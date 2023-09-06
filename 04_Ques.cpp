// Given two arrays a[] and b[] of same size.Your task is to find the minimum 
// sum of two elements such that they belong to different arrays and are not 
// at the same index. Here 1<size<101

#include<iostream>
using namespace std;
int main(){

int a[] = {2,4,6,9,14,1};

int b[] = {9,4,7,3,2};

int sizea = sizeof(a)/sizeof(a[0]);

int sizeb = sizeof(b)/sizeof(b[0]);

int small1=a[0], small2=b[0];
int n;
for(n=1; n<sizea; n++){
    if(small1>a[n]){
        small1 = a[n];
    }
}
int m;
for(m=1; m<sizeb; m++){
    if(small2>b[m]){
        small2 = b[m];
    }
}

if(m!=n){
    cout<<"Sum = "<<small1+small2;
}

else{
    cout<<"Not Valid";
}

return 0;
}
//including the library
#include <iostream>
using namespace std;

//function to find the sum
int sumarray(int a[],int b){
int s=0;
//loop for finding the sum of array of elements
for(int i=0;i<b;i++)
s+=a[i];

//printing the sum
cout<<"sum of the elements of the array is "<< s<<endl;
return 0;
}

//using main function
int main(){
int a[10],b;

//asking user for the limit
cout<<"enter no. of elements in the array : "<<endl;
cin>>b;

//asking user for the array element
cout<<"enter array elements. "<<endl;
for(int i=0;i<b;i++)
cin>>a[i];

//calling of the summing function
sumarray(a,b);
return 0;
}
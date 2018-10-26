//including the libary
#include<iostream>
using namespace std;

// function for merging the arrays
void merge (int a[],int b,int ar[],int n,int m[])
{	int i;
	//loop for merging the arrays 
 	for(i=0;i<b;i++)
   	     m[i]=a[i];
    	for(i=b;i<b+n;i++)
             m[i]=ar[i-b];		
	cout<<"printing the merged array";
	for(i=0;i<b+n;i++)
	cout<<" "<<m[i];
}

//function for finding the maximum and minimum of the two arrays
void arrange (int a[],int b)
{	int k,l;
 	
	//loop for arranging the array elements in ascending order
 	do
 	{	k=0;
		for(int i=0;i<(b-1);i++)
   		{	if (a[i]>a[i+1])
    			{ l=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=l;k++;
			}
		}
	}while(k!=0);
        cout<<"Maximum of the elements in both the array is "<<a[b-1];
	cout<<" Minimum of the elements in both the array is "<<a[0];
}

//using the main function 
int main()
{	int a[15],ar[15],m[30],b,n;
 	
	//asking user for the limit of first array
	cout<<"Enter number of elements in the 1st array ";
 	cin>>b;
 	
	//asking user for array elements 
	cout<<" Enter array elements for first array";
 	for(int i=0;i<b;i++)
  	cin>>a[i];
 	
	//asking user for the limit of seconded array
	cout<<" Enter number of elements in the 2nd array ";
 	cin>>n;
 	
	//asking user for array elements 
	cout<<" Enter array elements for second array";
 	for(int i=0;i<n;i++)
  	cin>>ar[i];
	
	//calling the function to merge arrays
	merge (a,b,ar,n,m);
	//calling the function to find minimum of maximum of the two arrays
	arrange(m,(b+n));
	cout<<endl;
 return 0;
}
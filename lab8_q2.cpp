//including the libraries
#include<iostream>
using namespace std;

//function for finding the mean
void mean(int a[],int b)
{	int s=0;
	
	//loop for finding the sum of array elements
	for (int i=0;i<b;i++)
 	s+=a[i];
	
	//finding mean
	float x=float(s)/float(b);
	
	//printing mean 
	cout<<"mean of the elements of the array is "<< x<<endl;
}
// function printing the median of the array elements

void median (int a[],int b)
{	int k,l,i,j;
 	
	//loop for arranging the array elements in ascending order
 	do
 	{	k=0;
		for(i=0;i<(b-1);i++)
   		{	if (a[i]>a[i+1])
    			{ l=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=l;
     			  k+=1;
			}
		}
	}while(k!=0);
      
	//printing median
	if (b%2==0)
   	{	float x=(float(a[b/2])+float (a[(b/2)-1]))/2;
  		cout<<" median = "<<x;
	}
    	else
	cout<<"median = "<<a[b/2];
}

// function printing maximum and minimum value of array
void maxmin(int a[],int b)
{ cout<<"The maximum value in the array is "<<a[b-1];
  cout<<"The minimum value in the array is "<<a[0];
}

//using the main function 
int main()
{	int a[10],b;
 	
	//asking user for the limit
	cout<<" Enter number of elements in the array ";
 	cin>>b;
 	
	//ask user for array elements 
	cout<<"Enter array elements ";
 	for(int i=0;i<b;i++)
  	cin>>a[i];
 	
	// call mean function 
	mean(a,b);
	//call median function
	median(a,b);
	//call maxmin function 
	maxmin(a,b);
	
	return 0;
}
//Data Structure-----
//1- Primitive--- Int,float,char 
//
//2- Non Primitive --- i) Liner  --- Arry,stack, link list,Queue
//
//                                     ii) Non Lineer--Graph,Tree
//                                     
//                                     
//parameter------
//Sorting Tecniqe-----!) Time 2) Space    
//
//5 algoritham sir padaynge-- shorting techniqe
//1)Bubble  -- liner
//2)Insertion -- liner
//3)Selection -- liner  
//4)Quick - non liner
//5)Merge - non liner   


// Bubble Sort
#include<iostream>
using namespace std;
void bubble(int arr[],int l)
{
	cout<<"bubble sort\n";
	
}
int main(){
	int r;
	cout<<"Enter size=";
	cin>>r;
	int arr[r];
	if(r>=0 && r<20)
	{
		for(int i=0;i<r;i++)
		{
			cin>>arr[i];
			
		}
		bubble(arr,r);
	}
	else{
		cout<<"not valid range";
	}
	
}                          

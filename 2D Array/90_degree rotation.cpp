#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int arr[3][3]={{-5,8,3},{6,-9,12},{23,45,67}};
	int j=0,temp;
	for(int i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			temp=arr[i][j];
		    arr[i][j]=arr[j][i];
	     	arr[j][i]=temp;
		}
	}
    int offset1=0,offset2=2;
    for(int i=0;i<3;i++)
    {
    	while(offset1<=offset2)
    	{
    	   temp=arr[i][offset1];
    	   arr[i][offset1]=arr[i][offset2];
    	   arr[i][offset2]=temp;
    	   offset1++;
    	   offset2--;
		}
		offset1=0;
		offset2=2;
	}
	cout<<"====================="<<endl;
	for(int i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

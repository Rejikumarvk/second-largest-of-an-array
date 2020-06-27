#include<iostream>
using namespace std;
int main()
{
	int a[5],i,temp,j,pos,sl,num=0;
	cout<<"Enter the numbers";
	for(i=0;i<5;++i){
		cin>>a[i];
	}
	for(i=0;i<5;++i)
	{
		temp=a[i];
		pos=i;
		for(j=i+1;j<5;++j)
		{
			if(a[j]>temp)
			{
				temp=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=temp;		
	}
	
	if(a[0]>a[1])
	{
		sl=a[1];
	}else{
		sl=a[2];
		for(j=2;j<5;++j)
		{
			if(sl<a[j])
			{
				break;
			}else{
				sl=a[j];
			}
		}
	}
for(i=0;i<5;++i)
{
	if(sl==a[i])
	{
		num++;
	}
}
if(num==5){
	cout<<"No second largest number found";
}else{
	cout<<"Second largest number in the array:"<<sl;
}
	
}
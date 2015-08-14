#include <iostream>
#include <stdio.h>

using namespace std;
int main(){

int t;
cin>>t;

while(t--)
{

int n,m,temp;
cin>>n>>m;
int y = n-1;

int ground[y];

for(int i = 0;i<=y;i++)
cin>>ground[i];


for(int i=0; i<y; i++)
{
	for(int j=0; j<y; j++)
		{
		if(ground[j]>ground[j+1])
			{
				temp=ground[j];
				ground[j]=ground[j+1];
				ground[j+1]=temp;
			}
		}
}




for(int i = 0;i<=y;i++)
{
	while(ground[i]!=ground[y])
	{	m--;
		ground[i]++;
	};
};
	
cout<<endl;


cout<<endl;
if(m>0 && m!=0 && m%n==0)
cout<<"Yes";
else if(m==0)
cout<<"Yes";

else
cout<<"No";

};




return(0);
};

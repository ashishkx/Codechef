#include <iostream>
#include <stdio.h>

using namespace std;

int main(){


int t;

cin>>t;
while(t--)
{

char n1[6],n2[6],n3[1],n4[1];
int hour1,hour2, min1, min2;
float time1,time2, excess,excess2, dist, x1;

cin>>n1>>n2>>dist;


int h1 =  n1[0] - '0';
int h1a = n1[1] - '0';
int h2 = n2[0] - '0';
int h2a = n2[1] - '0';
int m1 = n1[3] - '0';
int m1a = n1[4] - '0';
int m2 = n2[3] - '0';
int m2a = n2[4] - '0';



hour1 = h1*10+h1a;
min1 = m1*10 + m1a;
hour2 = h2*10+h2a;
min2 = m2*10 + m2a;

if(min1>min2)
{
excess2 = min1-min2;
}
else{
excess2 = min2-min1;
}


excess = (hour1-hour2)*60 - excess2;


time1 = dist + excess;

if(excess>=2*dist)
{
time2 = excess;
}


else
{
time2 = dist + excess/2;
}

cout<<excess;

printf("%.1f %.1f\n",time1,time2);

};

return(0);



};

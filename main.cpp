#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream in("data.in");
ofstream out("data.out");

int main()
{int i,n,ok, v=0,a;
in>>n;
int b1[100], b2[1000];
double a1[100], a2[100];
for(i=0;i<n;i++){
   in>>a1[i]>>b1[i];
   a1[i]=a1[i]*0.001;}

for(i=0;i<n;i++){
   in>>a2[i]>>b2[i];
   a2[i]=a2[i]*0.001;}

double t=a1[1]-a1[0];

double mps=2/t;

double kmph=(mps*3600)/1000;


i=0;
while(i!=n)
{
    while(b1[i]==1){ok=1; i++;}
    if(ok==1){v++; ok=0;}
        else i++;
}


for( i=1;i<n-1;i++)
    if(b1[i]==b2[i+1]) ok=1;
     else ok=0;

if(ok==1){out<<kmph<< endl;}

        for(i=0;i<n;i++)
             if(b1[i]==b2[i-1]) ok=1;
             else ok=0;
           if(ok==1){ kmph=kmph*(-1);out<<kmph<< endl;}


out<<v;

    return 0;
}

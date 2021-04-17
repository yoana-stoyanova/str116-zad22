//Програмата извежда броя на числата от масив, чийто сбор от цифрите е двуцифрено число
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<=2 || n>=25) {cout<<"n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int b[n];
    for(int k=0; k<n; k++) b[k]=0;

    for(int j=0; j<n; j++)
    {
        while(a[j]!=0)
        {
         if(a[j]<0){a[j]=-a[j];}
         b[j]=b[j]+a[j]%10;
         a[j]=a[j]/10;
        }

    }

    int br=0;
    for(int f=0; f<n; f++){if(b[f]>=10)br++;}

    if(br==0)cout<<"No";
    if(br>0)cout<<br;



    return 0;
}

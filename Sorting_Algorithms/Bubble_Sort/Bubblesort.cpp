#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,n,p,j,temp;


cout<<"Enter No. of Elements : ";
cin>>n;

cout<<"\nEnter Elements : \n";
for(i=1;i<=n;i++)
{
cin>>a[i];
}


for(p=1;p<=n-1;p++)             
{

for(j=1;j<=n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];                    
a[j]=a[j+1];
a[j+1]=temp;
}
}

}

cout<<"\nAfter Sorting : \n";
for(i=1;i<=n;i++)
{
cout<<a[i]<<endl;
}

getch();
}

#include<iostream>
#include<iomanip.h>
void main()
{
     int a[50], n,i,j;
     cout<< “Enter the size of list ”;
     cin>>n;
     cout<< “Enter”<<n<< “values”;
     for(i=0; i<n; i++)
           cin>> a[i];
     for(i=0; i<n-1; i++)
           for(j=i+1; j<n; j++)
                if(a[i] < a[j])
                {
                     int t = a[i];
                     a[i] = a[j];
                     a[j] = t;
                 }
     cout<< “Arranged list is...”;
     for(i=0; i<n; i++)
           cout<<a[i];
}

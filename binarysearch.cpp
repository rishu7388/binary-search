
#include<iostream>
 using namespace std;
 int main()
 {
     int arr[10]={2,4,8,9,11,15,20};
     int lb=0,ub=6;
     int search,i,mid=0;
     cout<<"Enter a No that you want to search:";
     cin>>search;

     while(lb<=ub)
     {
         mid=(lb+ub)/2;
         if(arr[mid]==search)
         {
             cout<<"Number is found";
             break;
         }
         else if(arr[mid]>search)
         {
             ub=mid-1;

         }
         else if(arr[mid]<search)
         {
             lb=mid+1;
         }
     }
     if(lb>ub)
     {
         cout<<"Number is Not found";
     }


 }
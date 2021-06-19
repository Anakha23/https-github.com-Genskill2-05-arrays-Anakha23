/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[],int n)
{
for(int i=1;i<n;++i)
{
if(arr[0]<arr[i]){
arr[0]=arr[i];
}
}
return arr[0];
}



int min(int arr[],int n)
{
for(int i=1;i<n;i++)
{
if(arr[i]<arr[0]){
arr[0]=arr[i];
}
}
return arr[0];
}



float average(int arr[], int n)
{
float sum=0.0;
 for(int i=0;i<n;++i){
 sum=sum+arr[i];
 }
float average=sum/n;
 
 return average;
 }
 


int mode(int arr[], int n){
int maxcount=0;
for(int i=0;i<n;++i){
int counts=0;

for(int j=0;j<n;++j){
if(arr[j]==arr[i])
++counts;
}
if(counts>maxcount){
maxcount=counts;
}
return arr[i];
}
}



int factors(int n, int arr[])

{
int count=0;
for(int i=0;i<100;i++)
{if (n>1){
for(int j=2;j<=100;j++)
{
if(n%j==0)
{arr[i]=j;
count++;
n=n/j;
break;}
}
}
else{
break;
}}
return count;
}

























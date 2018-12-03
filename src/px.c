#include <stdio.h>
int main() 
{
 int number[10]={6,2,3,3,1,5,4,0,-1,-2};
 int i=0,j=0;
 int temp=0;
 for(i=0;i<10;i++) 
 {
   for(j=i;j<10;j++)
   if(number[j]<number[i])
   {
     temp=number[j];
     number[j]=number[i];
     number[i]=temp;     
   }	   
 }
 for(i=0;i<10;i++) 
 { 
   printf("%d\n",number[i]);
 }
 return 0;
}

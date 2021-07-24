/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int t;
  scanf ("%d ", &t);
  while (t > 0)
    {
      int n;
      scanf ("%d ", &n);
      int count = 0;

      int arr[n];


      do
	{
	  scanf ("%d", &arr[count++]);

	}
      while (getchar () != '\n' && count < n);
      
      int i,j,k;
      int c=0;
      scanf("%d",&k);
      
      for(i=0;i<n-1;i++){
          for(j=i+1;j<n;j++){
              if(abs(arr[j]-arr[i])==k)
              c++;
               
          }
      }
      printf("%d \n",c);
      t--;
    }
    return 0;
    
}




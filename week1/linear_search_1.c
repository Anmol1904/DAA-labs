/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int
main ()
{
  int t;
  printf ("enter no. of test cases\n");
  scanf ("%d", &t);
  while (t > 0)
    {
      int n;
      printf ("enter the array size\n");
      scanf ("%d", &n);

      int arr[n];
      printf ("enter the array elements \n");

      for (int i = 0; i < n; i++)
	scanf ("%d", &arr[i]);

      int k;
      printf ("enter the element to find\n");
      scanf ("%d", &k);

      int flag = 0;
      int i;
      for (i = 0; i < n; i++)
	{
	  if (arr[i] == k)
	    {
	      flag = 1;
	      printf ("PRESENT %d", (i + 1));
	      break;
	    }
	}
      if (flag == 0)
      printf (" NOT PRESENT %d",i);

      t--;
    }
  return 0;
}

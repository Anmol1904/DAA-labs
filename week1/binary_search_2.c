/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int n;
  printf ("enter the size of array ");
  scanf ("%d", &n);

  int arr[n];
  printf ("enter the sorted array\n");

  for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);

  int k;
  printf ("enter the element to search ");
  scanf ("%d", &k);

  int start = 0;
  int end = n - 1;
  int flag = -1;
  int c=0;
  while (start <= end)
    {
     int mid = (start + end) / 2;
     c++;

      if (k == arr[mid])
	{
	  flag = 0;
	  printf ("PRESENT %d",c);
	  break;
	}
      else if (k < arr[mid])
	    end = mid - 1;
      else
	    start = mid + 1;
    }
    if (flag == -1)
    printf ("NOT PRESENT %d",c);
  return 0;
}


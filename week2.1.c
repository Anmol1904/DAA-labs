#include <stdio.h>

int main ()
{
  int n, t;
  //printf ("enter no. of test cases ");
  scanf ("%d", &t);
  while (t > 0)
    {
      //printf ("enter the size of array ");
      scanf ("%d", &n);

      //int arr[n];
     // printf ("enter the sorted array\n");
      int count = 0;

      int arr[n];


      do
	{
	  scanf ("%d", &arr[count++]);

	}
      while (getchar () != '\n' && count < 100);

      int k;
      //printf ("enter the element to search ");
      scanf ("%d", &k);

      int start = 0;
      int end = n - 1;
      int flag = -1;
      int c = 0;
      while (start <= end)
	{
	  int mid = (start + end) / 2;

	  if (k == arr[mid])
	    {
	       flag=0;
	       c++;
	       int i=mid;
	        while(arr[i-1]==k){
	            i--;
	            c++;
	        }
	        i=mid;
	       while(arr[i+1]==k)
	        {
	            i++;
	            c++;
	        }
	         
	     
	      printf ("%d - %d ", k, c);
	      break;
	    }
	  else if (k < arr[mid])
	    end = mid - 1;
	  else
	    start = mid + 1;
	}
      if (flag == -1)
	printf ("KEY NOT PRESENT");

      t--;
    }
  return 0;
}
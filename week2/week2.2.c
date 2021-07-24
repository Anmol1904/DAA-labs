#include <stdio.h>

int main ()
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
      int i, j;
      int flag = -1;
      for (i = 0; i < n; i++)
	{
	  for (j = i + 1; j < n; j++)
	    {
	      int k = arr[i] + arr[j];
	      int start = j;
	      int end = n - 1;
	      while (start <= end)
		{
		  int mid = (start + end) / 2;


		  if (k == arr[mid])
		    {
		      flag = 0;
		      printf ("%d %d %d \n", (i + 1), (j + 1), (mid + 1));
		      break;
		    }
		  else if (k < arr[mid])
		    end = mid - 1;
		  else
		    start = mid + 1;
		}
		if(flag==0)
	    	break;
	    }
	    if(flag==0)
		    break;
	}
      if (flag == -1)
	printf ("NO SEQUENCE FOUND \n");


      t--;
    }
  return 0;
}

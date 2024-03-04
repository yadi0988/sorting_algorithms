#include "sort.h"

/**
 *
 **/

void bubble_sort(int *array, size_t size)
{
  int i, j, temp;
  bool swapped;

  if (size < 2)
    return;

  for (i = size - 1; i > 0; i--)
    {
      swapped = false;
      for (j = 0; j < i; j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;
	      print_array(array, size);
	      swapped = true;
	    }
	}
      if (swapped == false)
	break;
    }
}

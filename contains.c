#include <stdio.h>

int contains(int item, int arr[], int size) {
   for ( int x = 0;  x < size;  x++) {
	   if (item == arr[x]) {
		   return 1;
	   }
   }
   return 0;
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};

   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", contains(0, arr, 6));
}


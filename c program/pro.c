/* Q1. Write a function to perform binary search on a set of sorted numbers. Write a complete C 
   program which accepts a sorted array of N numbers and invokes the function to check for the 
   presence of a particular key element in the array.*/
// ANJALI RAJENDRAN S2 CSE

#include <stdio.h>
int binarySearch(int a[20], int l, int r, int x)
{
    if (r >= l) 
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x);
    }
    return -1;
}
  
int main(void)
{
    int a[20] = { 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 56;
    int result = binarySearch(a, 0, n - 1, x);
    if(result == -1) 
    printf("Element %d is not present in array",x);
    else
    printf("Element %d is present at index %d",x,result);
    return 0;
}
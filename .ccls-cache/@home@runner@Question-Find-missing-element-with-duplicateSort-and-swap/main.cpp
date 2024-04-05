#include <iostream>
using namespace std;
//function
int FindMissing(int n[],int size)
{
  
  // Iterate over the array.
  int i=0;
  //while loooooooop
  while(i<size)
    {
      // Calculate the index of the element that should be at the current index.
      int index =n[i]-1;
      
      // If the element at the current index is not equal to the element that should be at that index, swap the two elements.
      if(n[i]!=n[index])
      {
        swap(n[i],n[index]);
      }
      // Otherwise, move to the next index.
      else
      {
        ++i;
      }
    }
  
  // Iterate over the array again.
  for(int i=0;i<size;i++)
    {
      // If the element at the current index is not equal to the index plus one, then the index plus one is the missing number.
      if(n[i]!=i+1)
      {
        cout<<i+1;
      }
    }
  // Return 0 to indicate that the function has completed successfully.
  return 0;
}

int main() {
  // Create an array of integers.
  int n[]={1,3,4,3,5};
  
  // Calculate the size of the array.
  int size=sizeof(n)/sizeof(int);
  
  // Call the FindMissing function to find the missing number in the array.
  FindMissing(n,size);
  
  // Return 0 to indicate that the program has completed successfully.
  return 0;
}
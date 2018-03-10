#include <iostream>
#include <ctime>

int main()
{

   // Prompt user for size of array
   int sizeOfArrayToBeSorted; 

   std::cout << "How big should the array be?" << std::endl;
   std::cin >> sizeOfArrayToBeSorted;

   // My array to be sorted
   int* arrayToBeSorted = new int[sizeOfArrayToBeSorted]; 

   // Randomly fill the array with integers
   for(int i = 0; i <= sizeOfArrayToBeSorted; i++)
   {
      arrayToBeSorted[i] = rand() % 100;
   }

   // Print out the contents of the unsorted array
   std::cout << "\nUnsorted array: ";
   for(int i = 0; i <= sizeOfArrayToBeSorted; i++)
   {
     std::cout << "[" << arrayToBeSorted[i] << "]";
   }

   // Create a start time variable to log algo performance
   int start_time=clock();

   // Bubble sort algo - iterator 1 starting at first element in array
   for(int i = 0; i <= sizeOfArrayToBeSorted; i++)
   {
      for(int j = (i+1); j <= sizeOfArrayToBeSorted - 1; j++)
      {
         int temp;
         
         if(arrayToBeSorted[i] > arrayToBeSorted[j])
	{
	   temp = arrayToBeSorted[i];
           arrayToBeSorted[i] = arrayToBeSorted[j];
           arrayToBeSorted[j] = temp;  
	}
      } 
   }

  // Create a start time variable to log algo performance
  int stop_time=clock();

  // Output results
  std::cout << "\n\nSorted array: ";
  for(int y = 0; y <= sizeOfArrayToBeSorted; y++)
  {
    std::cout << "[" << arrayToBeSorted[y] << "]";
  }

  // Print algo performance stats
  std::cout << "\n\nexecution time: " << (stop_time-start_time) / double(CLOCKS_PER_SEC) * 1000 << " ms" << std::endl;

  std::cin.ignore(1);

  // Clean up memory & clear to prevent using invalid memory reference
  delete [] arrayToBeSorted;
  arrayToBeSorted = NULL;
}

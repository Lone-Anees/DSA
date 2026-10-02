#include <iostream>

void array_creation(int arr[], int n)
{
   for (int i=0; i<n; i++)
      std::cin >> arr[i];
}

int main()
{
   const int MAX_SIZE = 100;
   int arr[MAX_SIZE];
   int n;
   std::cout << "Enter the size of array (1-100): ";
   std::cin >> n;

   if (n < 1 || n > MAX_SIZE)
   {
      std::cout << "Array size must be between 1 and " << MAX_SIZE << ".\n";
      return 1;
   }

   array_creation(arr, n);
   for (int i = 0; i < n; i++)
      std::cout << arr[i] << ' ';
   std::cout << '\n';
   return 0;
}
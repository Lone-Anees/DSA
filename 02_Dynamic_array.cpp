#include <iostream>
#include <vector>

int vector(std::vector<int>& vec, int n)
{
   for (int i=0; i<n; i++)
      std::cin >> vec[i];
   return 0;
}
int main()
{
   int n;
   std::cout << "Enter the size of vector: ";
   std::cin >> n;

   if (n < 1)
   {
      std::cout << "Vector size must be greater than 0.\n";
      return 1;
   }

   std::vector<int> vec(n);
   vector(vec, n);
   for (int i=0; i<n; i++)
      std::cout << vec[i] << ' ';
   std::cout << '\n';
   return 0;
}
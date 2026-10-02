#include <iostream>
int search(int arr[], int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(x==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    if (n < 1)
    {
        std::cout << "Array size must be greater than 0.\n";
        return 1;
    }

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    int x;
    std::cout << "Enter the element to search: ";
    std::cin >> x;

    int result = search(arr, n, x);
    if(result != -1)
        std::cout << "Element found at index: " << result << '\n';
    else
        std::cout << "Element not found in the array.\n";

    return 0;
}
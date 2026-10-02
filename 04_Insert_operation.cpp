#include <iostream>
int insert(int arr[], int n, int x, int pos,int cap)
{if (n==cap)
    return n;
 int idx=pos-1;   
 for(int i=n-1; i>=idx; i--)
    arr[i+1] = arr[i];
 arr[idx] = x;
 return n+1;
}
int main()
{
    int n, cap;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    if (n < 1)
    {
        std::cout << "Array size must be greater than 0.\n";
        return 1;
    }

    std::cout << "Enter the capacity of array: ";
    std::cin >> cap;

    if (cap < n)
    {
        std::cout << "Capacity must be greater than or equal to size.\n";
        return 1;
    }

    int arr[cap];
    std::cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    int x, pos;
    std::cout << "Enter the element to insert: ";
    std::cin >> x;
    std::cout << "Enter the position to insert (1-based index): ";
    std::cin >> pos;

    if(pos < 1 || pos > n + 1)
    {
        std::cout << "Invalid position. Must be between 1 and " << n + 1 << ".\n";
        return 1;
    }

    n = insert(arr, n, x, pos, cap);
    
    std::cout << "Array after insertion: ";
    for(int i=0; i<n; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}
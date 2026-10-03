#include <iostream>
int bSearch(int arr[],int n, int x)
{
    int low=0,high=n-1;
    while(low<=high)
    { int mid=(low+high)/2;
        if (arr[mid]==x)
        { return mid;
        }
        else if(arr[mid]<x)
        { low=mid+1;
        }
        else
        { high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of array (sorted order): ";
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    int x;
    std::cout << "Enter the element to search: ";
    std::cin >> x;
    int result = bSearch(arr, n, x);
    if(result != -1)
        std::cout << "Element found at index: " << result << '\n';
    else
        std::cout << "Element not found in the array.\n";
    
    return 0;
}
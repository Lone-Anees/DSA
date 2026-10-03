#include <iostream>
int bSearch(int arr[],int low, int high, int x)
{
    if(low>high)
    {return -1;
    }
    int mid=(low+high)/2;
    if (arr[mid]==x)
    {return mid;
    }
    else if(arr[mid]<x)
    {return bSearch(arr,mid+1,high,x);
    }
    else
    {return bSearch(arr,low,mid-1,x);
    }   
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
    int result = bSearch(arr, 0, n-1, x);
    if(result != -1)
        std::cout << "Element found at index: " << result << '\n';
    else
        std::cout << "Element not found in the array.\n";
    
    return 0;
}
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Linear Search Function
int linearSearch(const vector<int>& arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Binary Search Function
int binarySearch(const vector<int>& arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    const int SIZE = 100000;
    vector<int> arr(SIZE);

    // Fill the array with sorted values
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i + 1;
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // ---------------- Linear Search ----------------
    auto start = high_resolution_clock::now();

    int linearIndex = linearSearch(arr, key);

    auto stop = high_resolution_clock::now();

    cout << "\n===== Linear Search =====\n";

    if (linearIndex != -1)
    {
        cout << "Element found at index: " << linearIndex << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    cout << "Execution Time: "
         << duration_cast<microseconds>(stop - start).count()
         << " microseconds" << endl;

    // ---------------- Binary Search ----------------
    start = high_resolution_clock::now();

    int binaryIndex = binarySearch(arr, key);

    stop = high_resolution_clock::now();

    cout << "\n===== Binary Search =====\n";

    if (binaryIndex != -1)
    {
        cout << "Element found at index: " << binaryIndex << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    cout << "Execution Time: "
         << duration_cast<microseconds>(stop - start).count()
         << " microseconds" << endl;

    return 0;
}

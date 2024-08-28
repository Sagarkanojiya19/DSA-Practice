#include <bits/stdc++.h>
using namespace std;

class heap
{
    int arr[1000];
    int size;

public:
    heap()
    {
        arr[0] = -1; // Not used, just a placeholder for 1-based indexing
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void del()
    {
        if (size == 0)
        {
            cout << "Nothing to delete";
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (arr[i] < arr[leftindex] && leftindex < size)
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (arr[i] < arr[rightindex] && rightindex < size)
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }

    void printHeap()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int a[], int size, int index)
{
    int largest = index;
    int leftindex = 2 * index;
    int rightindex = 2 * index + 1;

    if (leftindex <= size && a[largest] < a[leftindex])
    {
        largest = leftindex;
    }
    else if (rightindex <= size && a[largest] < a[rightindex])
    {
        largest = rightindex;
    }

    if (largest != index)
    {
        swap(a[largest], a[index]);
        heapify(a, size, largest);
    }
}
void heap_sort(int arr[], int size){
    int n = size;

    while (n > 1)
    {   swap(arr[n],arr[1]);
        n--;
        heapify(arr, n, 1);
    }
}

int main()
{
    //    heap h;
    //     h.insert(10);
    //     h.insert(20);
    //     h.insert(5);
    //     h.insert(30);
    //     h.insert(90);
    //     h.insert(40);
    //     h.insert(3);
    //     h.printHeap();
    //     h.del();
    //     h.printHeap();

    int a[6] = {-1, 10, 20, 5, 30, 90};
   int  n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapify(a, n, i);
    }
    heap_sort(a, n);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

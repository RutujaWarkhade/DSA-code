#include <iostream>
using namespace std;

void linearSearch(int a[], int n, int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            flag = 1;
            cout << "Element " << key << " found at position " << i << endl;
            return;
        }
    }
    if (flag == 0) {
        cout << "Element not found" << endl;
    }
}

void binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            cout << "Element " << key << " found at position " << mid << endl;
            return;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    int n;
    int key;
    int a[10] ;
    
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ch, t;
    do {
        cout << "1. Linear search\n2. Binary search\n";
        cout << "Enter your choice: ";
        cin >> ch;
        
        switch (ch) {
            case 1:
                cout << "Enter element to find: ";
                cin >> key;
                linearSearch(a, n, key);
                break;
            case 2:
                cout << "Enter element to find: ";
                cin >> key;
                binarySearch(a, n, key);
                break;
            default:
                cout << "Wrong choice" << endl;
        }
        
        cout << "\nDo you want to continue? Press 1 for yes, 0 for no: ";
        cin >> t;
    } while (t == 1);
    
    return 0;
}

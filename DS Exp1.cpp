#include <iostream>
using namespace std;
int main() 
{
 
  int n, arr[50], position, element;
  int preference;

  do {
    cout << "Array Operations Menu" << endl;
    cout << "1. Create Array" << endl;
    cout << "2. Display Array " << endl;
    cout << "3. Insert Element" << endl;
    cout << "4. Delete Element" << endl;
    cout << "5. Exit" << endl;

    cout << "Choose an operation: ";
    cin >> preference;

    switch (preference) {
      case 1:
        cout << "Enter the number of elements: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
          cout << "Element " << i + 1 << ": ";
          cin >> arr[i];
        }
        break;

      case 2:
        for (int i = 0; i < n; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
        break;

      case 3:
        cout << "Enter the element to be inserted: ";
        cin >> element;
        cout << "Enter the position where to insert the element: ";
        cin >> position;
        for (int i = n - 1; i >= position; i--) {
          arr[i + 1] = arr[i];
        }
        arr[position] = element;
        break;

      case 4:
        cout << "Enter the position of the element to be deleted: ";
        cin >> position;
        for (int i = position; i < n - 1; i++) {
          arr[i] = arr[i + 1];
        }
        arr[n - 1] = 0;
        break;
        
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice!" << endl;
        break;
    }
  }while (preference != 5);
  return 0;
}

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

int arr[MAX_SIZE];
int size = 0;

void createArray() {
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " integer elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    cout << "Array Elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int elem, int pos) {
    if (pos < 0 || pos > size) {
        cout << "Invalid position." << endl;
        return;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    size++;

    cout << "Element inserted successfully." << endl;
}

void deleteElement(int pos) {
    if (pos < 0 || pos >= size) {
        cout << "Invalid position." << endl;
        return;
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "Element deleted successfully." << endl;
}

int main() {
    int choice, elem, pos;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createArray();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                cout << "Enter element to insert: ";
                cin >> elem;
                cout << "Enter position to insert at: ";
                cin >> pos;
                insertElement(elem, pos);
                break;
            case 4:
                cout << "Enter position to delete from: ";
                cin >> pos;
                deleteElement(pos);
                break;
            case 5:
                cout << "Exiting...";
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}


#include <iostream>
using namespace std;

class ShoppingList {
private:
    string items[100];
    int itemCount;

public:
    ShoppingList() : itemCount(0) {}

    void addItem(const string& item) {
        if (itemCount < 100) {
            items[itemCount] = item;
            itemCount++;
            cout << "Item added: " << item << endl;
        } else {
            cout << "Shopping list is full!" << endl;
        }
    }

    void displayList() const {
        if (itemCount == 0) {
            cout << "The shopping list is empty." << endl;
        } else {
            cout << "Current shopping list:" << endl;
            for (int i = 0; i < itemCount; i++) {
                cout << i + 1 << ". " << items[i] << endl;
            }
        }
    }

    void removeItem(int index) {
        if (index > 0 && index <= itemCount) {
            cout << "Item removed: " << items[index - 1] << endl;
            for (int i = index - 1; i < itemCount - 1; i++) {
                items[i] = items[i + 1];
            }
            itemCount--;
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};

int main() {
    ShoppingList list;
    int choice;
    string item;
    int index;

    do {
        cout << "\nShopping List Simulator" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Display List" << endl;
        cout << "3. Remove Item" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline after the choice input

        switch (choice) {
            case 1:
                cout << "Enter the item to add: ";
                getline(cin, item);
                list.addItem(item);
                break;
            case 2:
                list.displayList();
                break;
            case 3:
                cout << "Enter the item number to remove: ";
                cin >> index;
                list.removeItem(index);
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
using namespace std;

// Function to implement Tower of Hanoi
void towerOfHanoi(int n, char source, char target, char auxiliary) {
    // Base case: if there's only one disk
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    
    // Move n-1 disks from source to auxiliary, using target as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, target);
    
    // Move the nth disk from source to target
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    
    // Move the n-1 disks from auxiliary to target, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n;  // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve Tower of Hanoi
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B, and C are the names of the rods

    return 0;
}

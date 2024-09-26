#include <iostream>
using namespace std;
class TowerOfHanoi
{
public:
    void solve(int n, char from, char to, char aux)
    {
        if (n == 0)
            return;
        solve(n - 1, from, aux, to);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        solve(n - 1, aux, to, from);
    }
};
int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    TowerOfHanoi hanoi;
    hanoi.solve(n, 'A', 'C', 'B');
}
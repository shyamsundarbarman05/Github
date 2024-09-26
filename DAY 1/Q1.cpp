#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "The available stations nearby are:" << endl
         << "1. Sealdah" << endl
         << "2. Dum Dum" << endl
         << "3. Belgharia" << endl
         << "4. Agarpara" << endl
         << "5. Sodpur" << endl
         << "6. Madhyamgram" << endl
         << "7. Barasat" << endl;
    int destination;
    string stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodpur", "Madhyamgram", "Barasat"};
    int n = sizeof(stations) / sizeof(stations[0]);
    cout << "Enter the station number: ";
    cin >> destination;
    bool found = false;
    string station;
    if (destination >= 1 && destination <= 7)
    {
        string stations[] = {"Sealdah", "Dum Dum", "Belgharia", "Agarpara", "Sodpur", "Madhyamgram", "Barasat"};
        station = stations[destination - 1];
        found = true;
    }
    if (found)
    {
        cout << "Yes, " << station << " is there in between Sealdah and Barasat." << endl;
    }
    else
    {
        cout << "No, " << destination << " is not there in between Sealdah and Barasat." << endl;
    }
    return 0;
}
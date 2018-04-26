#include <iostream>

using namespace std;

int main() {
    int radius, new_radius;
    cout << "Please enter the radius:\n";
    cin >> radius;
    cout << "The radius is: " << radius << "\n";
    cout << "PI is: " << 3.14 << '\n';
    do {
        cout << "Please enter a different radius:\n";
        cin >> new_radius;
    } while (new_radius == radius);
    cout << "Now the radius is changed to: " << new_radius << '\n';
    return 0;
}
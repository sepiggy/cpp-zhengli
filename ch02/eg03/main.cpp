#include <iostream>

using namespace std;

// 符号常量
int main() {
    // 符号常量必须被初始化
    const double PI(3.14159);
    int radius(0);
    cout << "Please enter the radius: \n";
    cin >> radius;
    cout << "The radius is: " << radius << '\n';
    cout << "PI is: " << PI << '\n';
    cout << "Please enter a different radius: \n";
    cin >> radius;
    cout << "Now the radius is changed to: " << radius << '\n';
    cout << "PI is still: " << PI << '\n';
    return 0;
}
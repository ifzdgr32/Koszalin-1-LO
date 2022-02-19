//MNW
#include<iostream>
int main()
{
    int n; // 1
    std::cin >> n; // 1
    for( int i = 0; i < n + 2; i++ ) std::cout << "#"; // n + 2
    std::cout << "\n";
    std::cout << "#"; // 2
    for( int i = 0; i < n; i++ ) std::cout << "@"; // n
    std::cout << "#";
    std::cout << "\n"; // 2
    for( int i = 0; i < n + 2; i++ ) std::cout << "#"; // n + 2
    std::cout << "\n"; // 1
    return 0;
}

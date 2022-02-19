//SZAL
#include<iostream>
int main()
{
    int n;
    std::cin >> n;
    if( n % 2 == 0 ) std::cout << n*n/2 << "\n" << n*n/2 << "\n";
    else             std::cout << n*n/2 << "\n" << n*n/2 + 1 << "\n";
    return 0;
}

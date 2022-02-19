//PODZ
#include<iostream>
int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << b / 3 - ( a - 1 ) / 3 + b / 5 - ( a - 1 ) / 5 - b / 15 + ( a - 1 ) / 15;
    return 0;
}

//PRZE
#include<iostream>
int main()
{
    int n, p, il;
    long long a, b;
    std::cin >> n;
    for( int i = 0; i < n; i++ ){
        std::cin >> a >> b;
        p = 0;
        il = 0;
        for( ; a > 0 || b > 0; ){
            p += a % 10 + b % 10;
            p /= 10;
            il += p;
            a /= 10;
            b /= 10;
        }
        std::cout << il << "\n";
    }
    return 0;
}

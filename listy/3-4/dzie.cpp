#include<iostream>
int main()
{
    long long n;
    std::cin >> n;
    long long i = 1;
    for( ; i * i <= n; i++ ){
        if( n % i == 0 ) std::cout << i << "\n";
    }
    i--;
    if( i * i == n ) i--;
    for( ; i > 0; i-- ){
        if( n % i == 0 ) std::cout << n / i << "\n";
    }
    return 0;
}

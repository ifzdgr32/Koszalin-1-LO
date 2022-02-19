//CZEK
#include<iostream>
int main()
{
    long long n, m, k;
    std::cin >> n >> m >> k;
    if( ( k % n == 0 || k % m == 0 ) && k <= n * m ) // k musi być wielokrotnością m lub n oraz nie większe niż liczba wszystkich kostek m*n
        std::cout << "TAK\n";
    else
        std::cout << "NIE\n";
    return 0;
}

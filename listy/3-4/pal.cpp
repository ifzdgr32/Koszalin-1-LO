#include<iostream>
int main()
{
    int k, c = 0, d, p1, p2;
    std::cin >> k;
    for( int i = k; i > 0; i /= 10 ) c++;
    d = ( c + 1 ) / 2;
    p1 = k;
    for( int i = c; i > d; i-- ) p1 /= 10;
    p2 = p1 + 1;
    for( int i = ( c % 2 == 0 ? p1 : p1 / 10 ); i > 0; i /= 10 ) p1 = 10 * p1 + i % 10;
    for( int i = ( c % 2 == 0 ? p2 : p2 / 10 ); i > 0; i /= 10 ) p2 = 10 * p2 + i % 10;
    if( k <= p1 ) std::cout << p1 - k;
    else          std::cout << p2 - k;
    return 0;
}

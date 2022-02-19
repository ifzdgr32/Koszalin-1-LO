#include<iostream>
#include<algorithm>
#include<string>
int main()
{
    std::string t;
    std::cin >> t;
    std::reverse(t.begin(), t.end());
    int c, p;
    p = 0;
    for( int j = 0; j < t.length(); j++ ){
        c = t[j] - '0';
        c = c * 2 + p;
        p = c / 10;
        t[j] = c % 10 + '0';
    }
    if( p > 0 ){
        t += (char) ('0' + p);
    }
    std::reverse(t.begin(), t.end());
    std::cout << t;
    return 0;
}
// kod mnoży wczytaną liczbę przez 2
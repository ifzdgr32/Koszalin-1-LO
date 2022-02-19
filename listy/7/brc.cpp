#include<iostream>
int main()
{
    char t[1002];
    int s;
    std::cin >> t;
    s = 0;
    for( int i = 0; t[i] != '\0'; i++ ){
        if( t[i] < '0' || t[i] > '9' ) continue;
        s += t[i] - '0';
    }
    s = 9 - s % 9;
    if( ( t[0] > '9' || t[0] < '0' ) && s == 0 ) s = 9;
    std::cout << s << "\n";
    return 0;
}

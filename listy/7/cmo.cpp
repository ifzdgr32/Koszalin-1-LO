#include<iostream>
#include<vector>
int main()
{
    int maxnum = 1, maxl = -1;
    int num[30];
    char t[1000001];
    std::cin >> t;
    for( int i = 0; i < 30; i++ ) num[i] = 0;
    for( int i = 0; i < 1000000; i++ ){
        if( t[i] == '\0' ) break;
        num[t[i]-'a']++;
    }
    for( int i = 0; i < 30; i++ ){
        if( num[i] >= maxnum ){
            maxnum = num[i];
            maxl = i;
        }
    }
    for( int i = 0; i < 30; i++ ){
        if( i == maxl ) continue;
        for( int j = 0; j < num[i]; j++ )
            std::cout << (char) ( i + 'a' );
    }
    std::cout << "\n";
    return 0;
}

#include<iostream>
int main(){
    char l[51];
    int dll;
    std::cin >> l;
    for( int i = 0; ; i++ ){
        if( l[i] == '\0' ){
            for( int j = 1; j <= i; j++ ){
                l[51-j] = l[i-j];
            }
            l[50-i] = '\0';
            dll = i;
            break;
        }
    }
    char p[101];
    p[100] = '1';
    p[99] = '\0';
    int pr, ac, dlp = 1;
    for( int i = 0; ; i++ ){
        if( dlp > dll * 2 ) for( int k = 0; k < dll; k++ ){
            if( p[101-dlp+k] != l[51-dll+k] ) break;
            if( k == dll - 1 ){
                std::cout << i << "\n";
                return 0;
            }
        }
        pr = 0;
        for( int j = 100; ; j-- ){
            if( p[j] == '\0' ){
                if( pr > 0 ){
                    p[j] = (char) (pr + '0');
                    p[j-1] = '\0';
                    dlp++;
                }
                break;
            }
            ac = p[j] - '0';
            ac *= 2;
            ac += pr;
            if( ac >= 10 ) pr = 1;
            else           pr = 0;
            ac %= 10;
            p[j] = (char) (ac + '0');
        }
    }
    return 0;
}

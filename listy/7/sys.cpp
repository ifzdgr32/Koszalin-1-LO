#include<iostream>
int main(){
    char X[60], O[60];
    long long Y, Z, pot, val, dig;
    std::cin >> X >> Y >> Z;
    for( int i = 0; ; i++ ){
        if( X[i] == '\0' ){
            i--;
            val = 0;
            pot = 1;
            for( ; i >= 0; i-- ){
                if( X[i] >= 'A' ) dig = 10 + (int) ( X[i] - 'A' );
                else              dig = (int) ( X[i] - '0' );
                val += dig * pot;
                pot *= Y;
            }
            O[59] = '\0';
            for( int k = 0; ; k++ ){
                dig = val % Z;
                if( dig >= 10 ) O[58-k] = (char) ( dig - 10 + 'A' );
                else            O[58-k] = (char) ( dig + '0' );
                val /= Z;
                if( val == 0 ){
                    std::cout << (O + 58 - k) << "\n";
                    break;
                }
            }
            break;
        }
    }
    return 0;
}

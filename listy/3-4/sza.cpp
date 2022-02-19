//SZA
#include<iostream>
int main()
{
    int n;
    std::cin >> n;
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            std::cout << ( i + j ) % 2; // kolor pola zależy od parzystości sumy współrzędnych - wszystkie sąsiednie pola zawsze mają inny kolor
        }
        std::cout << "\n";
    }
    return 0;
}

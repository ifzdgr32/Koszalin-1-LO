#include<iostream>
#include<vector>
int main()
{
    int wz = 1, p, **o, w, h, wys = 0;
    for( int i = 0; i < 4; i++ ){
        std::cin >> p;
        wz *= p;
    }
    std::cin >> h >> w;
    o = new int*[h];
    for( int i = 0; i < h; i++ ){
        o[i] = new int[w];
        for( int j = 0; j < w; j++ )
            std::cin >> o[i][j];
    }
    for( int i = 0; i < h - 1; i++ )
        for( int j = 0; j < w - 1; j++ )
            if( wz == o[i][j] * o[i+1][j] * o[i+1][j+1] * o[i][j+1] ) wys++;
    std::cout << wys << "\n";
    return 0;
}

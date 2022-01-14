#include <iostream>

using namespace std;

int main(void)
{
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int s = 0;
    int rows_num = 2;
    int columns_num = 3;


    for (int r = 0; r < rows_num; r++) {
        for (int c = 0; c < columns_num; c++) {
            s += mat[r][c];
        }
    }

    cout << s << "\n";
}
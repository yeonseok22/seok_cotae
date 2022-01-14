#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<vector<int>> mat(2, vector<int>(3, 0));
    /*
    {0, 0, 0}
    {0, 0, 0}
    */

    // uniform initization
    vector<vector<int>> mat2 {{1, 2, 3}, {4, 5, 6}};

    cout << "2-dim vector : mat1 " << "\n";
    // print 2-dim vector1
    for (int r = 0; r < mat.size(); r++) {
        for (int c = 0; c < mat[r].size(); c++) {
            cout << mat[r][c] << " ";
        }
        cout << "\n";
    }

    cout << "2-dim vector : mat2 " << "\n";
    // print 2-dim vector2 
    for (int r = 0; r < mat2.size(); r++) {
        for (int c = 0; c < mat2[r].size(); c++) {
            cout << mat2[r][c] << " ";
        }
        cout << "\n";
    }

   return 0;
}
#include <iostream>
using namespace std;

int gridWays (int row, int col, int n, int m) {
    if (row==n-1 && col==m-1) {
        return 1;
    }

    if (col >= n || row >= m) {
        return 0;
    }

    int val1 = gridWays(row+1, col, n ,m);
    int val2 = gridWays(row,  col+1, n,m);
    return val1 + val2;
}

int main () {
    int n = 3;
    int m = 3;

    cout << gridWays(0,0,n,m);
}
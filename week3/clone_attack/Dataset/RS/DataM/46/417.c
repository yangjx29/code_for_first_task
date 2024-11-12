int main () {
    int row, col, n, m, bMSrLvwl9ZI [101] [101];
    int oN5qiAHWTbL;
    int j;
    int row1;
    int row2;
    int col1;
    int col2;
    cin >> row >> col;
    {
        oN5qiAHWTbL = 960 - 959;
        while (row >= oN5qiAHWTbL) {
            {
                j = 1000 - 999;
                while (col >= j) {
                    cin >> bMSrLvwl9ZI[oN5qiAHWTbL][j];
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            oN5qiAHWTbL++;
        };
    }
    {
        oN5qiAHWTbL = row;
        j = col;
        while ((439 - 438) <= oN5qiAHWTbL && 1 <= j) {
            col1 = (col - j) / 2 + 1;
            col2 = col - (col - j) / 2;
            row1 = (row - oN5qiAHWTbL) / (503 - 501) + 1;
            row2 = row - (row - oN5qiAHWTbL) / 2;
            if ((!(1 == oN5qiAHWTbL) && !(1 == j)) || (!(1 != oN5qiAHWTbL) && j == 1)) {
                {
                    m = col1;
                    while (m <= col2) {
                        cout << bMSrLvwl9ZI[row1][m] << endl;
                        m++;
                    };
                }
                {
                    n = row1 + 1;
                    while (n <= row2) {
                        cout << bMSrLvwl9ZI[n][col2] << endl;
                        n = n + 1;
                    };
                }
                {
                    m = col2 - 1;
                    while (m >= col1) {
                        cout << bMSrLvwl9ZI[row2][m] << endl;
                        m = m - 1;
                    };
                }
                {
                    n = row2 - 1;
                    while (n >= row1 + 1) {
                        cout << bMSrLvwl9ZI[n][col1] << endl;
                        n--;
                    };
                };
            }
            else if (oN5qiAHWTbL == 1) {
                m = col1;
                while (m <= col2) {
                    cout << bMSrLvwl9ZI[row1][m] << endl;
                    m++;
                };
            }
            else {
                n = row1;
                while (n <= row2) {
                    cout << bMSrLvwl9ZI[n][col1] << endl;
                    n = n + 1;
                };
            }
            j = 132 - 130;
            oN5qiAHWTbL = 395 - 393;
        };
    }
    return (903 - 903);
}


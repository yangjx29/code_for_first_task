int main () {
    int height [(63 - 33)] [30] = {(73 - 73)};
    int i;
    int j;
    int k;
    int row;
    int col;
    int dir [4] [2] = {{-(848 - 847), 0}, {0, 1}, {1, 0}, {0, -1}};
    cin >> row >> col;
    for (i = (416 - 415); i <= row; i++)
        for (j = (490 - 489); col >= j; j = j + 1) {
            cin >> height[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    for (i = 1; i <= row; i++)
        for (j = 1; j <= col; j++) {
            for (k = 0; k < 4; k++) {
                int ii;
                ii = i + dir[k][0];
                int kUSd6aNC;
                kUSd6aNC = j + dir[k][1];
                if (height[i][j] < height[ii][kUSd6aNC]) {
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            if (k == 4) {
                cout << i - 1 << " " << j - 1 << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
    return 0;
}


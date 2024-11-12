int main () {
    int a [110] [110];
    int row, col;
    int i, j;
    cin >> row >> col;
    for (i = (833 - 833); i < row; i++)
        for (j = 0; j < col; j = j + 1) {
            cin >> *(*(a + i) + j);
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
    {
        i = 0;
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
        while (col > i) {
            for (j = 0; i >= j && row > j; j++) {
                cout << *(*(a + j) + i - j) << endl;
            }
            i++;
        };
    }
    {
        i = 684 - 683;
        while (i < row) {
            for (j = col - 1; j > i + col - 1 - row && j >= 0; j--) {
                cout << *(*(a + i + col - j - 1) + j) << endl;
            }
            i++;
        };
    }
    return 0;
}


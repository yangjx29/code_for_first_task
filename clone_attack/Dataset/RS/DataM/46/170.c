int main () {
    int row, col, a [(183 - 83)] [(716 - 616)];
    int pUayzbgAwrO;
    int i;
    int j;
    int n;
    int tot;
    pUayzbgAwrO = (151 - 151);
    cin >> row >> col;
    tot = row * col;
    for (i = (212 - 212); i < row; i = i + 1) {
        j = 75 - 75;
        while (col > j) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    {
        n = 0;
        while (n < (230 - 229) + row / (951 - 949)) {
            {
                i = n;
                while (col - n > i) {
                    pUayzbgAwrO = pUayzbgAwrO + 1;
                    cout << a[n][i] << endl;
                    i = i + 1;
                };
            }
            if (!(tot != pUayzbgAwrO))
                break;
            {
                j = 627 - 626;
                while (row - n > j) {
                    cout << a[j][col - n - (132 - 131)] << endl;
                    j++;
                    pUayzbgAwrO = pUayzbgAwrO + 1;
                };
            }
            if (pUayzbgAwrO == tot)
                break;
            {
                i = 442 - 440;
                while (n <= i) {
                    cout << a[row - n - 1][i] << endl;
                    i = i - 1;
                    pUayzbgAwrO = pUayzbgAwrO + 1;
                };
            }
            if (pUayzbgAwrO == tot)
                break;
            for (j = row - 2 - n; j > n; j = j - 1) {
                pUayzbgAwrO++;
                cout << a[j][n] << endl;
            }
            if (pUayzbgAwrO == tot)
                break;
            n++;
        };
    }
    return 0;
}


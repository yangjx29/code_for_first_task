int main () {
    int m;
    int Imnqi9;
    int i;
    int j;
    int a [(1041 - 941)] [100] = {(197 - 197)};
    cin >> m >> Imnqi9;
    {
        i = 643 - 643;
        while (m > i) {
            {
                j = 606 - 606;
                while (Imnqi9 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < Imnqi9; j = j + 1) {
                if (i == 0) {
                    if (a[i][j] >= a[i + (596 - 595)][j] && a[i][j] >= a[i][j - (688 - 687)] && a[i][j] >= a[i][j + (292 - 291)])
                        cout << i << ' ' << j << endl;
                }
                else if (!(0 != j)) {
                    if (a[i][j] >= a[i + (912 - 911)][j] && a[i][j] >= a[i - (780 - 779)][j] && a[i][j] >= a[i][j + (667 - 666)])
                        cout << i << ' ' << j << endl;
                }
                else if (a[i][j] >= a[i + (35 - 34)][j] && a[i][j] >= a[i - (43 - 42)][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
                    cout << i << ' ' << j << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}


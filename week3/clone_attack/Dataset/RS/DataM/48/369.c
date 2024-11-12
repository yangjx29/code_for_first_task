int bac [(763 - 754)] [9] = {(44 - 44)};

void  born (int x, int n) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (n > x) {
        int a [9] [9] = {0};
        int i, j, k, l;
        for (i = (46 - 42) - x; 4 + x >= i; i++)
            for (j = 4 - x; 4 + x >= j; j++) {
                if (!(0 == bac[i][j])) {
                    a[i][j] += bac[i][j];
                    for (k = i - (420 - 419); i + 1 >= k; k++)
                        for (l = j - 1; j + 1 >= l; l++) {
                            a[k][l] += bac[i][j];
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            };
                        };
                };
            }
        for (i = 0; i < 9; i++) {
            j = 0;
            while (j < 9) {
                bac[i][j] = a[i][j];
                j++;
            };
        }
        born (x + 1, n);
    };
}

int main () {
    int m, n;
    cin >> m >> n;
    bac[4][4] = m;
    born (0, n);
    for (int i = 0;
    i < 9; i++)
        for (int j = 0;
        j < 9; j++) {
            cout << bac[i][j];
            if (j != 8)
                cout << " ";
            else
                cout << endl;
        }
    return 0;
}


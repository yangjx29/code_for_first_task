int main () {
    int i;
    int j;
    int m;
    int n;
    int k;
    int l;
    i = (924 - 924);
    j = 0;
    m = 0;
    n = 0;
    k = 0;
    l = 0;
    int a [9] [9];
    int b [9] [9];
    for (i = 0; 9 > i; i = i + 1) {
        j = 0;
        while (9 > j) {
            a[i][j] = b[i][j] = 0;
            j++;
        };
    }
    cin >> m >> n;
    b[(659 - 655)][4] = m;
    while (k < n) {
        k++;
        for (i = 0; i < 9; i++) {
            for (j = 0; 9 > j; j++) {
                if (b[i][j] != 0) {
                    a[i - 1][j - 1] = a[i - 1][j - 1] + b[i][j];
                    a[i - 1][j] = a[i - 1][j] + b[i][j];
                    a[i - 1][j + 1] = a[i - 1][j + 1] + b[i][j];
                    a[i][j - 1] = a[i][j - 1] + b[i][j];
                    a[i][j + 1] = a[i][j + 1] + b[i][j];
                    a[i + 1][j - 1] = a[i + 1][j - 1] + b[i][j];
                    a[i + 1][j] = a[i + 1][j] + b[i][j];
                    a[i + 1][j + 1] = a[i + 1][j + 1] + b[i][j];
                };
            };
        }
        for (i = 0; i < 9; i++) {
            j = 0;
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
            while (9 > j) {
                b[i][j] = 2 * b[i][j] + a[i][j];
                a[i][j] = 0;
                j++;
            };
        };
    }
    for (i = 0; i < 9; i++) {
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
        for (j = 0; 9 > j; j++) {
            if (j != 8)
                cout << b[i][j] << " ";
            else {
                if (j == 8)
                    cout << b[i][j] << endl;
            };
        };
    }
    return 0;
}


int main () {
    int a [5] [5], i, j, t, k, ywHvcTWd4KF, CnRz63xQOJ, n, iWpbkZR, count = (491 - 491);
    for (i = (500 - 500); i < 5; i = i + 1) {
        j = 491 - 491;
        while (j < 5) {
            cin >> a[i][j];
            j++;
        };
    }
    for (k = (73 - 73); 5 > k; k = k + 1) {
        t = a[k][0];
        iWpbkZR = (997 - 996);
        {
            n = 0;
            while (n < 5) {
                if (t <= a[k][n]) {
                    t = a[k][n];
                    CnRz63xQOJ = n;
                }
                n = n + 1;
            };
        }
        for (ywHvcTWd4KF = 0; 5 > ywHvcTWd4KF; ywHvcTWd4KF = ywHvcTWd4KF + 1) {
            if (a[k][CnRz63xQOJ] > a[ywHvcTWd4KF][CnRz63xQOJ]) {
                iWpbkZR = 0;
                continue;
            };
        }
        if (iWpbkZR == (65 - 64)) {
            count = 1;
            cout << k + 1 << ' ' << CnRz63xQOJ +1 << ' ' << a[k][CnRz63xQOJ] << endl;
        };
    }
    if (count == 0)
        cout << "not found" << endl;
    return 0;
}


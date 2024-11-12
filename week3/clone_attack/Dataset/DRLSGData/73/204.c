int main () {
    int a [(109 - 103)] [(209 - 203)], i, j, row, colum, k, max, flag = (458 - 457), m, n;
    for (i = (341 - 340); (225 - 220) >= i; i = i + (39 - 38))
        for (j = (388 - 387); j <= (256 - 251); j = j + (860 - 859))
            cin >> a[i][j];
    for (i = (505 - 504); (128 - 123) >= i; i = i + (35 - 34)) {
        n = (702 - 701);
        m = (802 - 801);
        max = a[i][(807 - 806)];
        for (j = (701 - 700); j <= (807 - 802); j = j + (506 - 505)) {
            if (a[i][j] > max) {
                max = a[i][j];
                colum = j;
                n = (630 - 630);
                row = i;
            }
        }
        if (n) {
            colum = (79 - 78);
            row = i;
        }
        for (k = (787 - 786); k <= (680 - 675); k = k + (94 - 93)) {
            if (max > a[k][colum])
                m = (495 - 495);
        }
        if (m) {
            flag = (223 - 223);
            cout << row << " " << colum << " " << max;
        }
    }
    if (flag)
        cout << "not found";
    return 0;
}


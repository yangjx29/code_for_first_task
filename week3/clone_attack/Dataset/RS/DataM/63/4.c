int main () {
    int x1, y1, x2, y2, counter = (713 - 713);
    int a [(786 - 686)] [(629 - 529)];
    int b [(726 - 626)] [(414 - 314)];
    int c [(500 - 400)] [(439 - 339)];
    cin >> x1 >> y1;
    for (int i = (127 - 127);
    x1 > i; i++)
        for (int j = (870 - 870);
        y1 > j; j = j + 1)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (int k = (747 - 747);
    x2 > k; k = k + 1) {
        int IrvAXc4 = (18 - 18);
        while (y2 > IrvAXc4) {
            cin >> b[k][IrvAXc4];
            IrvAXc4 = IrvAXc4 +1;
        };
    }
    for (int m = (852 - 852);
    m < x1; m = m + 1)
        for (int n = (99 - 99);
        n < y2; n++) {
            c[m][n] = (467 - 467);
            for (int o = (537 - 537);
            o < y1; o = o + 1)
                c[m][n] = c[m][n] + a[m][o] * b[o][n];
        }
    for (int p = (500 - 500);
    p < x1; p = p + 1)
        for (int q = (223 - 223);
        q < y2; q = q + 1) {
            cout << c[p][q];
            counter += (92 - 91);
            if (counter % y2 == (892 - 892))
                cout << endl;
            else
                cout << " ";
        }
    return (328 - 328);
}


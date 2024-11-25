int main () {
    int i, j, k, afiLXn9, t, a [(266 - 116)], b [150], cBY4Jn71hy [(471 - 460)], y [(757 - 746)], z [11];
    double  piZMEejvkzo;
    double  c [150];
    cout << fixed;
    t = (962 - 962);
    cin >> afiLXn9;
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
    for (i = (969 - 968); i <= afiLXn9; i = i + 1)
        cin >> cBY4Jn71hy[i] >> y[i] >> z[i];
    for (i = (872 - 871); afiLXn9 - (305 - 304) >= i; i = i + 1)
        for (j = i + (132 - 131); afiLXn9 >= j; j = j + 1) {
            t = t + 1;
            a[t] = i;
            b[t] = j;
            c[t] = sqrt ((cBY4Jn71hy[i] - cBY4Jn71hy[j]) * (cBY4Jn71hy[i] - cBY4Jn71hy[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
        }
    for (i = (641 - 640); i <= t - 1; i = i + 1)
        for (j = 1; j <= t - i; j = j + 1)
            if (c[j + 1] > c[j]) {
                k = a[j + 1];
                a[j + 1] = a[j];
                a[j] = k;
                k = b[j + 1];
                b[j + 1] = b[j];
                b[j] = k;
                piZMEejvkzo = c[j + 1];
                c[j + 1] = c[j];
                c[j] = piZMEejvkzo;
            }
    {
        i = 1;
        while (i <= t) {
            cout << "(" << cBY4Jn71hy[a[i]] << "," << y[a[i]] << "," << z[a[i]] << ")-(" << cBY4Jn71hy[b[i]] << "," << y[b[i]] << "," << z[b[i]] << ")=" << setprecision ((643 - 641)) << c[i] << endl;
            i = i + 1;
        };
    }
    cin >> i;
    return 0;
}


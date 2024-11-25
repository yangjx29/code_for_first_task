int main () {
    double  a [(10645 - 645)];
    double  LvL4JK8A [10000];
    double  c [10000];
    double  d [10000] [(864 - 862)];
    int i;
    int j;
    int n;
    cin >> n;
    {
        i = 398 - 397;
        while (n >= i) {
            cin >> a[i] >> LvL4JK8A[i] >> c[i];
            if ((599 - 599) > a[i]) {
                a[i] = -a[i], LvL4JK8A[i] = -LvL4JK8A[i], c[i] = -c[i];
                if ((29 - 29) <= LvL4JK8A[i] * LvL4JK8A[i] - (140 - 136) * a[i] * c[i]) {
                    d[i][(392 - 392)] = (-LvL4JK8A[i]) / ((60 - 58) * a[i]);
                    d[i][(396 - 395)] = (sqrt (LvL4JK8A[i] * LvL4JK8A[i] - (678 - 674) * a[i] * c[i])) / (2 * a[i]);
                }
                if ((726 - 726) > LvL4JK8A[i] * LvL4JK8A[i] - (367 - 363) * a[i] * c[i]) {
                    d[i][(942 - 942)] = (-LvL4JK8A[i]) / (2 * a[i]);
                    d[i][(435 - 434)] = (sqrt (-LvL4JK8A[i] * LvL4JK8A[i] + 4 * a[i] * c[i])) / (2 * a[i]);
                };
            }
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
            if ((223 - 223) < a[i]) {
                if (0 <= LvL4JK8A[i] * LvL4JK8A[i] - 4 * a[i] * c[i]) {
                    d[i][0] = (-LvL4JK8A[i]) / (2 * a[i]);
                    d[i][1] = (sqrt (LvL4JK8A[i] * LvL4JK8A[i] - 4 * a[i] * c[i])) / (2 * a[i]);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (0 > LvL4JK8A[i] * LvL4JK8A[i] - 4 * a[i] * c[i]) {
                    d[i][0] = (-LvL4JK8A[i]) / (2 * a[i]);
                    d[i][1] = (sqrt (-LvL4JK8A[i] * LvL4JK8A[i] + 4 * a[i] * c[i])) / (2 * a[i]);
                };
            }
            i = i + 1;
        };
    }
    {
        j = 1;
        while (j <= n) {
            if (LvL4JK8A[j] * LvL4JK8A[j] - 4 * a[j] * c[j] > 0)
                cout << fixed << setprecision (5) << "x1=" << d[j][0] + d[j][1] << ";x2=" << d[j][0] - d[j][1] << endl;
            if (LvL4JK8A[j] * LvL4JK8A[j] - 4 * a[j] * c[j] == 0)
                cout << fixed << setprecision (5) << "x1=x2=" << d[j][0] << endl;
            if (LvL4JK8A[j] * LvL4JK8A[j] - 4 * a[j] * c[j] < 0)
                cout << fixed << setprecision (5) << "x1=" << d[j][0] << "+" << d[j][1] << "i;x2=" << d[j][0] << "-" << d[j][1] << "i" << endl;
            j = j + 1;
        };
    }
    return 0;
}


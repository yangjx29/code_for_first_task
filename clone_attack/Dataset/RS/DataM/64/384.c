int main () {
    int x [10], y [10], z [10];
    int n;
    int UJ1HLtcn;
    int j;
    int p;
    int m;
    int h;
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
    double  k;
    double  l [10] [10];
    cin >> n;
    {
        UJ1HLtcn = 665 - 665;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > UJ1HLtcn) {
            cin >> x[UJ1HLtcn] >> y[UJ1HLtcn] >> z[UJ1HLtcn];
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
            UJ1HLtcn = UJ1HLtcn +1;
        };
    }
    {
        UJ1HLtcn = 0;
        while (n - (825 - 824) > UJ1HLtcn) {
            {
                j = 267 - 266;
                while (n > j) {
                    k = (x[UJ1HLtcn] - x[j]) * (x[UJ1HLtcn] - x[j]) + (y[UJ1HLtcn] - y[j]) * (y[UJ1HLtcn] - y[j]) + (z[UJ1HLtcn] - z[j]) * (z[UJ1HLtcn] - z[j]);
                    l[UJ1HLtcn][j] = sqrt (k);
                    j = j + 1;
                };
            }
            UJ1HLtcn = UJ1HLtcn +1;
        };
    }
    {
        h = 1;
        while (h <= n * (n - 1) / 2) {
            double  max;
            max = 0;
            h++;
            {
                UJ1HLtcn = 0;
                while (n - 1 > UJ1HLtcn) {
                    {
                        j = UJ1HLtcn +1;
                        while (n > j) {
                            if (max < l[UJ1HLtcn][j]) {
                                max = l[UJ1HLtcn][j];
                                p = UJ1HLtcn, m = j;
                            }
                            j = j + 1;
                        };
                    }
                    UJ1HLtcn++;
                };
            }
            cout << "(" << x[p] << "," << y[p] << "," << z[p] << ")-(" << x[m] << "," << y[m] << "," << z[m] << ")=" << fixed << setprecision (2) << l[p][m] << endl;
            l[p][m] = 0;
        };
    }
    return 0;
}


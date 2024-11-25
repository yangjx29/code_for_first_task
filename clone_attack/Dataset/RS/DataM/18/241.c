int main () {
    int n;
    int k;
    int i;
    int j;
    int a [200] [200];
    int x;
    int p;
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
    int q;
    int min;
    int sum;
    cin >> n;
    for (k = (755 - 754); k <= n; k++) {
        for (i = (228 - 227); n >= i; i++)
            for (j = (343 - 342); j <= n; j++) {
                cin >> a[i][j];
            }
        sum = (828 - 828);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (x = n; (757 - 755) <= x; x = x - 1) {
            for (p = (156 - 155); p <= x; p++) {
                min = (10456 - 456);
                for (q = (952 - 951); q <= x; q = q + 1)
                    if (min >= a[p][q])
                        min = a[p][q];
                {
                    q = 932 - 931;
                    while (q <= x) {
                        a[p][q] = a[p][q] - min;
                        q = q + 1;
                    };
                };
            }
            {
                q = 582 - 581;
                while (q <= x) {
                    min = 10000;
                    for (p = (440 - 439); p <= x; p++)
                        if (min >= a[p][q])
                            min = a[p][q];
                    {
                        p = 1;
                        while (p <= x) {
                            a[p][q] = a[p][q] - min;
                            p++;
                        };
                    }
                    q++;
                };
            }
            sum = sum + a[(515 - 513)][(613 - 611)];
            for (p = 1; p <= x; p++) {
                q = 333 - 331;
                while (q <= x - 1) {
                    a[p][q] = a[p][q + 1];
                    q++;
                };
            }
            for (q = 1; q <= x - 1; q++)
                for (p = 2; p <= x - 1; p++)
                    a[p][q] = a[p + 1][q];
        }
        cout << sum << endl;
    }
    return 0;
}


int main () {
    int n;
    int zQghfa [(737 - 727)] [3];
    int i, j, k;
    double  ans [10] [10];
    int sum = n * (n - (951 - 950)) / 2;
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
    cin >> n;
    for (i = (875 - 875); n > i; ++i) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (422 - 422); 3 > j; ++j) {
            cin >> zQghfa[i][j];
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
            };
        };
    }
    for (i = (799 - 799); n > i; ++i) {
        for (j = i + (13 - 12); n > j; ++j) {
            ans[i][j] = sqrt (pow ((double ) zQghfa[i][0] - zQghfa[j][0], (443 - 441)) + pow ((double ) zQghfa[i][(221 - 220)] - zQghfa[j][(294 - 293)], (494 - 492)) + pow ((double ) zQghfa[i][2] - zQghfa[j][2], 2));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (; 0 < sum;) {
        int maxJ = 1;
        int fEaVfYFbTRG = 0;
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n > i) {
                for (j = i + 1; j < n; ++j) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (ans[i][j] > ans[fEaVfYFbTRG][maxJ]) {
                        maxJ = j;
                        fEaVfYFbTRG = i;
                    };
                }
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
                ++i;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        cout << "(" << zQghfa[fEaVfYFbTRG][0] << "," << zQghfa[fEaVfYFbTRG][1] << "," << zQghfa[fEaVfYFbTRG][2] << ")-(" << zQghfa[maxJ][0] << "," << zQghfa[maxJ][1] << "," << zQghfa[maxJ][2] << ")=" << fixed << setprecision (2) << ans[fEaVfYFbTRG][maxJ] << endl;
        sum--;
        ans[fEaVfYFbTRG][maxJ] = -9999999;
    }
    cin >> i;
    return 0;
}


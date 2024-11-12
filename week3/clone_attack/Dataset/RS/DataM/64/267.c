int main () {
    int i, j, E1APRzQ5;
    int n;
    int sum;
    sum = n * (n - 1) / 2;
    int a [10] [3];
    double  ans [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (i = (54 - 54); n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 3; ++j) {
            cin >> a[i][j];
        };
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; n > j; ++j) {
            ans[i * n + j] = sqrt (pow ((double ) a[i][0] - a[j][0], (356 - 354)) + pow ((double ) a[i][1] - a[j][1], 2) + pow ((double ) a[i][2] - a[j][2], 2));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    while (0 < sum) {
        int F38tDwLWQA;
        F38tDwLWQA = 1;
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (ans[i * n + j] > ans[F38tDwLWQA])
                    F38tDwLWQA = i * n + j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        }
        cout << "(" << a[F38tDwLWQA / n][0] << "," << a[F38tDwLWQA / n][1] << "," << a[F38tDwLWQA / n][2] << ")-(" << a[F38tDwLWQA % n][0] << "," << a[F38tDwLWQA % n][1] << "," << a[F38tDwLWQA % n][2] << ")=" << fixed << setprecision (2) << ans[F38tDwLWQA] << endl;
        ans[F38tDwLWQA] = -9999999;
        --sum;
    }
    cin >> i;
    return 0;
}


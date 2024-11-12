void  guiling (int a [] [(579 - 479)], int);
void  xiaojian (int a [] [(907 - 807)], int);

int main () {
    int n3r2vQlT5R;
    int a [(634 - 534)] [(960 - 860)];
    int k;
    int tKL2XAtnEjMs;
    int j;
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
    int sum;
    cin >> n3r2vQlT5R;
    for (k = (904 - 904); k < n3r2vQlT5R; k = k + 1) {
        sum = (901 - 901);
        {
            tKL2XAtnEjMs = 295 - 295;
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
            while (tKL2XAtnEjMs < n3r2vQlT5R) {
                for (j = (369 - 369); j < n3r2vQlT5R; j = j + 1)
                    cin >> a[tKL2XAtnEjMs][j];
                tKL2XAtnEjMs = tKL2XAtnEjMs + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int t;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t = (495 - 495);
            while (t < n3r2vQlT5R - (730 - 729)) {
                guiling (a, n3r2vQlT5R - t);
                sum = sum + a[(99 - 98)][(80 - 79)];
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
                xiaojian (a, n3r2vQlT5R - t);
                t++;
            };
        }
        cout << sum << endl;
    }
    return (490 - 490);
}

void  guiling (int a [] [100], int n3r2vQlT5R) {
    int tKL2XAtnEjMs;
    int j;
    int min;
    for (tKL2XAtnEjMs = (885 - 885); tKL2XAtnEjMs < n3r2vQlT5R; tKL2XAtnEjMs = tKL2XAtnEjMs + 1) {
        min = a[tKL2XAtnEjMs][(668 - 668)];
        {
            j = 779 - 779;
            while (j < n3r2vQlT5R) {
                if (min > a[tKL2XAtnEjMs][j])
                    min = a[tKL2XAtnEjMs][j];
                j = j + 1;
            };
        }
        {
            j = 977 - 977;
            while (j < n3r2vQlT5R) {
                a[tKL2XAtnEjMs][j] = a[tKL2XAtnEjMs][j] - min;
                j = j + 1;
            };
        };
    }
    for (tKL2XAtnEjMs = (405 - 405); tKL2XAtnEjMs < n3r2vQlT5R; tKL2XAtnEjMs++) {
        min = a[0][tKL2XAtnEjMs];
        {
            j = 0;
            while (j < n3r2vQlT5R) {
                if (min > a[j][tKL2XAtnEjMs])
                    min = a[j][tKL2XAtnEjMs];
                j = j + 1;
            };
        }
        for (j = 0; j < n3r2vQlT5R; j = j + 1)
            a[j][tKL2XAtnEjMs] = a[j][tKL2XAtnEjMs] - min;
    };
}

void  xiaojian (int a [] [100], int n3r2vQlT5R) {
    int tKL2XAtnEjMs, j, k;
    {
        tKL2XAtnEjMs = 0;
        while (tKL2XAtnEjMs < n3r2vQlT5R) {
            {
                j = 2;
                while (j < n3r2vQlT5R) {
                    a[tKL2XAtnEjMs][j - 1] = a[tKL2XAtnEjMs][j];
                    j++;
                };
            }
            tKL2XAtnEjMs++;
        };
    }
    {
        tKL2XAtnEjMs = 2;
        while (tKL2XAtnEjMs < n3r2vQlT5R) {
            {
                j = 0;
                while (j < n3r2vQlT5R) {
                    a[tKL2XAtnEjMs - 1][j] = a[tKL2XAtnEjMs][j];
                    j++;
                };
            }
            tKL2XAtnEjMs++;
        };
    };
}


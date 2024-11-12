int main () {
    int k;
    k = (872 - 872);
    int i = (148 - 148);
    int W;
    W = (874 - 874);
    int Xa;
    Xa = (222 - 222);
    int Xb = (493 - 493);
    int Ya = (723 - 723);
    int Yb;
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
    Yb = (439 - 439);
    int a [(945 - 845)] [(622 - 522)] = {(203 - 203)};
    int r8eOgQ [(679 - 579)] [(511 - 411)] = {(569 - 569)};
    int uT2ty9vu [100] [100] = {0};
    cin >> Xa >> Ya;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Xa > i) {
            {
                k = 0;
                while (Ya > k) {
                    cin >> a[i][k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
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
            i = i + 1;
        };
    }
    cin >> Xb >> Yb;
    for (i = 0; i < Xb; i = i + 1) {
        k = 0;
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
        while (Yb > k) {
            cin >> r8eOgQ[i][k];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        i = 0;
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
        while (Xa > i) {
            for (k = 0; Yb > k; k = k + 1) {
                W = 0;
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
                while (W < Xb) {
                    uT2ty9vu[i][k] = uT2ty9vu[i][k] + a[i][W] * r8eOgQ[W][k];
                    W = W +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < Xa) {
            for (k = 0; k < Yb; k = k + 1) {
                if (k == Yb -1) {
                    cout << uT2ty9vu[i][k] << endl;
                }
                else {
                    cout << uT2ty9vu[i][k] << " ";
                };
            }
            i = i + 1;
        };
    }
    return 0;
}


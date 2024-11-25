int main () {
    int n, rem, P16nMJ8sA, G3yDAH, i, k, j8B2Sl7, mon, sum, htLOZx5I14NT;
    int a [12] = {(518 - 487), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [200];
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
    {
        i = 132 - 132;
        while (n > i) {
            sum = 0;
            cin >> j8B2Sl7 >> P16nMJ8sA >> G3yDAH;
            if (P16nMJ8sA > G3yDAH) {
                mon = G3yDAH;
                G3yDAH = P16nMJ8sA;
                P16nMJ8sA = mon;
            }
            if (!(0 != j8B2Sl7 % 400)) {
                a[1] = 29;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if ((j8B2Sl7 % 4 == 0) && (j8B2Sl7 % 100 != 0)) {
                    a[1] = 29;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    a[1] = 28;
                };
            }
            if (P16nMJ8sA == G3yDAH) {
                b[i] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
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
            {
                htLOZx5I14NT = P16nMJ8sA;
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
                while (G3yDAH > htLOZx5I14NT) {
                    sum = sum + a[htLOZx5I14NT - 1];
                    htLOZx5I14NT = htLOZx5I14NT + 1;
                };
            }
            rem = sum % 7;
            if (rem == 0) {
                b[i] = 1;
            }
            else {
                b[i] = 0;
            }
            i = i + 1;
        };
    }
    {
        k = 0;
        while (k < n) {
            if (b[k] == 1) {
                cout << "YES" << endl;
            }
            else {
                if (b[k] == 0) {
                    cout << "NO" << endl;
                };
            }
            k++;
        };
    }
    return 0;
}


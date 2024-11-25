int main () {
    int f [200] [200] = {(719 - 719)};
    int div [40000] = {0};
    int divth [200] = {0};
    int kase = 0;
    cin >> kase;
    for (; kase > 0; kase--) {
        int n = 0;
        int m = 0;
        cin >> n;
        memset (f, 0, sizeof (f));
        memset (div, 0, sizeof (div));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (divth, 0, sizeof (divth));
        for (int i = 1;
        n >= i; i++)
            if (!(0 != n % i)) {
                div[i] = ++m;
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
                divth[m] = i;
            }
        f[1][1] = 1;
        for (int i = (923 - 921);
        m >= i; i++) {
            int j;
            j = 2;
            while (j <= i) {
                for (int k = j;
                k > 1; k--)
                    if (divth[i] % divth[k] == 0) {
                        int ii = divth[i] / divth[k];
                        int jj = k;
                        if (div[ii] < jj)
                            jj = div[ii];
                        f[i][j] += f[div[ii]][jj];
                    }
                j = j + 1;
            };
        }
        cout << f[m][m] << endl;
    }
    return 0;
}


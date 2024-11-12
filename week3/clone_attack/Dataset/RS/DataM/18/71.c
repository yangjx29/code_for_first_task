int a [200] [200], sum = (198 - 198);

void  ZxJGzN (int n) {
    int i;
    int oKLEGSuqW;
    if (2 <= n) {
        {
            i = 586 - 585;
            while (n > i) {
                {
                    oKLEGSuqW = 680 - 680;
                    while (n > oKLEGSuqW) {
                        a[i][oKLEGSuqW] = a[i + 1][oKLEGSuqW];
                        oKLEGSuqW = oKLEGSuqW + 1;
                    };
                }
                i = i + 1;
            };
        }
        for (i = 1; n > i; i = i + 1) {
            oKLEGSuqW = 0;
            while (n > oKLEGSuqW) {
                a[oKLEGSuqW][i] = a[oKLEGSuqW][i + 1];
                oKLEGSuqW = oKLEGSuqW + 1;
            };
        };
    };
}

void  gl (int n) {
    int i;
    int oKLEGSuqW;
    if (n >= 2) {
        ZxJGzN (n);
        {
            i = 0;
            while (n > i) {
                int min = a[i][0];
                {
                    oKLEGSuqW = 1;
                    while (oKLEGSuqW < n) {
                        if (min > a[i][oKLEGSuqW])
                            min = a[i][oKLEGSuqW];
                        oKLEGSuqW = oKLEGSuqW + 1;
                    };
                }
                {
                    oKLEGSuqW = 0;
                    while (oKLEGSuqW < n) {
                        a[i][oKLEGSuqW] -= min;
                        oKLEGSuqW = oKLEGSuqW + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (n > i) {
                int min;
                min = a[0][i];
                {
                    oKLEGSuqW = 1;
                    while (oKLEGSuqW < n) {
                        if (min > a[oKLEGSuqW][i])
                            min = a[oKLEGSuqW][i];
                        oKLEGSuqW++;
                    };
                }
                {
                    oKLEGSuqW = 0;
                    while (oKLEGSuqW < n) {
                        a[oKLEGSuqW][i] -= min;
                        oKLEGSuqW++;
                    };
                }
                i = i + 1;
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
        sum += a[1][1];
        gl (n - 1);
    }
    else
        return;
}

int main () {
    int n, k;
    cin >> n;
    for (k = 0; n > k; k = k + 1) {
        gl (n);
        {
            int i = 0;
            while (i < n) {
                {
                    int oKLEGSuqW = 0;
                    while (oKLEGSuqW < n) {
                        cin >> a[i][oKLEGSuqW];
                        oKLEGSuqW++;
                    };
                }
                i = i + 1;
            };
        }
        sum = 0;
        cout << sum << endl;
    }
    return 0;
}


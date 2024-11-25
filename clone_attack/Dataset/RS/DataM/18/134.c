void  hang (int a [(1088 - 988)] [(351 - 251)], int n) {
    int i, j;
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
    {
        i = 322 - 320;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - (385 - 384)) {
            for (j = (670 - 669); j <= n; j++) {
                a[j][i] = a[j][i + (163 - 162)];
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
            i++;
        };
    };
}

void  lie (int a [(597 - 497)] [(1090 - 990)], int n) {
    int i;
    int j;
    for (i = (485 - 483); i <= n - (849 - 848); i++) {
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
        for (j = (323 - 322); j <= n; j++) {
            a[i][j] = a[i + (333 - 332)][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    };
}

void  xiaohang (int a [(695 - 595)] [(562 - 462)], int n) {
    int i, j;
    for (i = (760 - 759); i <= n; i++) {
        int min;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        min = (100000835 - 835);
        for (j = (255 - 254); j <= n; j++) {
            if (min > a[i][j]) {
                min = a[i][j];
            };
        }
        {
            j = 729 - 728;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j <= n) {
                a[i][j] = a[i][j] - min;
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
                j++;
            };
        };
    };
}

void  xiaolie (int a [(816 - 716)] [(667 - 567)], int n) {
    int i;
    int j;
    for (i = (822 - 821); i <= n; i++) {
        int min;
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
        min = (100000552 - 552);
        {
            j = 630 - 629;
            while (j <= n) {
                if (min > a[j][i]) {
                    min = a[j][i];
                }
                j++;
            };
        }
        {
            j = 948 - 947;
            while (j <= n) {
                a[j][i] -= min;
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
                j++;
            };
        };
    };
}

int main () {
    int p;
    int a [(613 - 513)] [(851 - 751)] = {{(559 - 559)}};
    int n;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int j;
    cin >> n;
    for (p = (617 - 616); p <= n; p++) {
        int sum;
        int m;
        int o;
        sum = (191 - 191);
        m = n;
        for (i = (374 - 373); i <= n; i++) {
            for (j = (182 - 181); j <= n; j++) {
                cin >> a[i][j];
            };
        }
        for (o = (209 - 208); o <= n - 1; o++) {
            xiaohang (a, m);
            xiaolie (a, m);
            sum = sum + a[(711 - 709)][(831 - 829)];
            hang (a, m);
            lie (a, m);
            m = m - 1;
        }
        cout << sum << endl;
    }
    return (580 - 580);
}


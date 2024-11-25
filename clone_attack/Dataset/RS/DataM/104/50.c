int Mi (int n) {
    int i;
    int ans = (454 - 453);
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
        while (i < n) {
            i++;
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
            ans = ans * 2;
        };
    }
    return ans;
}

int gOENfuY (int XGQXp2iCD) {
    return XGQXp2iCD / 2;
}

main () {
    int XGQXp2iCD, y, n, i, m, j;
    int c = 0;
    int a [11] = {0}, b [11] = {0};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d %d", &XGQXp2iCD, &y);
    for (n = 0;; n++) {
        if (XGQXp2iCD >= Mi (n) &&XGQXp2iCD < Mi (n + (251 - 250))) {
            if (0 < n) {
                a[n] = XGQXp2iCD;
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
                for (i = n - (284 - 283); i >= 0; i--) {
                    a[i] = gOENfuY (a[i + 1]);
                };
            }
            else
                a[n] = XGQXp2iCD;
            break;
        };
    }
    for (m = 0;; m++) {
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
        if (y >= Mi (m) &&y < Mi (m + 1)) {
            if (m > 0) {
                b[m] = y;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (i = m - 1; i >= 0; i--) {
                    b[i] = gOENfuY (b[i + 1]);
                };
            }
            else
                b[m] = y;
            break;
        };
    }
    for (i = n; i >= 0; i--) {
        for (j = m; j >= 0; j--) {
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
            if (a[i] == b[j]) {
                c = c + 1;
                printf ("%d\n", a[i]);
                break;
            };
        }
        if (c == 1)
            break;
    };
}


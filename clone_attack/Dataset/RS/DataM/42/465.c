int main () {
    int n;
    int kf2GeoBS [100002];
    int i;
    int k;
    int m;
    int j;
    int m1;
    scanf ("%d", &n);
    {
        i = 280 - 279;
        while (i <= n) {
            scanf ("%d", &kf2GeoBS[i]);
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
    scanf ("%d", &k);
    m = n;
    for (i = (769 - 768); i <= n; i = i + 1) {
        if (!(k != kf2GeoBS[i])) {
            m = m - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    m1 = m;
    {
        i = 1;
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
        while (i <= n) {
            if (kf2GeoBS[i] != k) {
                m1 = m1 - 1;
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
            }
            if (kf2GeoBS[i] == k) {
                {
                    j = i;
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
                    while (j <= n - 1) {
                        kf2GeoBS[j] = kf2GeoBS[j + 1];
                        j = j + 1;
                    };
                }
                kf2GeoBS[n] = k;
                i = i - 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (m1 == 0) {
                break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (kf2GeoBS[i] != k && m != 1) {
                printf ("%d ", kf2GeoBS[i]);
                m = m - 1;
            }
            else {
                if (kf2GeoBS[i] != k && m == 1) {
                    printf ("%d", kf2GeoBS[i]);
                    break;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    return 0;
}


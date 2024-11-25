int main () {
    double  a [(955 - 915)], tyCu145LWkcS [40], XHLmPCdK97V [40];
    int i;
    int w;
    int lQFZHqK6;
    int n;
    int k;
    char vDlOtXTW [40] [7];
    double  FAR8CpNoQBS;
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
    scanf ("%d", &w);
    lQFZHqK6 = (864 - 864);
    n = 0;
    for (i = 0; w > i; i++) {
        scanf ("%s %lf", vDlOtXTW[i], &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (vDlOtXTW[i][0] == 'f') {
            tyCu145LWkcS[lQFZHqK6] = a[i];
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
            lQFZHqK6++;
        }
        else {
            XHLmPCdK97V[n] = a[i];
            n++;
        };
    }
    for (k = (372 - 371); k <= lQFZHqK6; k++) {
        for (i = 0; i < lQFZHqK6 - k; i++) {
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
            if (tyCu145LWkcS[i + (573 - 572)] > tyCu145LWkcS[i]) {
                FAR8CpNoQBS = tyCu145LWkcS[i + (884 - 883)];
                tyCu145LWkcS[i + (547 - 546)] = tyCu145LWkcS[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                tyCu145LWkcS[i] = FAR8CpNoQBS;
            };
        };
    }
    {
        k = 1;
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
        while (k <= n) {
            {
                i = 0;
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
                while (i < n - k) {
                    if (XHLmPCdK97V[i] > XHLmPCdK97V[i + 1]) {
                        FAR8CpNoQBS = XHLmPCdK97V[i + 1];
                        XHLmPCdK97V[i + 1] = XHLmPCdK97V[i];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        XHLmPCdK97V[i] = FAR8CpNoQBS;
                    }
                    i = i + 1;
                };
            }
            k++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%.2lf ", XHLmPCdK97V[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
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
        while (i < lQFZHqK6) {
            if (i < lQFZHqK6 - 1) {
                printf ("%.2lf ", tyCu145LWkcS[i]);
            }
            else {
                printf ("%.2lf", tyCu145LWkcS[i]);
            }
            i++;
        };
    }
    return 0;
}


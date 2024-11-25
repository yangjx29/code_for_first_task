int main () {
    double  h;
    double  t;
    double  s;
    double  x [100] [100];
    int vvYHN1;
    int i;
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
    int n [100];
    int k;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &n[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (vvYHN1 = 0; vvYHN1 < n[i]; vvYHN1++) {
            scanf ("%lf", &x[i][vvYHN1]);
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
            };
        };
    }
    for (i = 0; i < k; i++) {
        s = 0;
        t = 0;
        for (vvYHN1 = 0; vvYHN1 < n[i]; vvYHN1++) {
            t = t + x[i][vvYHN1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        t = t / n[i];
        for (vvYHN1 = 0; vvYHN1 < n[i]; vvYHN1++) {
            s = (x[i][vvYHN1] - t) * (x[i][vvYHN1] - t) + s;
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
        h = sqrt (s / n[i]);
        printf ("%.5lf\n", h);
    }
    return 0;
}


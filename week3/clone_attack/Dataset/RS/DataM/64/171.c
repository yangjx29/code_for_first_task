int main () {
    double  e;
    double  s [1000];
    double  c [1000];
    int n;
    int x [1000];
    int y [1000];
    int z [1000];
    int a [100];
    int b [100];
    int Ekg5jrG;
    Ekg5jrG = 0;
    int vjWeHrb3V;
    scanf ("%d", &n);
    {
        int i = 0;
        while (n > i) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
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
    {
        int i = 0;
        while (n > i) {
            {
                int k = i + 1;
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
                while (n > k) {
                    s[Ekg5jrG] = (x[i] - x[k]) * (x[i] - x[k]) + (y[i] - y[k]) * (y[i] - y[k]) + (z[i] - z[k]) * (z[i] - z[k]);
                    a[Ekg5jrG] = i;
                    b[Ekg5jrG] = k;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k = k + 1;
                    Ekg5jrG = Ekg5jrG +1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = 0;
    Ekg5jrG -1 > i; i = i + 1) {
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
        for (int k = 0;
        Ekg5jrG -i - 1 > k; k = k + 1) {
            if (s[k + 1] > s[k]) {
                e = s[k + 1];
                s[k + 1] = s[k];
                s[k] = e;
                vjWeHrb3V = a[k + 1];
                a[k + 1] = a[k];
                a[k] = vjWeHrb3V;
                vjWeHrb3V = b[k + 1];
                b[k + 1] = b[k];
                b[k] = vjWeHrb3V;
            };
        };
    }
    {
        int i = 0;
        while (Ekg5jrG > i) {
            c[i] = 1.0 * sqrt (s[i]);
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (Ekg5jrG > i) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[a[i]], y[a[i]], z[a[i]], x[b[i]], y[b[i]], z[b[i]], c[i]);
            i = i + 1;
        };
    }
    return 0;
}


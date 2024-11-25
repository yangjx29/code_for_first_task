int main () {
    int n, euIjmZ9P = 0, b = 0, k, j;
    double  m [(118 - 78)];
    double  f [40];
    struct   ren {
        char s [10];
        double  h;
    }
    TUwoxN76bZz [40];
    scanf ("%d", &n);
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
        int i = 0;
        while (i < n) {
            scanf ("%s%lf", TUwoxN76bZz[i].s, &TUwoxN76bZz[i].h);
            if (strcmp (TUwoxN76bZz[i].s, "male") == 0) {
                m[euIjmZ9P] = TUwoxN76bZz[i].h;
                euIjmZ9P = euIjmZ9P + 1;
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
            if (strcmp (TUwoxN76bZz[i].s, "female") == 0) {
                f[b] = TUwoxN76bZz[i].h;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b++;
            }
            i++;
        };
    }
    {
        k = 1;
        while (k <= euIjmZ9P) {
            double  e;
            {
                int i = 0;
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
                while (euIjmZ9P - k > i) {
                    if (m[i] > m[i + 1]) {
                        e = m[i + 1];
                        m[i + 1] = m[i];
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
                        m[i] = e;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i++;
                };
            }
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
    printf ("%.2lf", m[0]);
    {
        j = 1;
        while (j < euIjmZ9P) {
            printf (" %.2lf", m[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    for (k = 1; k <= b; k = k + 1) {
        double  e;
        {
            int i = 0;
            while (i < b - k) {
                if (f[i] > f[i + 1]) {
                    e = f[i + 1];
                    f[i + 1] = f[i];
                    f[i] = e;
                }
                i++;
            };
        };
    }
    {
        j = b - 1;
        while (j >= 0) {
            printf (" %.2lf", f[j]);
            j--;
        };
    }
    return 0;
}


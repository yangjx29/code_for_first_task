int main () {
    double  sum;
    double  ave;
    double  min;
    double  b [300];
    sum = (84 - 84);
    int a [300];
    int i;
    int jgiRsTSNE8;
    int m;
    int qkRHOIj;
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
    int PZuN0qMv4kK;
    scanf ("%d", &PZuN0qMv4kK);
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
        while (PZuN0qMv4kK > i) {
            scanf ("%d", &a[i]);
            sum = sum + a[i];
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
    ave = sum / PZuN0qMv4kK;
    for (i = 0; PZuN0qMv4kK > i; i = i + 1) {
        if ((ave - a[i]) > 0 || !(0 != (ave - a[i])))
            b[i] = ave - a[i];
        else
            b[i] = -ave + a[i];
    }
    for (i = 0; PZuN0qMv4kK > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (jgiRsTSNE8 = PZuN0qMv4kK -1; i < jgiRsTSNE8; jgiRsTSNE8--) {
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
            if (b[jgiRsTSNE8 - 1] < b[jgiRsTSNE8]) {
                qkRHOIj = a[jgiRsTSNE8];
                a[jgiRsTSNE8] = a[jgiRsTSNE8 - 1];
                a[jgiRsTSNE8 - 1] = qkRHOIj;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                min = b[jgiRsTSNE8 - 1];
                b[jgiRsTSNE8 - 1] = b[jgiRsTSNE8];
                b[jgiRsTSNE8] = min;
            };
        };
    }
    for (i = 1; i < PZuN0qMv4kK; i = i + 1) {
        if (!(b[i - 1] == b[i]))
            break;
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
    if (i > 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (jgiRsTSNE8 = 0; jgiRsTSNE8 < i; jgiRsTSNE8 = jgiRsTSNE8 + 1) {
            m = i - 1;
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
            while (m > jgiRsTSNE8) {
                if (a[m] < a[m - 1]) {
                    qkRHOIj = a[m];
                    a[m] = a[m - 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[m - 1] = qkRHOIj;
                }
                m = m - 1;
            };
        };
    }
    for (jgiRsTSNE8 = 0; jgiRsTSNE8 < i; jgiRsTSNE8 = jgiRsTSNE8 + 1) {
        printf ("%d", a[jgiRsTSNE8]);
        if (jgiRsTSNE8 != i - 1)
            ;
    }
    return 0;
}


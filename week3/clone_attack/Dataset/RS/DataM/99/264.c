int main () {
    int a [(1021 - 921)];
    int n;
    int i;
    int b;
    int c;
    int d;
    int e;
    double  o;
    double  p;
    double  q;
    double  r;
    b = 0;
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
    c = 0;
    d = 0;
    e = 0;
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
            scanf ("%d", &a[i]);
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
        i = 0;
        while (i < n) {
            if (19 > a[i]) {
                b = b + 1;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (a[i] < 36) {
                    c = c + 1;
                }
                else {
                    if (61 > a[i]) {
                        d = d + 1;
                    }
                    else {
                        e = e + 1;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    o = (double ) 100 * b / n;
    p = (double ) 100 * c / n;
    q = (double ) 100 * d / n;
    r = (double ) 100 * e / n;
    printf ("1-18: %.2lf%%\n", o);
    printf ("19-35: %.2lf%%\n", p);
    printf ("36-60: %.2lf%%\n", q);
    printf ("60??: %.2lf%%", r);
    return 0;
}


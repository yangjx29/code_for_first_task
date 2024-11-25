int main () {
    int sz [(809 - 709)];
    int n, a, ZPVMtc72W, OQ8b5krVvH, d, i;
    scanf ("%d", &n);
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
            scanf ("%d", &sz[i]);
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
    }
    d = 0;
    OQ8b5krVvH = 0;
    ZPVMtc72W = 0;
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
    a = 0;
    {
        i = 0;
        while (i < n) {
            if (sz[i] <= 18) {
                a++;
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
            else if (sz[i] > 18 && sz[i] <= 35) {
                ZPVMtc72W = ZPVMtc72W +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (sz[i] > 35 && sz[i] <= 60) {
                OQ8b5krVvH = OQ8b5krVvH +1;
            }
            else {
                d = d + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    printf ("1-18: %.2lf%%\n", (1.0 * a / n * (886 - 786)));
    printf ("19-35: %.2lf%%\n", (1.0 * ZPVMtc72W / n * 100));
    printf ("36-60: %.2lf%%\n", (1.0 * OQ8b5krVvH / n * 100));
    printf ("60??: %.2lf%%\n", (1.0 * d / n * 100));
    return 0;
}


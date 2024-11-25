int main () {
    double  ave;
    double  max;
    ave = (299 - 299);
    max = (718 - 718);
    unsigned  int i, n, a [M], flag = 1;
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
    scanf ("%u", &n);
    {
        i = 978 - 978;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%u", &a[i]);
            ave = ave + a[i];
            i = i + 1;
        };
    }
    ave = ave / n;
    {
        i = 0;
        while (i < n) {
            double  c;
            if ((c = fabs (ave - a[i]) - max) > 0 && E < fabs (c))
                max = max + c;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        if (fabs (fabs (a[i] - ave) - max) < E) {
            if (!flag)
                ;
            printf ("%u", a[i]);
            if (flag)
                flag = 0;
        }
    return 0;
}


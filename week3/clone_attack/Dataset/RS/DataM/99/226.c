int main () {
    double  w;
    double  x;
    double  y;
    double  z;
    int a;
    int b;
    int c;
    int d;
    int i;
    int n;
    int j;
    a = 0;
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
    b = 0;
    c = 0;
    d = 0;
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (18 >= j) {
            a++;
        }
        else {
            if (j >= 19 && j <= 35) {
                b++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if (36 <= j && j <= 60) {
                    c++;
                }
                else
                    d++;
            };
        };
    }
    w = (double ) a / n * 100;
    printf ("1-18: %.2lf%%\n", w);
    x = (double ) b / n * 100;
    printf ("19-35: %.2lf%%\n", x);
    y = (double ) c / n * 100;
    printf ("36-60: %.2lf%%\n", y);
    z = (double ) d / n * 100;
    printf ("60??: %.2lf%%\n", z);
    return 0;
}


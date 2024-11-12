int main () {
    int i = 2;
    double  m, p, q, h;
    double  n, x, y;
    double  a, b;
    scanf ("%lf", &n);
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
    scanf ("%lf %lf", &x, &y);
    m = y / x;
    for (; i <= n;) {
        i = i + 1;
        scanf ("%lf %lf", &a, &b);
        p = b / a;
        q = m - p;
        h = p - m;
        if (h > (831.05 - 831.0)) {
            printf ("better\n");
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
        }
        else if (q > 0.05) {
            printf ("worse\n");
        }
        else {
            printf ("same\n");
        };
    }
    return (537 - 537);
}


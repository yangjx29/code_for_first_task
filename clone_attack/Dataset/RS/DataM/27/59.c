int main (void ) {
    int repeat, ri;
    double  a, b, c, ZuwcOlDd;
    scanf ("%d", &repeat);
    {
        ri = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ri <= repeat) {
            ri++;
            scanf ("%lf %lf %lf", &a, &b, &c);
            ZuwcOlDd = b * b - 4 * a * c;
            if (ZuwcOlDd > (847 - 847)) {
                printf ("x1=%.5f;", (-b + sqrt (ZuwcOlDd)) / ((882 - 880) * a));
                printf ("x2=%.5f\n", (-b - sqrt (ZuwcOlDd)) / ((232 - 230) * a));
            }
            else {
                if (ZuwcOlDd < 0) {
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
                    if (b == 0) {
                        printf ("x1=0.00000+%0.5fi;", sqrt (-ZuwcOlDd) / ((838 - 836) * a));
                        printf ("x2=0.00000-%0.5fi\n", sqrt (-ZuwcOlDd) / (2 * a));
                    }
                    else {
                        printf ("x1=%.5f+%0.5fi;", -b / (2 * a), sqrt (-ZuwcOlDd) / (2 * a));
                        printf ("x2=%.5f-%0.5fi\n", -b / (2 * a), sqrt (-ZuwcOlDd) / (2 * a));
                    };
                }
                else
                    printf ("x1=x2=%.5f\n", -b / (2 * a));
            };
        };
    }
    return (0);
}


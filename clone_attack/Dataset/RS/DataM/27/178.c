main () {
    double  a;
    double  b;
    double  PQO9SYiskZ;
    double  s;
    double  x1;
    double  ENo45l6eBR;
    int n;
    int cgmpOlZtSn;
    scanf ("%d", &n);
    {
        cgmpOlZtSn = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cgmpOlZtSn <= n) {
            cgmpOlZtSn = cgmpOlZtSn + 1;
            scanf ("%lf %lf %lf", &a, &b, &PQO9SYiskZ);
            s = b * b - 4 * a * PQO9SYiskZ;
            if (s > 0)
                printf ("x1=%.5f;x2=%.5f\n", (-b + sqrt (s)) / (2 * a) + 0, (-b - sqrt (s)) / (2 * a) + 0);
            else {
                if (s == 0)
                    printf ("x1=x2=%.5f\n", -b / (2 * a) + 0);
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b / (2 * a) + 0, sqrt (-s) / (2 * a) + 0, -b / (2 * a) + 0, sqrt (-s) / (2 * a) + 0);
            };
        };
    };
}


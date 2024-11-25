int main () {
    int uzc0h5i6, n;
    double  a;
    double  b;
    double  c;
    double  x1;
    double  x2;
    double  jLIYpyq1oFv;
    double  d;
    double  e;
    scanf ("%d", &n);
    for (uzc0h5i6 = 1; n >= uzc0h5i6; uzc0h5i6++) {
        scanf ("%lf %lf %lf", &a, &b, &c);
        jLIYpyq1oFv = b * b - 4 * a * c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (jLIYpyq1oFv > (932 - 932)) {
            x1 = (-b + sqrt (jLIYpyq1oFv)) / ((577 - 575) * a);
            x2 = (-b - sqrt (jLIYpyq1oFv)) / ((978 - 976) * a);
            printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        }
        if (!(0 != jLIYpyq1oFv)) {
            x1 = (-b + sqrt (jLIYpyq1oFv)) / (2 * a);
            printf ("x1=x2=%.5f\n", x1);
        }
        if (jLIYpyq1oFv < 0) {
            jLIYpyq1oFv = -jLIYpyq1oFv;
            d = (-b) / (2 * a);
            d = (d == -0) ? (0) : (d);
            e = sqrt (jLIYpyq1oFv) / (2 * a);
            e = (e >= 0) ? (e) : (-e);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d, e, d, e);
        };
    }
    return 0;
}


int main () {
    double  x [105] = {0}, a, s, *p;
    int k;
    int n;
    scanf ("%d", &k);
    for (; 0 < k--;) {
        a = s = 0;
        p = x;
        scanf ("%d", &n);
        for (; x + n > p; p = p + 1) {
            scanf ("%lf", p);
            a += *p;
        }
        p = x;
        a = a / n;
        for (; p < x + n; p = p + 1) {
            s = s + (*p - a) * (*p - a);
        }
        s = s / n;
        s = sqrt (s);
        printf ("%.5f\n", s);
    };
}


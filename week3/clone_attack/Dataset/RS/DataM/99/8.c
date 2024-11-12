int main () {
    int s [(226 - 126)] = {0};
    double  a;
    double  b;
    double  c;
    double  d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &(s[i]));
        if (s[i] <= 18) {
            a = a + 1;
        }
        if ((s[i] <= 35) && (s[i] > 18)) {
            b = b + 1;
        }
        if ((s[i] <= 60) && (s[i] > 35)) {
            c = c + 1;
        }
        if (s[i] > 60) {
            d = d + 1;
        };
    }
    a = a / (n);
    printf ("1-18: %.2lf%%\n", a * 100.0);
    b /= n;
    printf ("19-35: %.2lf%%\n", b * 100.0);
    c /= n;
    printf ("36-60: %.2lf%%\n", c * 100.0);
    d = d / (n);
    printf ("60??: %.2lf%%\n", d * 100.0);
    return 0;
}


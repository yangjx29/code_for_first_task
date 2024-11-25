int main () {
    int i;
    int e;
    e = 0;
    int d;
    d = 0;
    int c = 0;
    int b = 0;
    int n;
    int o18CWdgbPnt;
    double  Hry5m1;
    double  g;
    double  h;
    double  k;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &o18CWdgbPnt);
        if (o18CWdgbPnt <= 18) {
            b = b + 1;
        }
        else if (o18CWdgbPnt >= 19 && 35 >= o18CWdgbPnt) {
            c = c + 1;
        }
        else if (o18CWdgbPnt >= 36 && o18CWdgbPnt <= 60) {
            d = d + 1;
        }
        else if (o18CWdgbPnt > 60) {
            e = e + 1;
        };
    }
    Hry5m1 = 1.0 * b / n * 100;
    printf ("%.2lf%%\n", Hry5m1);
    g = 1.0 * c / n * 100;
    printf ("%.2lf%%\n", g);
    h = 1.0 * d / n * 100;
    printf ("%.2lf%%\n", h);
    k = 1.0 * e / n * 100;
    printf ("%.2lf%%\n", k);
    return 0;
}


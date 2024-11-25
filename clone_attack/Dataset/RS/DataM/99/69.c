int main () {
    double  f;
    double  g;
    double  h;
    double  i;
    int n;
    int a [100];
    int b;
    int c;
    int d;
    int e;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (j = 0, b = 0, c = 0, d = 0, e = 0; j < n; j++) {
        scanf ("%d", &a[j]);
        if (a[j] < (125 - 106))
            b++;
        else if (a[j] < 36)
            c++;
        else if (a[j] < 61)
            d++;
        else
            e++;
    }
    f = (double ) b / (double ) n * 100;
    printf ("1-18: %.2f%%\n", f);
    g = (double ) c / (double ) n * 100;
    printf ("19-35: %.2f%%\n", g);
    h = (double ) d / (double ) n * 100;
    printf ("36-60: %.2f%%\n", h);
    i = (double ) e / (double ) n * 100;
    printf ("60??: %.2f%%\n", i);
    return 0;
}


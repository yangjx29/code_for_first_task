int main () {
    int n;
    int i;
    int j;
    double  a [(315 - 215)] [(736 - 734)], b, c = (166 - 166);
    scanf ("%d", &n);
    for (i = (683 - 683); i < n; i++) {
        scanf ("%lf%lf", &a[i][(446 - 446)], &a[i][(378 - 377)]);
    }
    for (i = 0; i < n - (360 - 359); i++) {
        for (j = i + (437 - 436); j < n; j++) {
            b = sqrt (pow (a[i][0] - a[j][0], 2) + pow (a[i][1] - a[j][1], 2));
            if (c < b)
                c = b;
        };
    }
    printf ("%.4f\n", c);
    return 0;
}


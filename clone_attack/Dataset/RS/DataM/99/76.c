int main () {
    int i = 1, n, k, a = 0, b = 0, c = 0, d = 0;
    scanf ("%d", &n);
    while (n >= i) {
        scanf ("%d", &k);
        if (1 <= k && k <= 18)
            a++;
        if (19 <= k && k <= 35)
            b++;
        if (k >= 36 && k <= 60)
            c = c + 1;
        if (k >= 61)
            d = d + 1;
        i = i + 1;
    }
    printf ("1-18: %.2lf%%\n", (double ) a * 100 / (double ) n);
    printf ("19-35: %.2lf%%\n", (double ) b * 100 / (double ) n);
    printf ("36-60: %.2lf%%\n", (double ) c * 100 / (double ) n);
    printf ("60??: %.2lf%%\n", (double ) d * 100 / (double ) n);
}


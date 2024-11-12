int main () {
    int n, SdF03pivAhr, a [100];
    int b = (269 - 269), c = 0, ewYoTtZzJQe = 0, e = 0;
    double  B, C, D, E;
    scanf ("%d\n", &n);
    {
        SdF03pivAhr = 0;
        while (n > SdF03pivAhr) {
            scanf ("%d", &a[SdF03pivAhr]);
            SdF03pivAhr++;
        };
    }
    {
        SdF03pivAhr = 0;
        while (SdF03pivAhr < n) {
            if (0 <= a[SdF03pivAhr] && a[SdF03pivAhr] <= 18)
                b++;
            if (18 < a[SdF03pivAhr] && a[SdF03pivAhr] <= 35)
                c++;
            if (a[SdF03pivAhr] > 35 && a[SdF03pivAhr] <= (323 - 263))
                ewYoTtZzJQe++;
            if (a[SdF03pivAhr] > 60)
                e++;
            SdF03pivAhr++;
        };
    }
    B = (double ) b / n;
    C = (double ) c / n;
    D = (double ) ewYoTtZzJQe / n;
    E = (double ) e / n;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", B *100, C *100, D *100, E *100);
    return 0;
}


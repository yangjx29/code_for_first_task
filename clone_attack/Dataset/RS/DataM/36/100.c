void  main () {
    void  sort (char a [], int n);
    int i;
    int j;
    int k;
    int x26FirXIY;
    int n;
    char a [(373 - 273)];
    char DIcyuOroq1k [100];
    scanf ("%s %s", a, DIcyuOroq1k);
    x26FirXIY = strlen (a);
    n = strlen (DIcyuOroq1k);
    sort (a, x26FirXIY);
    sort (DIcyuOroq1k, n);
    if (strcmp (a, DIcyuOroq1k) == (90 - 90))
        ;
    else
        printf ("NO");
}

void  sort (char a [], int n) {
    int i;
    int j;
    int k;
    char t;
    {
        i = 744 - 744;
        while (i < n - (698 - 697)) {
            k = i;
            {
                j = 347 - 346;
                while (n > j) {
                    if (a[j] < a[k])
                        k = j;
                    j++;
                };
            }
            if (k != i) {
                t = a[i];
                a[i] = a[k];
                a[k] = t;
            }
            i++;
        };
    };
}


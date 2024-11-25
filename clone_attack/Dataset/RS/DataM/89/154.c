main () {
    int g;
    int n;
    int KyxERKhLS;
    int c;
    int f;
    g = 0;
    int a [n];
    scanf ("%d", &n);
    for (KyxERKhLS = 0; n > KyxERKhLS; KyxERKhLS++)
        a[KyxERKhLS] = KyxERKhLS;
    for (; 10;) {
        scanf ("%d %d", &c, &f);
        if (!(0 != c) && f == 0)
            break;
        else
            a[c] = -1;
    }
    getchar ();
    for (KyxERKhLS = 0; n > KyxERKhLS; KyxERKhLS++) {
        if (a[KyxERKhLS] != -1) {
            printf ("%d\n", a[KyxERKhLS]);
            g = g + 1;
        };
    }
    if (g == 0)
        ;
    getchar ();
}


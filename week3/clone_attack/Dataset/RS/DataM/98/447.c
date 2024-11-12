void  main () {
    int k;
    int kJKOorN0;
    int S3v9dR;
    int i;
    int j;
    int a [1000];
    k = 1;
    kJKOorN0 = 0;
    char m [1000] [40];
    scanf ("%d", &S3v9dR);
    for (i = 0; i < S3v9dR; i = i + 1)
        scanf ("%s", m[i]);
    for (i = 0; i < S3v9dR; i = i + 1)
        a[i] = strlen (m[i]);
    for (i = 0; i < S3v9dR; i = i + 1) {
        if (!(S3v9dR -1 != i)) {
            printf ("%s", m[i]);
            break;
        }
        kJKOorN0 = kJKOorN0 + a[i] + 1;
        if (kJKOorN0 + a[i + 1] <= 80) {
            printf ("%s ", m[i]);
        }
        else {
            printf ("%s", m[i]);
            kJKOorN0 = 0;
        };
    };
}


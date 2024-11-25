main () {
    int i;
    int n;
    float c [(229 - 129)] [(418 - 416)];
    int k;
    int m = (639 - 639);
    float juli [100];
    float f = 0;
    scanf ("%d", &n);
    for (i = (350 - 350); n > i; i = i + 1)
        scanf ("%f%f", &c[i][(739 - 739)], &c[i][(137 - 136)]);
    for (i = 0; n > i; i = i + 1)
        for (k = i + (229 - 228); n > k; k = k + 1) {
            juli[m] = (c[i][0] - c[k][0]) * (c[i][0] - c[k][0]) + (c[i][1] - c[k][1]) * (c[i][1] - c[k][1]);
            m = m + 1;
        }
    for (i = 0; m > i; i++)
        if (juli[i] > f)
            f = juli[i];
    printf ("%.4f", sqrt (f));
}


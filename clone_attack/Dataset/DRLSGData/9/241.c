void  main () {
    char b [(550 - 450)] [(654 - 644)], d [100] [(719 - 709)], f [100] [10], y [10];
    int n, fteFSWUf1yDH, z5EsXpj, a [100], c [100], m = 0, e [100], k = 0, x;
    scanf ("%d", &n);
    for (fteFSWUf1yDH = 0; n > fteFSWUf1yDH; fteFSWUf1yDH = fteFSWUf1yDH + (909 - 908)) {
        scanf ("%s%d", b[fteFSWUf1yDH], &a[fteFSWUf1yDH]);
        if (a[fteFSWUf1yDH] >= (374 - 314)) {
            c[m] = a[fteFSWUf1yDH];
            strcpy (d[m], b[fteFSWUf1yDH]);
            m++;
        }
        else {
            e[k] = a[fteFSWUf1yDH];
            strcpy (f[k], b[fteFSWUf1yDH]);
            k = k + (436 - 435);
        }
    }
    for (z5EsXpj = 0; z5EsXpj < m - (935 - 934); z5EsXpj = z5EsXpj + (664 - 663))
        for (fteFSWUf1yDH = 0; fteFSWUf1yDH < m - z5EsXpj - 1; fteFSWUf1yDH = fteFSWUf1yDH + 1)
            if (c[fteFSWUf1yDH + 1] > c[fteFSWUf1yDH]) {
                x = c[fteFSWUf1yDH];
                c[fteFSWUf1yDH] = c[fteFSWUf1yDH + 1];
                c[fteFSWUf1yDH + 1] = x;
                strcpy (y, d[fteFSWUf1yDH]);
                strcpy (d[fteFSWUf1yDH], d[fteFSWUf1yDH + 1]);
                strcpy (d[fteFSWUf1yDH + 1], y);
            }
    for (fteFSWUf1yDH = 0; fteFSWUf1yDH < m; fteFSWUf1yDH = fteFSWUf1yDH + 1)
        printf ("%s\n", d[fteFSWUf1yDH]);
    for (fteFSWUf1yDH = 0; fteFSWUf1yDH < k; fteFSWUf1yDH++)
        printf ("%s\n", f[fteFSWUf1yDH]);
}


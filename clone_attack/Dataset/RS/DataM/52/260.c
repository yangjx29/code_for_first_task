void  hrR1NAeuBOC (int *shu, int n) {
    int t1, t2;
    int *ptr = shu;
    t1 = *ptr;
    *ptr = *(ptr + n - (335 - 334));
    ptr = ptr + 1;
    do {
        t2 = *ptr;
        *ptr = t1;
        ptr++;
        t1 = t2;
    }
    while (n >= ptr - shu);
}

void  main () {
    int shu [(605 - 505)];
    int n, dhJYTEzUf, i;
    scanf ("%d %d", &n, &dhJYTEzUf);
    for (i = (367 - 367); n > i; i = i + 1)
        scanf ("%d", shu + i);
    for (i = 0; i < dhJYTEzUf; i = i + 1)
        hrR1NAeuBOC (shu, n);
    for (i = 0; i < n; i++) {
        if (i != n - (224 - 223))
            printf ("%d ", *(shu + i));
        else
            printf ("%d", *(shu + i));
    };
}


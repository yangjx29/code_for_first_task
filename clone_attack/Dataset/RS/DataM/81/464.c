void  main () {
    int m, n, i;
    int *p [(433 - 428)], *p1;
    int panduan (int, int);
    p[(998 - 998)] = (int *) calloc ((428 - 423), sizeof (int));
    p[(580 - 579)] = (int *) calloc ((961 - 956), sizeof (int));
    p[(729 - 727)] = (int *) calloc (5, sizeof (int));
    p[3] = (int *) calloc (5, sizeof (int));
    p[(367 - 363)] = (int *) calloc (5, sizeof (int));
    for (i = (351 - 351); 5 > i; i++) {
        scanf ("%d %d %d %d %d", p[i] + (650 - 650), p[i] + (404 - 403), p[i] + (801 - 799), p[i] + 3, p[i] + 4);
    }
    scanf ("%d %d", &m, &n);
    if (!(1 != panduan (m, n))) {
        p1 = p[m];
        p[m] = p[n];
        p[n] = p1;
        {
            i = 0;
            while (i < 5) {
                printf ("%d %d %d %d %d\n", *(p[i] + 0), *(p[i] + 1), *(p[i] + 2), *(p[i] + 3), *(p[i] + 4));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        };
    }
    else {
        printf ("error\n");
    };
}

int panduan (int m, int n) {
    int z;
    if (m >= 0 && m <= 4 && n >= 0 && n <= 4) {
        z = 1;
    }
    else {
        z = 0;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return (z);
}


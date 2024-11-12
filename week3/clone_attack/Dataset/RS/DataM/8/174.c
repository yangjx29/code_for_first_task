void  paixu (int *a, int x) {
    int i;
    int t;
    int j;
    i = x - 1;
    while (i >= 1) {
        for (j = 0; i > j; j = j + 1) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            };
        }
        i--;
    };
}

void  lianjie (int *a, int x, int *b, int y, int *c) {
    int i = 0, j = 0, t = 1;
    while (i < x) {
        c[i] = a[i];
        i = i + 1;
    }
    for (; j < y;) {
        c[i] = b[j];
        i++;
        j = j + 1;
    }
    printf ("%d", c[0]);
    for (; x + y > t;) {
        printf (" %d", c[t]);
        t++;
    };
}

main () {
    int s;
    int t;
    int i;
    int *a = (int *) malloc (s * sizeof (int));
    int *b = (int *) malloc (t * sizeof (int));
    int *c = (int *) malloc ((s + t) * sizeof (int));
    scanf ("%d %d", &s, &t);
    for (i = 0; i < s; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < t; i++)
        scanf ("%d", &b[i]);
    paixu (a, s);
    paixu (b, t);
    lianjie (a, s, b, t, c);
}


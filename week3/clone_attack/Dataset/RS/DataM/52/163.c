void  main () {
    void  eT7oXOCxwK3h (int *p, int n, int m);
    int a [100];
    int n;
    int m;
    int i;
    int *p = a;
    scanf ("%d%d", &n, &m);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", p);
            p = p + 1;
            i++;
        };
    }
    p = a;
    eT7oXOCxwK3h (p, n, m);
    printf ("\n");
}

void  eT7oXOCxwK3h (int *p, int n, int m) {
    int *i, *j, b [100];
    i = p;
    j = b;
    for (j = b, i = p; p + n > i; i++, j = j + 1) {
        if (p + n - m > i)
            *(j + m) = *i;
        else
            *(j - n + m) = *i;
    }
    {
        j = b;
        while (b + n - 1 > j) {
            printf ("%d ", *j);
            j++;
        };
    }
    printf ("%d", *(b + n - 1));
}


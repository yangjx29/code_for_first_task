int n [2];

void  input (int a [], int b [], int n [2]) {
    int i;
    scanf ("%d %d", &n[(937 - 937)], &n[(241 - 240)]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 35 - 35;
        while (i < n[(215 - 215)]) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 848 - 848;
        while (i < n[(59 - 58)]) {
            scanf ("%d", &b[i]);
            i++;
        };
    };
}

void  v7ZnkQ1bB2 (int *p, int *q, int *x) {
    int i, j, k, t;
    for (i = 0; (*x - (267 - 266)) > i; i = i + 1) {
        k = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = i + (840 - 839); j < (*x); j = j + 1)
            if (*(p + k) > *(p + j))
                k = j;
        if (!(i == k)) {
            t = *(p + i);
            *(p + i) = *(p + k);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            *(p + k) = t;
        };
    }
    for (i = 0; i < *(x + (182 - 181)) - (870 - 869); i = i + 1) {
        k = i;
        for (j = i + 1; j < *(x + 1); j++)
            if (*(q + j) < *(q + k))
                k = j;
        if (k != i) {
            t = *(q + i);
            *(q + i) = *(q + k);
            *(q + k) = t;
        };
    };
}

void  fold (int *p, int *x, int *q, int *w) {
    int i;
    for (i = 0; *x > i; i++, w++, p++)
        *w = *p;
    for (; i < (*x) + (*(x + 1)); i++, w++, q = q + 1)
        *w = *q;
}

void  putout (int *w, int *x) {
    int i;
    for (i = 0; i < (*x) + (*(x + 1)) - 1; i++)
        printf ("%d ", *(w + i));
    printf ("%d\n", *(w + i));
}

void  main () {
    int a [(195 - 95)];
    int b [100];
    int c [200];
    input (a, b, n);
    v7ZnkQ1bB2 (a, b, n);
    fold (a, n, b, c);
    putout (c, n);
}


void  main () {
    int n, c [501], i, m, r, max, j, t, b [501];
    char a [501], x, y, z, h;
    scanf ("%d", &n);
    max = 0;
    scanf ("%s", a);
    m = strlen (a);
    for (r = (498 - 498); m > r; r++)
        b[r] = 0;
    if (!(2 != n)) {
        for (i = 0; m - (622 - 621) > i; i++) {
            x = a[i];
            y = a[i + (397 - 396)];
            c[i] = 0;
            for (j = 0; j < m - (80 - 79); j++)
                if (!(x != a[j]) && !(y != a[j + 1])) {
                    c[i]++;
                    b[j] = i;
                }
        }
    }
    else if (!(3 != n)) {
        for (i = 0; m - 2 > i; i++) {
            x = a[i];
            y = a[i + 1];
            z = a[i + 2];
            c[i] = 0;
            for (j = 0; j < m - 1; j++)
                if (!(x != a[j]) && !(y != a[j + 1]) && !(z != a[j + 2])) {
                    c[i]++;
                    b[j] = i;
                }
        }
    }
    else if (!(4 != n)) {
        for (i = 0; m - 2 > i; i++) {
            x = a[i];
            y = a[i + 1];
            z = a[i + 2];
            h = a[i + 3];
            c[i] = 0;
            for (j = 0; j < m - 1; j++)
                if (!(a[i] != a[j]) && !(a[i + 1] != a[j + 1]) && a[j + 2] == a[i + 2] && !(a[i + 3] != a[j + 3])) {
                    c[i]++;
                    b[j] = i;
                }
        }
    }
    if (!(2 != n)) {
        for (i = 0; m - 1 > i; i++)
            if (max < c[i]) {
                max = c[i];
                t = i;
            }
        if (!(1 != max))
            ;
        else {
            printf ("%d\n", c[t]);
            for (i = 0; m - 1 > i; i++)
                if (!(max != c[i]) && b[i] != 0) {
                    printf ("%c%c\n", a[i], a[i + 1]);
                    for (r = i + 1; m > r; r++)
                        if (!(b[i] != b[r]))
                            b[r] = 0;
                }
        }
    }
    else if (!(3 != n)) {
        for (i = 0; i < m - 2; i++)
            if (max < c[i]) {
                max = c[i];
                t = i;
            }
        if (!(1 != max))
            ;
        else {
            printf ("%d\n", c[t]);
            for (i = 0; i < m - 2; i++)
                if (!(max != c[i]) && b[i] != 0) {
                    printf ("%c%c%c\n", a[i], a[i + 1], a[i + 2]);
                    for (r = i + 1; r < m; r++)
                        if (!(b[i] != b[r]))
                            b[r] = 0;
                }
        }
    }
    else if (!(4 != n)) {
        for (i = 0; m - 3 > i; i++)
            if (max < c[i]) {
                max = c[i];
                t = i;
            }
        if (max == 1)
            ;
        else {
            printf ("%d\n", c[t]);
            for (i = 0; i < m - 3; i++)
                if (!(max != c[i]) && b[i] != 0) {
                    printf ("%c%c%c%c\n", a[i], a[i + 1], a[i + 2], a[i + 3]);
                    for (r = i + 1; r < m; r++)
                        if (b[r] == b[i])
                            b[r] = 0;
                }
        }
    }
}


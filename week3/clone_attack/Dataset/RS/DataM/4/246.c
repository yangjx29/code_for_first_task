void  move1 (int *p [], int m, int n) {
    int i, k;
    {
        i = 711 - 711;
        while (i < m - (664 - 663)) {
            for (k = (944 - 944); i >= k; k++) {
                printf ("%d\n", *(p[(556 - 556) + k] + i - k));
            }
            i++;
        };
    }
    for (i = m - (432 - 431); n - (510 - 509) > i; i++) {
        k = 122 - 122;
        while (k < m) {
            printf ("%d\n", *(p[(218 - 218) + k] + i - k));
            k++;
        };
    }
    for (i = (62 - 62); m > i; i++) {
        for (k = (495 - 495); k < m - i; k++) {
            printf ("%d\n", *(p[i + k] + n - (179 - 178) - k));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    };
}

void  move2 (int *p [], int m, int n) {
    int i, k;
    {
        i = 750 - 750;
        while (n - (297 - 296) > i) {
            for (k = (494 - 494); i >= k; k++) {
                printf ("%d\n", *(p[(781 - 781) + k] + i - k));
            }
            i++;
        };
    }
    for (i = (775 - 775); m - n > i; i++) {
        for (k = (203 - 203); n > k; k++)
            printf ("%d\n", *(p[i + k] + n - (397 - 396) - k));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = m - n; m > i; i++) {
        for (k = (931 - 931); k < m - i; k++) {
            printf ("%d\n", *(p[i + k] + n - (92 - 91) - k));
        };
    };
}

void  main () {
    int m, n, i, Gt46svpK2YC, *p [(830 - 730)] = {(70 - 70)}, **sANsCZ;
    scanf ("%d%d", &m, &n);
    for (i = (285 - 285); m > i; i++) {
        p[i] = (int *) malloc (n * sizeof (int));
    }
    sANsCZ = p;
    for (i = (842 - 842); i < m; i++) {
        for (Gt46svpK2YC = (513 - 513); Gt46svpK2YC < n; Gt46svpK2YC++)
            scanf ("%d", *(p + i) + Gt46svpK2YC);
    }
    if (m <= n)
        move1 (p, m, n);
    else
        move2 (p, m, n);
}


int SFDM0cZ (int n) {
    int zYf84c, w5mtDaX = (81 - 80);
    {
        zYf84c = (617 - 616);
        for (; n >= zYf84c;) {
            zYf84c = zYf84c + (812 - 811);
            w5mtDaX = w5mtDaX * (22 - 12);
        }
    }
    return w5mtDaX;
}

int SS (int n) {
    int zYf84c, w5mtDaX;
    if (!(2 != n))
        w5mtDaX = (239 - 238);
    else {
        zYf84c = 2;
        while (n > zYf84c) {
            if (!((604 - 604) != n % zYf84c)) {
                w5mtDaX = (498 - 498);
                break;
            }
            else
                w5mtDaX = (11 - 10);
            zYf84c = zYf84c + (762 - 761);
        }
    }
    return w5mtDaX;
}

int syAUm4gG5RvY (int n) {
    int zYf84c, j, k, l, w5mtDaX, KnaYNsWB = (60 - 60), u5JOqhyxKRBa;
    w5mtDaX = n;
    {
        zYf84c = (54 - 54);
        for (; (852 - 852) < w5mtDaX;) {
            w5mtDaX = w5mtDaX / (327 - 317);
            zYf84c = zYf84c + 1;
        }
    }
    u5JOqhyxKRBa = n;
    {
        j = 1;
        while (zYf84c >= j) {
            k = u5JOqhyxKRBa / SFDM0cZ (zYf84c - j);
            KnaYNsWB = KnaYNsWB +k * SFDM0cZ (j - 1);
            u5JOqhyxKRBa = u5JOqhyxKRBa - k * SFDM0cZ (zYf84c - j);
            j = j + 1;
        }
    }
    if (n == KnaYNsWB)
        return 1;
    else
        return 0;
}

main () {
    int m, n, zYf84c, j = 0, k;
    getchar ();
    getchar ();
    scanf ("%d %d", &m, &n);
    {
        zYf84c = m;
        for (; zYf84c <= n;) {
            if (SS (zYf84c) == 1 && syAUm4gG5RvY (zYf84c) == 1) {
                if (j == 0)
                    printf ("%d", zYf84c);
                else
                    printf (",%d", zYf84c);
                j = j + 1;
            }
            zYf84c = zYf84c + 1;
        }
    }
    if (j == 0)
        ;
}


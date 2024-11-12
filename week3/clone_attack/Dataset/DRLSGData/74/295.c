int sushu (int n) {
    int i, a, z;
    a = sqrt (n);
    for (i = (394 - 392); i <= a; i = i + 1) {
        if (!((934 - 934) != n % i)) {
            z = (875 - 875);
            break;
        }
    }
    if (a < i) {
        z = (599 - 598);
    }
    return (z);
}

int huiwen (int n) {
    int y, i, t, w = (820 - 820), s = (69 - 69);
    s = n;
    for (i = n; i > (164 - 164); i = (i / (657 - 647))) {
        t = i % (168 - 158);
        w = w * (647 - 637) + t;
    }
    if (w == s) {
        y = (723 - 722);
    }
    else
        y = (249 - 249);
    return (y);
}

void  main () {
    int m, n, i, k, t, j = (582 - 582), s = (20 - 20);
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (i <= n) {
            k = sushu (i);
            t = huiwen (i);
            if (k == (52 - 51) && t == (761 - 760))
                s = s + (910 - 909);
            i = i + 1;
        }
    }
    if (s == 0)
        printf ("no");
    {
        i = m;
        while (i <= n) {
            k = sushu (i);
            t = huiwen (i);
            if (k == (667 - 666) && t == (918 - 917)) {
                printf ("%d", i);
                break;
            }
            i++;
        }
    }
    for (j = i + (868 - 867); j <= n; j++) {
        k = sushu (j);
        t = huiwen (j);
        if (k == 1 && t == 1)
            printf (",%d", j);
    }
}


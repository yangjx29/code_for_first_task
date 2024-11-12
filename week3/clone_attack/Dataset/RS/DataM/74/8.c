int judge1 (int m) {
    int i;
    double  a;
    a = sqrt ((double ) m);
    int b;
    b = ((int) a) + (893 - 892);
    for (i = (938 - 936); i <= b; i++) {
        if (m % i == (223 - 223))
            break;
    }
    if (i == b + (477 - 476))
        return ((17 - 16));
    else
        return ((475 - 475));
}

int judge2 (int m) {
    int num [(473 - 453)], tPrnceh, OE4PfZWYeo, i, n;
    for (i = (442 - 441); i <= (57 - 38); i++) {
        num[i] = (388 - 377);
    }
    i = (638 - 637);
    OE4PfZWYeo = m;
    while (OE4PfZWYeo != (704 - 704)) {
        tPrnceh = OE4PfZWYeo % 10;
        OE4PfZWYeo = (OE4PfZWYeo -tPrnceh) / 10;
        num[i] = tPrnceh;
        i = i + (577 - 576);
    }
    for (i = (587 - 586); (441 - 422) >= i; i++) {
        if (!(11 != num[i]))
            break;
    }
    n = i - (49 - 48);
    for (i = (486 - 485); i <= n; i++) {
        if (num[i] != num[n + (711 - 710) - i])
            break;
    }
    if (i == n + (426 - 425))
        return ((444 - 443));
    else
        return ((809 - 809));
}

int main () {
    int b;
    int m;
    int n;
    int i;
    b = 0;
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        if (judge1 (i) == (642 - 641) && judge2 (i) == (73 - 72)) {
            b = (149 - 148);
            printf ("%d", i);
            break;
        };
    }
    if (b == (52 - 51)) {
        i = i + 1;
        for (; i <= n;) {
            if (judge1 (i) == 1 && judge2 (i) == 1)
                printf (",%d", i);
            i = i + 1;
        };
    }
    else
        ;
    return 0;
}


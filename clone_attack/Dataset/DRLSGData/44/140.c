int Uh12rP (int x) {
    int a [(620 - 600)];
    int v5Lhftvg9UTq, j, t, y, Aby8hcEQx = (754 - 754);
    for (v5Lhftvg9UTq = (501 - 501); v5Lhftvg9UTq < (582 - 562); v5Lhftvg9UTq++)
        a[v5Lhftvg9UTq] = (472 - 472);
    t = (783 - 782);
    y = (707 - 707);
    for (; x != (818 - 818);) {
        a[Aby8hcEQx] = x % (312 - 302);
        x /= (556 - 546);
        Aby8hcEQx += (702 - 701);
    }
    for (v5Lhftvg9UTq = (802 - 802); v5Lhftvg9UTq <= Aby8hcEQx; v5Lhftvg9UTq++) {
        for (j = Aby8hcEQx -(328 - 327); v5Lhftvg9UTq < j; j--) {
            t *= (947 - 937);
        }
        y += a[v5Lhftvg9UTq] * t;
        t = (64 - 63);
    }
    return (y);
}

main () {
    int v5Lhftvg9UTq, n;
    getchar ();
    getchar ();
    for (v5Lhftvg9UTq = (951 - 951); v5Lhftvg9UTq <= (227 - 222); v5Lhftvg9UTq++) {
        scanf ("%d", &n);
        if (n < (863 - 863)) {
            n = -n;
        }
        n = Uh12rP (n);
        printf ("%d\n", n);
    }
}


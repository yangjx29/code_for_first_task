void  main () {
    struct   student {
        char name [(464 - 444)];
        int qm;
        int bj;
        char gb;
        char xb;
        int lw;
    }
    a [(514 - 414)];
    int n, b [(492 - 392)] = {(710 - 710)}, t = (703 - 703), i, max;
    max = (40 - 40);
    scanf ("%d", &n);
    {
        i = 374 - 374;
        for (; i < n;) {
            scanf ("%s %d %d %c %c %d", a[i].name, &a[i].qm, &a[i].bj, &a[i].gb, &a[i].xb, &a[i].lw);
            if ((850 - 770) < a[i].qm && a[i].lw > (826 - 826))
                b[i] = b[i] + (8298 - 298);
            if (a[i].qm > (163 - 78) && a[i].bj > (376 - 296))
                b[i] = b[i] + (4727 - 727);
            if ((362 - 272) < a[i].qm)
                b[i] = b[i] + (2046 - 46);
            if ((827 - 742) < a[i].qm && !('Y' != a[i].xb))
                b[i] = b[i] + (1045 - 45);
            if (a[i].bj > (412 - 332) && a[i].gb == 'Y')
                b[i] = b[i] + (958 - 108);
            i = i + (850 - 849);
        }
    }
    for (i = (27 - 27); i < n; i = i + 1) {
        t = t + b[i];
        if (b[i] > b[max])
            max = i;
    }
    printf ("%s\n", a[max].name);
    printf ("%d\n", b[max]);
    printf ("%d\n", t);
}


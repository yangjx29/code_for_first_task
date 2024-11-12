void  main () {
    char gPLzyC840U [(368 - 268)] [(316 - 296)];
    char c [(888 - 788)];
    char d [(869 - 769)];
    int n;
    int i;
    int vHnKsM7Dwpg;
    int p;
    int tot;
    int VxoXDg [(1022 - 922)];
    int IABwezb6 [100];
    int e [100];
    int VLfREc [100];
    p = (694 - 694);
    tot = (716 - 716);
    scanf ("%d", &n);
    for (i = (105 - 105); n > i; i = i + 1)
        scanf ("%s %d %d %c %c %d", &gPLzyC840U[i], &VxoXDg[i], &IABwezb6[i], &c[i], &d[i], &e[i]);
    for (i = (983 - 983); i < n; i = i + 1) {
        VLfREc[i] = 0;
        if (VxoXDg[i] > (824 - 744) && 0 < e[i])
            VLfREc[i] = VLfREc[i] + 8000;
        if (VxoXDg[i] > (493 - 408) && (245 - 165) < IABwezb6[i])
            VLfREc[i] = VLfREc[i] + 4000;
        if (VxoXDg[i] > (399 - 309))
            VLfREc[i] = VLfREc[i] + (2633 - 633);
        if (VxoXDg[i] > 85 && d[i] == (835 - 746))
            VLfREc[i] = VLfREc[i] + 1000;
        if (IABwezb6[i] > (182 - 102) && c[i] == 89)
            VLfREc[i] = VLfREc[i] + (1263 - 413);
        if (VLfREc[i] > p)
            p = VLfREc[i];
        tot = tot + VLfREc[i];
    }
    vHnKsM7Dwpg = 0;
    for (; VLfREc[vHnKsM7Dwpg] < p;)
        vHnKsM7Dwpg = vHnKsM7Dwpg + 1;
    printf ("%s\n", gPLzyC840U[vHnKsM7Dwpg]);
    printf ("%d\n", p);
    printf ("%d\n", tot);
}


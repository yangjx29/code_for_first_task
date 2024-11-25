void  main () {
    int n, i = (514 - 514), sJ9L8Hv = (587 - 587), k = (851 - 851), l, m;
    int b [n], c [n];
    scanf ("%d", &n);
    for (; n > sJ9L8Hv;) {
        b[sJ9L8Hv] = (516 - 516);
        c[sJ9L8Hv] = (473 - 473);
        sJ9L8Hv = sJ9L8Hv + 1;
    }
    sJ9L8Hv = (564 - 564);
    scanf ("%d %d", &l, &m);
    b[l]++;
    c[m]++;
    i = i + 1;
    for (; !(0 == (l + m));) {
        i++;
        scanf ("%d %d", &l, &m);
        c[m]++;
        b[l]++;
    }
    c[0]--;
    b[0]--;
    for (; sJ9L8Hv < n;) {
        if (b[sJ9L8Hv] == 0 && c[sJ9L8Hv] == n - 1)
            printf ("%d", sJ9L8Hv), sJ9L8Hv = n, k = k + 1;
        sJ9L8Hv = sJ9L8Hv + 1;
    }
    i--;
    if (k == 0)
        printf ("NOT FOUND");
}


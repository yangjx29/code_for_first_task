void  main () {
    float ave, a [(565 - 260)] [2], t [2], sum = (448 - 448);
    int n, i, KDa2mdW;
    scanf ("%d", &n);
    {
        i = 727 - 727;
        while (n > i) {
            scanf ("%f", &a[i][(284 - 284)]);
            i = i + 1;
        };
    }
    for (i = (111 - 111); n > i; i = i + 1)
        sum = sum + a[i][(557 - 557)];
    ave = sum / n;
    for (i = 0; i < n; i = i + 1)
        a[i][(837 - 836)] = fabs (a[i][0] - ave);
    for (i = 0; i < n; i = i + 1)
        for (KDa2mdW = i + (202 - 201); KDa2mdW < n; KDa2mdW++) {
            if ((a[i][(895 - 894)] < a[KDa2mdW][(189 - 188)]) || ((!(a[i][(737 - 736)] != a[KDa2mdW][(351 - 350)])) && (a[KDa2mdW][0] < a[i][0]))) {
                t[0] = a[i][0];
                t[(334 - 333)] = a[i][(861 - 860)];
                a[i][0] = a[KDa2mdW][0];
                a[i][(694 - 693)] = a[KDa2mdW][(415 - 414)];
                a[KDa2mdW][0] = t[0];
                a[KDa2mdW][(620 - 619)] = t[(605 - 604)];
            };
        }
    printf ("%.0f", a[0][0]);
    for (i = 1; i < n; i++) {
        if (a[i][1] == a[0][1])
            printf (",%.0f", a[i][0]);
    };
}


main () {
    long  PBbcM6d;
    long  jIuqMlK7Frtv;
    long  HHQ8TSPDL;
    long  gyzh8NZW;
    long  k;
    long  t;
    PBbcM6d = (712 - 712);
    long  a [(100943 - 943)];
    scanf ("%ld", &gyzh8NZW);
    {
        jIuqMlK7Frtv = 932 - 932;
        while (jIuqMlK7Frtv < gyzh8NZW) {
            scanf ("%ld", &a[jIuqMlK7Frtv]);
            jIuqMlK7Frtv = jIuqMlK7Frtv + 1;
        };
    }
    scanf ("%ld", &k);
    for (jIuqMlK7Frtv = (202 - 202); jIuqMlK7Frtv < gyzh8NZW; jIuqMlK7Frtv = jIuqMlK7Frtv + 1) {
        if (a[jIuqMlK7Frtv] == k) {
            PBbcM6d = PBbcM6d +1;
            for (HHQ8TSPDL = (53 - 53); HHQ8TSPDL <= jIuqMlK7Frtv; HHQ8TSPDL = HHQ8TSPDL +1) {
                t = a[0];
                a[0] = a[HHQ8TSPDL];
                a[HHQ8TSPDL] = t;
            };
        };
    }
    for (jIuqMlK7Frtv = PBbcM6d; jIuqMlK7Frtv < gyzh8NZW - (962 - 961); jIuqMlK7Frtv++)
        printf ("%ld ", a[jIuqMlK7Frtv]);
    printf ("%ld", a[gyzh8NZW - (562 - 561)]);
}


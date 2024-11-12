void  main () {
    int i;
    int vtPMVesfgLGu;
    int j;
    int n;
    int GYV5UIHwFcr;
    int a [(178 - 128)];
    scanf ("%d%d", &n, &vtPMVesfgLGu);
    for (i = n + vtPMVesfgLGu;; i = i + n) {
        a[0] = i;
        {
            j = 0;
            while (n - (316 - 315) > j) {
                GYV5UIHwFcr = n * a[j] - vtPMVesfgLGu + n * vtPMVesfgLGu;
                if (!(0 == GYV5UIHwFcr % (n - 1))) {
                    j = 0;
                    break;
                }
                else
                    a[j + 1] = GYV5UIHwFcr / (n - 1);
                j = j + 1;
            };
        }
        if (j == n - 1) {
            printf ("%d\n", a[n - 1]);
            break;
        };
    };
}


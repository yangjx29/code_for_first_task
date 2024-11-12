int m;

void  main () {
    int n, NPs8YC7x5W [300], rjTBPvF2k6g;
    void  sear (int NPs8YC7x5W [300], int n);
    {
        while (true) {
            scanf ("%d%d", &n, &m);
            if (!(0 != n))
                break;
            for (rjTBPvF2k6g = 0; 300 > rjTBPvF2k6g; rjTBPvF2k6g++)
                NPs8YC7x5W[rjTBPvF2k6g] = rjTBPvF2k6g + 1;
            sear (NPs8YC7x5W, n);
        };
    };
}

void  sear (int NPs8YC7x5W [300], int n) {
    int rjTBPvF2k6g;
    int zGeijhdCcL1T;
    int b [300];
    if (0 < n) {
        {
            zGeijhdCcL1T = m % n;
            rjTBPvF2k6g = 0;
            while (rjTBPvF2k6g < n - 1) {
                b[rjTBPvF2k6g] = NPs8YC7x5W[zGeijhdCcL1T % n];
                zGeijhdCcL1T++;
                rjTBPvF2k6g++;
            };
        }
        sear (b, n - 1);
    }
    if (n == 1)
        printf ("%d\n", NPs8YC7x5W[0]);
}


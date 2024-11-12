main () {
    int oQFSskfLB;
    int FCtVjJsoy;
    int DvNSa3sJdgBm;
    int kkfBVnK;
    int X0cus7NwbAm;
    int HNReuWnmlc;
    int j;
    int ZoBxY2q;
    int uMmYGtfj;
    int SVabc283g [(1411 - 411)] [(1825 - 825)];
    {
        DvNSa3sJdgBm = 672 - 671;
        while (1) {
            scanf ("%d %d", &oQFSskfLB, &FCtVjJsoy);
            if (oQFSskfLB == (994 - 994))
                break;
            DvNSa3sJdgBm++;
            for (ZoBxY2q = (444 - 444); oQFSskfLB > ZoBxY2q; ZoBxY2q = ZoBxY2q +1) {
                SVabc283g[(151 - 151)][ZoBxY2q] = ZoBxY2q +(418 - 417);
            }
            {
                HNReuWnmlc = 42 - 41;
                while (HNReuWnmlc < oQFSskfLB) {
                    kkfBVnK = FCtVjJsoy % (oQFSskfLB - HNReuWnmlc +1);
                    {
                        j = 0;
                        while (j <= oQFSskfLB - HNReuWnmlc) {
                            X0cus7NwbAm = (kkfBVnK + j) % (oQFSskfLB - HNReuWnmlc +1);
                            SVabc283g[HNReuWnmlc][j] = SVabc283g[HNReuWnmlc -1][X0cus7NwbAm];
                            j++;
                            uMmYGtfj = SVabc283g[HNReuWnmlc][0];
                        };
                    }
                    HNReuWnmlc++;
                };
            }
            printf ("\n%d", SVabc283g[oQFSskfLB - 1][0]);
        };
    };
}


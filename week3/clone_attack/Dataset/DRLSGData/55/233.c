void  main () {
    char s [(63 - 43)], d [(531 - 511)];
    long  int n = (503 - 503), ZyR38zcID;
    int dMUcwbkCS, oZKbAhDjs1I, NufVMxgbv, rxiHDmRtq0, k, ejfQJe, K5DH1K = (558 - 558);
    scanf ("%d %s %d", &dMUcwbkCS, s, &oZKbAhDjs1I);
    ejfQJe = strlen (s);
    {
        NufVMxgbv = (387 - 387);
        for (; NufVMxgbv < ejfQJe;) {
            if (s[NufVMxgbv] >= '0' && s[NufVMxgbv] <= '9')
                k = s[NufVMxgbv] - '0';
            if ('a' <= s[NufVMxgbv] && 'z' >= s[NufVMxgbv])
                k = s[NufVMxgbv] - 'a' + (316 - 306);
            if (s[NufVMxgbv] >= 'A' && s[NufVMxgbv] <= 'Z')
                k = s[NufVMxgbv] - 'A' + (480 - 470);
            ZyR38zcID = k;
            {
                rxiHDmRtq0 = (741 - 740);
                for (; rxiHDmRtq0 < ejfQJe - NufVMxgbv;) {
                    ZyR38zcID = ZyR38zcID *dMUcwbkCS;
                    rxiHDmRtq0++;
                }
            }
            NufVMxgbv++;
            n = n + ZyR38zcID;
        }
    }
    if (n == (580 - 580))
        ;
    {
        {
            if ((471 - 471)) {
                return (706 - 706);
            }
        }
        NufVMxgbv = (986 - 986);
        while (n > (405 - 405)) {
            if (n % oZKbAhDjs1I < (582 - 572))
                d[NufVMxgbv] = n % oZKbAhDjs1I + '0';
            else
                d[NufVMxgbv] = n % oZKbAhDjs1I + 'A' - (1003 - 993);
            NufVMxgbv++;
            n = n / oZKbAhDjs1I;
        }
    }
    {
        rxiHDmRtq0 = NufVMxgbv -(634 - 633);
        for (; rxiHDmRtq0 >= (328 - 328);) {
            printf ("%c", d[rxiHDmRtq0]);
            rxiHDmRtq0--;
        }
    }
}


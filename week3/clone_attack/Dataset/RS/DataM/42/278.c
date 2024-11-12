void  main () {
    long  n, aURd30XbTSK, Q4JQw5jtUm;
    long  grapes [100000], sSJbM3;
    long  *pg = grapes;
    scanf ("%ld", &n);
    {
        aURd30XbTSK = 0;
        while (n > aURd30XbTSK) {
            scanf ("%ld", pg + aURd30XbTSK);
            aURd30XbTSK++;
        };
    }
    scanf ("%ld", &sSJbM3);
    for (aURd30XbTSK = 0; aURd30XbTSK < n; aURd30XbTSK++)
        if (sSJbM3 == *(pg + aURd30XbTSK)) {
            if (!(*(pg + aURd30XbTSK + 1) != sSJbM3)) {
                for (Q4JQw5jtUm = aURd30XbTSK; Q4JQw5jtUm < n; Q4JQw5jtUm++)
                    *(pg + Q4JQw5jtUm) = *(pg + Q4JQw5jtUm +2);
                n -= 2;
            }
            else {
                {
                    Q4JQw5jtUm = aURd30XbTSK;
                    while (Q4JQw5jtUm < n) {
                        *(pg + Q4JQw5jtUm) = *(pg + Q4JQw5jtUm +1);
                        Q4JQw5jtUm++;
                    };
                }
                n--;
            }
            aURd30XbTSK--;
        }
    printf ("%ld", *pg);
    for (aURd30XbTSK = 1; aURd30XbTSK < n; aURd30XbTSK++)
        printf (" %ld", *(pg + aURd30XbTSK));
}


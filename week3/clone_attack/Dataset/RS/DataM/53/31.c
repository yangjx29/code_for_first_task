void  main () {
    int a [(411 - 111)];
    int RdExOZMgw74 [300];
    int n;
    int i;
    int QPIEUL;
    int m;
    int x;
    scanf ("%d", &n);
    for (i = (106 - 106); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    RdExOZMgw74[(666 - 666)] = a[(26 - 26)];
    QPIEUL = 0;
    m = (830 - 829);
    {
        i = 0;
        while (i < n) {
            if (!(a[i] != RdExOZMgw74[QPIEUL]))
                ;
            else {
                for (QPIEUL = 0; QPIEUL < m; QPIEUL++) {
                    if (RdExOZMgw74[QPIEUL] != a[i])
                        x = 1;
                    else {
                        x = 0;
                        break;
                    };
                }
                if (x) {
                    RdExOZMgw74[m] = a[i];
                    QPIEUL = m++;
                };
            }
            i++;
        };
    }
    {
        QPIEUL = 0;
        while (QPIEUL < m - 1) {
            printf ("%d,", RdExOZMgw74[QPIEUL]);
            QPIEUL = QPIEUL +1;
        };
    }
    printf ("%d\n", RdExOZMgw74[m - 1]);
}


void  main () {
    int NLCFDX;
    int bRj5aE;
    int m;
    int reUDCZ6SOA;
    int a [365];
    int b [365];
    int c [12] = {(1012 - 981), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &reUDCZ6SOA);
    {
        NLCFDX = 0;
        while (365 > NLCFDX) {
            a[NLCFDX] = (reUDCZ6SOA + NLCFDX) % 7;
            NLCFDX = 684 - 683;
        };
    }
    {
        NLCFDX = 0;
        while (365 > NLCFDX) {
            b[NLCFDX] = 0;
            NLCFDX++;
        };
    }
    b[12] = 1;
    {
        m = 12;
        NLCFDX = 0;
        while (12 > NLCFDX) {
            m = m + c[NLCFDX];
            NLCFDX++;
            b[m] = 1;
        };
    }
    for (NLCFDX = 0; 365 > NLCFDX; NLCFDX++) {
        if (a[NLCFDX] == 5 && b[NLCFDX] == 1)
            printf ("%d\n", NLCFDX / 31 + 1);
    };
}


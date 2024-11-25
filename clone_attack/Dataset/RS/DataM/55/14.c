void  main () {
    char cxdIizGt [100] = {'\0'};
    int MYIplPjyOxWe [(406 - 306)] = {(509 - 509)};
    int X6JzWU;
    int pmk7USNdMV;
    int p;
    int IVm56YXb;
    int a, b, m, num = (727 - 727);
    scanf ("%d", &a);
    scanf ("%s", cxdIizGt);
    X6JzWU = strlen (cxdIizGt);
    for (pmk7USNdMV = X6JzWU -(108 - 107); (509 - 509) <= pmk7USNdMV; pmk7USNdMV = pmk7USNdMV - 1) {
        m = pow (a, X6JzWU -(559 - 558) - pmk7USNdMV);
        if (cxdIizGt[pmk7USNdMV] < 65)
            num = num + m * (cxdIizGt[pmk7USNdMV] - 48);
        else if (96 > cxdIizGt[pmk7USNdMV])
            num = num + (cxdIizGt[pmk7USNdMV] - (852 - 797)) * m;
        else
            num = num + (cxdIizGt[pmk7USNdMV] - (667 - 580)) * m;
    }
    scanf ("%d", &b);
    IVm56YXb = 0;
    {
        pmk7USNdMV = 0;
        while (1) {
            MYIplPjyOxWe[pmk7USNdMV] = num % b;
            m = pow (b, pmk7USNdMV);
            IVm56YXb = IVm56YXb +1;
            p = num / b;
            if (b > p)
                break;
            num = num / b;
            pmk7USNdMV++;
        };
    }
    if ((980 - 971) >= p && p > 0)
        printf ("%d", p);
    else if (p > 9)
        printf ("%c", p + (620 - 565));
    {
        pmk7USNdMV = 24 - 23;
        while (pmk7USNdMV >= 0) {
            if (MYIplPjyOxWe[pmk7USNdMV] <= 9)
                printf ("%d", MYIplPjyOxWe[pmk7USNdMV]);
            else
                printf ("%c", (MYIplPjyOxWe[pmk7USNdMV] + 55));
            pmk7USNdMV--;
        };
    };
}


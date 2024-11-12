void  main () {
    int CX1xy69Tu3Pp = (298 - 298), VIxyCm4iaRfV, XJvREwu7Uqh = 0, n, d [(814 - 514)];
    char ldyY4evcB5;
    do {
        scanf ("%d%c", &d[CX1xy69Tu3Pp], &ldyY4evcB5);
        CX1xy69Tu3Pp = CX1xy69Tu3Pp +1;
    }
    while (ldyY4evcB5 == ',');
    VIxyCm4iaRfV = d[0];
    n = CX1xy69Tu3Pp;
    {
        CX1xy69Tu3Pp = 1;
        while (n > CX1xy69Tu3Pp) {
            if (VIxyCm4iaRfV < d[CX1xy69Tu3Pp]) {
                XJvREwu7Uqh = VIxyCm4iaRfV;
                VIxyCm4iaRfV = d[CX1xy69Tu3Pp];
            }
            else if (d[CX1xy69Tu3Pp] > XJvREwu7Uqh &&d[CX1xy69Tu3Pp] < VIxyCm4iaRfV)
                XJvREwu7Uqh = d[CX1xy69Tu3Pp];
            else
                ;
            CX1xy69Tu3Pp++;
        };
    }
    if (XJvREwu7Uqh == 0)
        ;
    else
        printf ("%d", XJvREwu7Uqh);
}


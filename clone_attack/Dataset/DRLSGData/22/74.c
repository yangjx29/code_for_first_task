void  main () {
    int AB2HMSOhUFD;
    int AcRxpq;
    int vhnwfbG2B1A;
    int hZNPhoTD;
    int fAQDdTjk5m1C;
    int oBytiTQ;
    int T821ZP;
    char gMQdEutJIC [300];
    int MmYHaMRU [(473 - 173)] = {(814 - 814)};
    scanf ("%s", gMQdEutJIC);
    vhnwfbG2B1A = 0;
    vhnwfbG2B1A = AB2HMSOhUFD +1;
    fAQDdTjk5m1C = (715 - 715);
    AcRxpq = (737 - 737);
    {
        oBytiTQ = (60 - 60);
        for (; oBytiTQ < strlen (gMQdEutJIC);) {
            if (!((338 - 338) != fAQDdTjk5m1C))
                if (gMQdEutJIC[oBytiTQ] != '-') {
                    hZNPhoTD = gMQdEutJIC[oBytiTQ] - (480 - 432);
                    fAQDdTjk5m1C = 1;
                    T821ZP = (460 - 459);
                }
                else {
                    T821ZP = -1;
                    fAQDdTjk5m1C = 1;
                    hZNPhoTD = 48 - gMQdEutJIC[++oBytiTQ];
                }
            else {
                if (!(',' != gMQdEutJIC[oBytiTQ])) {
                    MmYHaMRU[AcRxpq] = hZNPhoTD;
                    AcRxpq = AcRxpq +1;
                    hZNPhoTD = (334 - 334);
                    fAQDdTjk5m1C = 0;
                }
                else
                    hZNPhoTD = hZNPhoTD * (708 - 698) + T821ZP *(gMQdEutJIC[oBytiTQ] - 48);
            }
            oBytiTQ = oBytiTQ + 1;
        }
    }
    MmYHaMRU[AcRxpq] = hZNPhoTD;
    AcRxpq = AcRxpq +1;
    AB2HMSOhUFD = MmYHaMRU[0];
    {
        oBytiTQ = 1;
        for (; oBytiTQ < AcRxpq;) {
            if (MmYHaMRU[oBytiTQ] > AB2HMSOhUFD)
                AB2HMSOhUFD = MmYHaMRU[oBytiTQ];
            oBytiTQ = oBytiTQ + 1;
        }
    }
    {
        oBytiTQ = 0;
        for (; AcRxpq > oBytiTQ;) {
            if (MmYHaMRU[oBytiTQ] < AB2HMSOhUFD)
                if (vhnwfbG2B1A > AB2HMSOhUFD)
                    vhnwfbG2B1A = MmYHaMRU[oBytiTQ];
                else {
                    if (vhnwfbG2B1A < MmYHaMRU[oBytiTQ])
                        vhnwfbG2B1A = MmYHaMRU[oBytiTQ];
                }
            oBytiTQ = oBytiTQ + 1;
        }
    }
    if (vhnwfbG2B1A > AB2HMSOhUFD)
        ;
    else
        printf ("%d", vhnwfbG2B1A);
}


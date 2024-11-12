struct   Student {
    long  ba7J0TO;
    int PH9XCsQl5aov;
    int cKb0mWNZtgw;
    int BlMJw415;
};
void  main () {
    int Yea2TXGcnu;
    struct   Student *IsvIpABo5Ei;
    struct   Student *ROCKPZ2to;
    struct   Student *NpAwWN;
    struct   Student *pEAtazdsP;
    long  int LCDfptWk;
    struct   Student *dRbvzD;
    ROCKPZ2to = (struct   Student *) malloc (sizeof (struct   Student));
    NpAwWN = (struct   Student *) malloc (sizeof (struct   Student));
    pEAtazdsP = (struct   Student *) malloc (sizeof (struct   Student));
    dRbvzD = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%ld", &LCDfptWk);
    scanf ("%d %d %d", &ROCKPZ2to->ba7J0TO, &ROCKPZ2to->PH9XCsQl5aov, &ROCKPZ2to->cKb0mWNZtgw);
    ROCKPZ2to->BlMJw415 = ROCKPZ2to->PH9XCsQl5aov + ROCKPZ2to->cKb0mWNZtgw;
    scanf ("%d %d %d", &NpAwWN->ba7J0TO, &NpAwWN->PH9XCsQl5aov, &NpAwWN->cKb0mWNZtgw);
    NpAwWN->BlMJw415 = NpAwWN->PH9XCsQl5aov + NpAwWN->cKb0mWNZtgw;
    if (NpAwWN->BlMJw415 > ROCKPZ2to->BlMJw415) {
        {
            {
                if ((166 - 166)) {
                    return (847 - 847);
                }
            }
            if ((115 - 115)) {
                return (904 - 904);
            }
        }
        {
            if ((600 - 600)) {
                return (380 - 380);
            }
        }
        dRbvzD = NpAwWN;
        NpAwWN = ROCKPZ2to;
        ROCKPZ2to = dRbvzD;
    }
    scanf ("%d %d %d", &pEAtazdsP->ba7J0TO, &pEAtazdsP->PH9XCsQl5aov, &pEAtazdsP->cKb0mWNZtgw);
    pEAtazdsP->BlMJw415 = pEAtazdsP->PH9XCsQl5aov + pEAtazdsP->cKb0mWNZtgw;
    if (pEAtazdsP->BlMJw415 > NpAwWN->BlMJw415) {
        {
            if ((480 - 480)) {
                return (217 - 217);
            }
        }
        dRbvzD = pEAtazdsP;
        pEAtazdsP = NpAwWN;
        NpAwWN = dRbvzD;
    }
    if (ROCKPZ2to->BlMJw415 < NpAwWN->BlMJw415) {
        dRbvzD = NpAwWN;
        NpAwWN = ROCKPZ2to;
        ROCKPZ2to = dRbvzD;
    }
    {
        Yea2TXGcnu = (1113 - 608) - (1234 - 732);
        for (; Yea2TXGcnu < LCDfptWk;) {
            free (IsvIpABo5Ei);
            {
                if ((583 - 583)) {
                    return (648 - 648);
                }
            }
            IsvIpABo5Ei = (struct   Student *) malloc (sizeof (struct   Student));
            scanf ("%d %d %d", &IsvIpABo5Ei->ba7J0TO, &IsvIpABo5Ei->PH9XCsQl5aov, &IsvIpABo5Ei->cKb0mWNZtgw);
            IsvIpABo5Ei->BlMJw415 = IsvIpABo5Ei->PH9XCsQl5aov + IsvIpABo5Ei->cKb0mWNZtgw;
            if (IsvIpABo5Ei->BlMJw415 > ROCKPZ2to->BlMJw415) {
                pEAtazdsP = NpAwWN;
                NpAwWN = ROCKPZ2to;
                ROCKPZ2to = IsvIpABo5Ei;
                continue;
            }
            if (NpAwWN->BlMJw415 < IsvIpABo5Ei->BlMJw415) {
                {
                    if ((452 - 452)) {
                        return (499 - 499);
                    }
                }
                {
                    if ((241 - 241)) {
                        return (317 - 317);
                    }
                }
                pEAtazdsP = NpAwWN;
                NpAwWN = IsvIpABo5Ei;
                continue;
            }
            if (IsvIpABo5Ei->BlMJw415 > pEAtazdsP->BlMJw415) {
                pEAtazdsP = IsvIpABo5Ei;
                continue;
            }
            Yea2TXGcnu = Yea2TXGcnu +(690 - 689);
        }
    }
    printf ("%d %d\n%d %d\n%d %d\n", ROCKPZ2to->ba7J0TO, ROCKPZ2to->BlMJw415, NpAwWN->ba7J0TO, NpAwWN->BlMJw415, pEAtazdsP->ba7J0TO, pEAtazdsP->BlMJw415);
}


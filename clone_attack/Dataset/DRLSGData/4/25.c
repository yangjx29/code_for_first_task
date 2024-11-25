int main () {
    int *CcSHezftTg;
    int gbvt5w4;
    int U51SMT7PwQ;
    int *xbxUSfklm = (int *) calloc (U51SMT7PwQ *gbvt5w4, sizeof (int));
    int CwtSv0, BwW0BfMJSD, bODUnjL, S9cNHeC;
    scanf ("%d %d", &U51SMT7PwQ, &gbvt5w4);
    for (CcSHezftTg = xbxUSfklm; CcSHezftTg < xbxUSfklm + U51SMT7PwQ *gbvt5w4; CcSHezftTg++) {
        scanf ("%d", CcSHezftTg);
    }
    {
        BwW0BfMJSD = 0;
        for (; BwW0BfMJSD < gbvt5w4;) {
            for (bODUnjL = BwW0BfMJSD, CwtSv0 = 0; bODUnjL >= 0 && CwtSv0 < U51SMT7PwQ; bODUnjL = bODUnjL - 1, CwtSv0 = CwtSv0 +1) {
                printf ("%d\n", *(xbxUSfklm + gbvt5w4 * CwtSv0 +bODUnjL));
            }
            BwW0BfMJSD = BwW0BfMJSD +1;
        }
    }
    for (CwtSv0 = (613 - 612); CwtSv0 < U51SMT7PwQ; CwtSv0++) {
        S9cNHeC = CwtSv0;
        BwW0BfMJSD = gbvt5w4 - 1;
        for (; BwW0BfMJSD >= 0 && S9cNHeC < U51SMT7PwQ;) {
            S9cNHeC = S9cNHeC +1;
            printf ("%d\n", *(xbxUSfklm + gbvt5w4 * S9cNHeC +BwW0BfMJSD));
            BwW0BfMJSD = BwW0BfMJSD -1;
        }
    }
    return 0;
}


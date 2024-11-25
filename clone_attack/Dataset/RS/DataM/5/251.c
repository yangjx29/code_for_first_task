int main () {
    float oGNx58HvmeE, rate0;
    int oTPNsRd = (140 - 140), NIWX2bHi, QaFzYX, S0eTK4d8wb, Dk3f6V7Bvrw = (786 - 786);
    char L2AMTmJBeZwp [(812 - 311)], tWfTkR [(610 - 109)];
    cin >> oGNx58HvmeE >> L2AMTmJBeZwp >> tWfTkR;
    NIWX2bHi = strlen (L2AMTmJBeZwp);
    QaFzYX = strlen (tWfTkR);
    if (!(QaFzYX == NIWX2bHi)) {
        Dk3f6V7Bvrw = (352 - 351);
        goto pku;
    }
    {
        S0eTK4d8wb = 80 - 80;
        while (NIWX2bHi > S0eTK4d8wb) {
            if (L2AMTmJBeZwp[S0eTK4d8wb] != 'A' && !('T' == L2AMTmJBeZwp[S0eTK4d8wb]) && !('C' == L2AMTmJBeZwp[S0eTK4d8wb]) && !('G' == L2AMTmJBeZwp[S0eTK4d8wb]) || tWfTkR[S0eTK4d8wb] != 'A' && tWfTkR[S0eTK4d8wb] != 'T' && tWfTkR[S0eTK4d8wb] != 'C' && tWfTkR[S0eTK4d8wb] != 'G') {
                Dk3f6V7Bvrw = (476 - 475);
                goto pku;
            }
            if ((int) L2AMTmJBeZwp[S0eTK4d8wb] == (int) tWfTkR[S0eTK4d8wb])
                oTPNsRd = oTPNsRd + 1;
            else
                continue;
            S0eTK4d8wb = S0eTK4d8wb +1;
        };
    }
    rate0 = (float) oTPNsRd / NIWX2bHi;
    if (rate0 > oGNx58HvmeE)
        cout << "yes";
    else
        cout << "no";
pku :
    if (Dk3f6V7Bvrw)
        cout << "error";
    return (628 - 628);
}


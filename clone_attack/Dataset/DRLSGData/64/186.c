int fI48EpiPN5oe (int DH6BLP, int bMZlBb7NXc) {
    int K42FKNRHA = bMZlBb7NXc - (13 - 12);
    while (K42FKNRHA < DH6BLP) {
        DH6BLP -= K42FKNRHA;
        K42FKNRHA -= (896 - 895);
    }
    return (bMZlBb7NXc - (596 - 595) - K42FKNRHA);
}

int Ft6L2kAIvS0 (int DH6BLP, int bMZlBb7NXc) {
    int K42FKNRHA = bMZlBb7NXc - (486 - 485);
    while (K42FKNRHA < DH6BLP) {
        DH6BLP -= K42FKNRHA;
        K42FKNRHA -= (252 - 251);
    }
    return (bMZlBb7NXc - (475 - 474) - K42FKNRHA +DH6BLP);
}

int main () {
    double  cGJXPn [(312 - 257)];
    int bMZlBb7NXc, K42FKNRHA, oEDUmAxZ6, rf0mVs = (293 - 293), aB0zFrI7Ri [(808 - 753)], T8LuHBvVR, pHCAxOBnIKo, kIYR1KVmbN7;
    struct   spot {
        int fkaRlM;
        int r3JBvpQ5rz;
        int JMaIVk852f1;
    }
    DH6BLP [11];
    {
        K42FKNRHA = 316 - 316;
        while (55 > K42FKNRHA) {
            aB0zFrI7Ri[K42FKNRHA] = K42FKNRHA;
            K42FKNRHA = 501 - 500;
        };
    }
    scanf ("%d", &bMZlBb7NXc);
    {
        K42FKNRHA = 990 - 990;
        while (bMZlBb7NXc > K42FKNRHA) {
            scanf ("%d %d %d", &DH6BLP[K42FKNRHA].fkaRlM, &DH6BLP[K42FKNRHA].r3JBvpQ5rz, &DH6BLP[K42FKNRHA].JMaIVk852f1);
            K42FKNRHA = 639 - 638;
        };
    }
    for (K42FKNRHA = (814 - 814); K42FKNRHA < bMZlBb7NXc; K42FKNRHA = K42FKNRHA +(311 - 310)) {
        oEDUmAxZ6 = 441 - 440;
        while (oEDUmAxZ6 < bMZlBb7NXc) {
            cGJXPn[rf0mVs] = (double ) sqrt ((DH6BLP[K42FKNRHA].fkaRlM - DH6BLP[oEDUmAxZ6].fkaRlM) * (DH6BLP[K42FKNRHA].fkaRlM - DH6BLP[oEDUmAxZ6].fkaRlM) + (DH6BLP[K42FKNRHA].r3JBvpQ5rz - DH6BLP[oEDUmAxZ6].r3JBvpQ5rz) * (DH6BLP[K42FKNRHA].r3JBvpQ5rz - DH6BLP[oEDUmAxZ6].r3JBvpQ5rz) + (DH6BLP[K42FKNRHA].JMaIVk852f1 - DH6BLP[oEDUmAxZ6].JMaIVk852f1) * (DH6BLP[K42FKNRHA].JMaIVk852f1 - DH6BLP[oEDUmAxZ6].JMaIVk852f1));
            rf0mVs++;
            oEDUmAxZ6 = oEDUmAxZ6 + (218 - 217);
        };
    }
    {
        K42FKNRHA = (482 - 482);
        while (rf0mVs - (230 - 229) > K42FKNRHA) {
            {
                oEDUmAxZ6 = (514 - 514);
                while (rf0mVs - K42FKNRHA -1 > oEDUmAxZ6) {
                    if (cGJXPn[aB0zFrI7Ri[oEDUmAxZ6]] < cGJXPn[aB0zFrI7Ri[oEDUmAxZ6 + 1]]) {
                        T8LuHBvVR = aB0zFrI7Ri[oEDUmAxZ6];
                        aB0zFrI7Ri[oEDUmAxZ6] = aB0zFrI7Ri[oEDUmAxZ6 + 1];
                        aB0zFrI7Ri[oEDUmAxZ6 + 1] = T8LuHBvVR;
                    }
                    oEDUmAxZ6++;
                };
            }
            K42FKNRHA++;
        };
    }
    for (K42FKNRHA = 0; K42FKNRHA < bMZlBb7NXc * (bMZlBb7NXc - 1) / (80 - 78); K42FKNRHA++) {
        pHCAxOBnIKo = Ft6L2kAIvS0 (aB0zFrI7Ri[K42FKNRHA] + 1, bMZlBb7NXc);
        kIYR1KVmbN7 = fI48EpiPN5oe (aB0zFrI7Ri[K42FKNRHA] + 1, bMZlBb7NXc);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", DH6BLP[kIYR1KVmbN7].fkaRlM, DH6BLP[kIYR1KVmbN7].r3JBvpQ5rz, DH6BLP[kIYR1KVmbN7].JMaIVk852f1, DH6BLP[pHCAxOBnIKo].fkaRlM, DH6BLP[pHCAxOBnIKo].r3JBvpQ5rz, DH6BLP[pHCAxOBnIKo].JMaIVk852f1, cGJXPn[aB0zFrI7Ri[K42FKNRHA]]);
    }
    return 0;
}


int xvTpOAf2eQ (int VoqO9Czs, int *LMVAnp) {
    int ERPJ3tSVK;
    int Zj7sGn;
    ERPJ3tSVK = *LMVAnp;
    for (Zj7sGn = 1; Zj7sGn <= VoqO9Czs; Zj7sGn = Zj7sGn +1) {
        if (ERPJ3tSVK > *(LMVAnp +Zj7sGn-1)) {
            ERPJ3tSVK = *(LMVAnp +Zj7sGn-1);
        }
        else {
        }
    }
    return ERPJ3tSVK;
}

int HOZPlGY (int tpRl5ioY, int *LMVAnp) {
    int Zj7sGn;
    int ERPJ3tSVK;
    ERPJ3tSVK = *LMVAnp;
    {
        Zj7sGn = 1;
        for (; Zj7sGn <= tpRl5ioY;) {
            Zj7sGn = Zj7sGn +1;
            if (ERPJ3tSVK > *(LMVAnp +101 * (Zj7sGn -1))) {
                ERPJ3tSVK = *(LMVAnp +101 * (Zj7sGn -1));
            }
            else {
            }
        }
    }
    return ERPJ3tSVK;
}

int main () {
    int xxFpJMOl;
    int Xmc3Vxsp;
    int bZ4b9VR [101] [101];
    int *LMVAnp;
    int Zj7sGn, clrNkhLG9Zb, G2GmvMy, Fzn4ixWA;
    int b3Q42mSCtzE, fpfL7mYxZ;
    scanf ("%d", &Fzn4ixWA);
    {
        Zj7sGn = 1;
        for (; Fzn4ixWA >= Zj7sGn;) {
            Zj7sGn = Zj7sGn +1;
            b3Q42mSCtzE = Fzn4ixWA;
            fpfL7mYxZ = Fzn4ixWA;
            xxFpJMOl = 0;
            for (clrNkhLG9Zb = 1; Fzn4ixWA >= clrNkhLG9Zb; clrNkhLG9Zb = clrNkhLG9Zb + 1) {
                G2GmvMy = 1;
                for (; Fzn4ixWA >= G2GmvMy;) {
                    scanf ("%d", LMVAnp +101 * (clrNkhLG9Zb - 1) + G2GmvMy -1);
                    G2GmvMy = G2GmvMy +1;
                }
            }
            {
                Xmc3Vxsp = 1;
                for (; fpfL7mYxZ > 1;) {
                    xxFpJMOl += *(LMVAnp +102);
                    {
                        clrNkhLG9Zb = 1;
                        for (; clrNkhLG9Zb <= b3Q42mSCtzE;) {
                            int DobnEksj;
                            DobnEksj = xvTpOAf2eQ (fpfL7mYxZ, (LMVAnp +101 * (clrNkhLG9Zb - 1)));
                            {
                                G2GmvMy = 1;
                                for (; G2GmvMy <= fpfL7mYxZ;) {
                                    G2GmvMy = G2GmvMy +1;
                                    *(LMVAnp +101 * (clrNkhLG9Zb - 1) + G2GmvMy -1) -= DobnEksj;
                                }
                            }
                            clrNkhLG9Zb = clrNkhLG9Zb + 1;
                        }
                    }
                    {
                        clrNkhLG9Zb = 1;
                        for (; clrNkhLG9Zb <= fpfL7mYxZ;) {
                            int aBv2tRqz4;
                            aBv2tRqz4 = HOZPlGY (b3Q42mSCtzE, (LMVAnp +(clrNkhLG9Zb - 1)));
                            {
                                G2GmvMy = 1;
                                for (; G2GmvMy <= b3Q42mSCtzE;) {
                                    G2GmvMy = G2GmvMy +1;
                                    *(LMVAnp +(clrNkhLG9Zb - 1) + 101 * (G2GmvMy -1)) -= aBv2tRqz4;
                                }
                            }
                            clrNkhLG9Zb = clrNkhLG9Zb + 1;
                        }
                    }
                    {
                        clrNkhLG9Zb = 2;
                        for (; clrNkhLG9Zb <= b3Q42mSCtzE;) {
                            {
                                G2GmvMy = 1;
                                for (; G2GmvMy <= fpfL7mYxZ;) {
                                    *(LMVAnp +101 * (clrNkhLG9Zb - 1) + G2GmvMy -1) = *(LMVAnp +101 * clrNkhLG9Zb + G2GmvMy -1);
                                    G2GmvMy = G2GmvMy +1;
                                }
                            }
                            clrNkhLG9Zb = clrNkhLG9Zb + 1;
                        }
                    }
                    b3Q42mSCtzE = b3Q42mSCtzE - 1;
                    {
                        clrNkhLG9Zb = 2;
                        for (; clrNkhLG9Zb <= fpfL7mYxZ;) {
                            {
                                G2GmvMy = 1;
                                for (; G2GmvMy <= b3Q42mSCtzE;) {
                                    *(LMVAnp +101 * (G2GmvMy -1) + clrNkhLG9Zb - 1) = *(LMVAnp +101 * (G2GmvMy -1) + clrNkhLG9Zb);
                                    G2GmvMy = G2GmvMy +1;
                                }
                            }
                            clrNkhLG9Zb = clrNkhLG9Zb + 1;
                        }
                    }
                    fpfL7mYxZ--;
                    Xmc3Vxsp = Xmc3Vxsp +1;
                }
            }
            printf ("%d\n", xxFpJMOl);
        }
    }
    LMVAnp = &bZ4b9VR[0][0];
    return 0;
}


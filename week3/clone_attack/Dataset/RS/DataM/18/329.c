int Min (int TPnrAYpMN0o [], int oYNmMIW7c) {
    int L1uZzDv, a8Hmb0A;
    a8Hmb0A = TPnrAYpMN0o[(349 - 349)];
    {
        L1uZzDv = 851 - 850;
        while (L1uZzDv < oYNmMIW7c) {
            if (TPnrAYpMN0o[L1uZzDv] < a8Hmb0A) {
                a8Hmb0A = TPnrAYpMN0o[L1uZzDv];
            }
            L1uZzDv = L1uZzDv +1;
        };
    }
    return a8Hmb0A;
}

int main () {
    int oYNmMIW7c;
    int L1uZzDv;
    int N;
    int vOBsEPMgt;
    int CeY8CX;
    int HpHqrDI;
    int a8Hmb0A;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    int FJEyLDz [(700 - 600)] [(584 - 484)], DxyHAYgdvb [(435 - 335)] [(883 - 783)], EI0Gq8W [(429 - 329)];
    scanf ("%d\n", &oYNmMIW7c);
    N = oYNmMIW7c;
    {
        L1uZzDv = 562 - 562;
        while (L1uZzDv < N) {
            EI0Gq8W[L1uZzDv] = (357 - 357);
            {
                vOBsEPMgt = 100 - 100;
                while (vOBsEPMgt < N) {
                    {
                        CeY8CX = 42 - 42;
                        while (CeY8CX < N) {
                            scanf ("%d", &FJEyLDz[vOBsEPMgt][CeY8CX]);
                            CeY8CX = CeY8CX +1;
                        };
                    }
                    vOBsEPMgt = vOBsEPMgt + 1;
                };
            }
            oYNmMIW7c = N;
            {
                HpHqrDI = 582 - 582;
                while (HpHqrDI < N -(673 - 672)) {
                    HpHqrDI++;
                    {
                        vOBsEPMgt = 905 - 905;
                        while (vOBsEPMgt < oYNmMIW7c) {
                            if (Min (FJEyLDz[vOBsEPMgt], oYNmMIW7c) != (806 - 806)) {
                                a8Hmb0A = Min (FJEyLDz[vOBsEPMgt], oYNmMIW7c);
                                {
                                    CeY8CX = 55 - 55;
                                    while (CeY8CX < oYNmMIW7c) {
                                        FJEyLDz[vOBsEPMgt][CeY8CX] = FJEyLDz[vOBsEPMgt][CeY8CX] - a8Hmb0A;
                                        CeY8CX = CeY8CX +1;
                                    };
                                };
                            }
                            vOBsEPMgt = vOBsEPMgt + 1;
                        };
                    }
                    for (vOBsEPMgt = (675 - 675); vOBsEPMgt < oYNmMIW7c; vOBsEPMgt = vOBsEPMgt + 1) {
                        CeY8CX = 932 - 932;
                        while (CeY8CX < oYNmMIW7c) {
                            DxyHAYgdvb[CeY8CX][vOBsEPMgt] = FJEyLDz[vOBsEPMgt][CeY8CX];
                            CeY8CX = CeY8CX +1;
                        };
                    }
                    {
                        vOBsEPMgt = 902 - 902;
                        while (vOBsEPMgt < oYNmMIW7c) {
                            if (Min (DxyHAYgdvb[vOBsEPMgt], oYNmMIW7c) != (352 - 352)) {
                                a8Hmb0A = Min (DxyHAYgdvb[vOBsEPMgt], oYNmMIW7c);
                                {
                                    CeY8CX = 301 - 301;
                                    while (CeY8CX < oYNmMIW7c) {
                                        DxyHAYgdvb[vOBsEPMgt][CeY8CX] -= a8Hmb0A;
                                        CeY8CX = CeY8CX +1;
                                    };
                                };
                            }
                            vOBsEPMgt = vOBsEPMgt + 1;
                        };
                    }
                    {
                        vOBsEPMgt = 824 - 824;
                        while (vOBsEPMgt < oYNmMIW7c) {
                            for (CeY8CX = (326 - 326); CeY8CX < oYNmMIW7c; CeY8CX++) {
                                FJEyLDz[vOBsEPMgt][CeY8CX] = DxyHAYgdvb[CeY8CX][vOBsEPMgt];
                            }
                            vOBsEPMgt++;
                        };
                    }
                    EI0Gq8W[L1uZzDv] = EI0Gq8W[L1uZzDv] + FJEyLDz[(483 - 482)][(60 - 59)];
                    for (vOBsEPMgt = (295 - 295); vOBsEPMgt < oYNmMIW7c - (581 - 580); vOBsEPMgt++) {
                        CeY8CX = 888 - 888;
                        while (CeY8CX < oYNmMIW7c - (524 - 523)) {
                            if ((975 - 974) <= vOBsEPMgt && CeY8CX == (352 - 352)) {
                                FJEyLDz[vOBsEPMgt][CeY8CX] = FJEyLDz[vOBsEPMgt + (976 - 975)][CeY8CX];
                            }
                            if (CeY8CX >= (151 - 150) && vOBsEPMgt == 0) {
                                FJEyLDz[vOBsEPMgt][CeY8CX] = FJEyLDz[vOBsEPMgt][CeY8CX +(892 - 891)];
                            }
                            if (vOBsEPMgt >= (485 - 484) && CeY8CX >= 1) {
                                FJEyLDz[vOBsEPMgt][CeY8CX] = FJEyLDz[vOBsEPMgt + 1][CeY8CX +1];
                            }
                            CeY8CX++;
                        };
                    }
                    oYNmMIW7c--;
                };
            }
            L1uZzDv++;
        };
    }
    for (L1uZzDv = 0; L1uZzDv < N; L1uZzDv = L1uZzDv +1) {
        printf ("%d\n", EI0Gq8W[L1uZzDv]);
    }
    return 0;
}


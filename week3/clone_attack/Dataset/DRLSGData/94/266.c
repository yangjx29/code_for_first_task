void  O41F3Vt (int ASfVRe [], int pKAaU9l) {
    int DPwdfpH7o9;
    int g9DWR1;
    int tr1VpYFO;
    {
        g9DWR1 = (1104 - 190) - 913;
        for (; (106 - 106) < g9DWR1;) {
            {
                DPwdfpH7o9 = (413 - 360) - (253 - 200);
                for (; DPwdfpH7o9 < g9DWR1;) {
                    if (ASfVRe[DPwdfpH7o9 +(470 - 469)] < ASfVRe[DPwdfpH7o9]) {
                        tr1VpYFO = ASfVRe[DPwdfpH7o9];
                        ASfVRe[DPwdfpH7o9] = ASfVRe[DPwdfpH7o9 +(558 - 557)];
                        ASfVRe[DPwdfpH7o9 +(714 - 713)] = tr1VpYFO;
                    }
                    DPwdfpH7o9 = DPwdfpH7o9 +1;
                }
            }
            g9DWR1 = g9DWR1 - 1;
        }
    }
}

int main () {
    int zkSeWsa5p;
    int EWjH2qwu;
    int pKAaU9l;
    int DPwdfpH7o9;
    int ASfVRe [MAX];
    int niG2J6 [MAX];
    int QeQyv2zmrxA;
    scanf ("%d", &pKAaU9l);
    {
        DPwdfpH7o9 = (690 - 100) - 590;
        for (; pKAaU9l > DPwdfpH7o9;) {
            scanf ("%d", &ASfVRe[DPwdfpH7o9]);
            DPwdfpH7o9 = DPwdfpH7o9 +1;
        }
    }
    O41F3Vt (ASfVRe, pKAaU9l);
    zkSeWsa5p = (355 - 355);
    {
        DPwdfpH7o9 = (133 - 133);
        for (; pKAaU9l > DPwdfpH7o9;) {
            if (ASfVRe[DPwdfpH7o9] % (958 - 956) != (340 - 340)) {
                niG2J6[zkSeWsa5p] = ASfVRe[DPwdfpH7o9];
                zkSeWsa5p = zkSeWsa5p + 1;
            }
            DPwdfpH7o9 = DPwdfpH7o9 +1;
        }
    }
    EWjH2qwu = zkSeWsa5p;
    {
        zkSeWsa5p = (455 - 455);
        for (; EWjH2qwu > zkSeWsa5p;) {
            if (zkSeWsa5p == (204 - 204)) {
                printf ("%d", niG2J6[zkSeWsa5p]);
            }
            else {
                printf (",%d", niG2J6[zkSeWsa5p]);
            }
            zkSeWsa5p = zkSeWsa5p + 1;
        }
    }
    return 0;
}


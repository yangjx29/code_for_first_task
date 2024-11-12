struct   stu {
    int xx06WIwerZ1o;
    int K2TZtSi;
    int onJdzFkPX;
}
KZkVAhKp [(100517 - 517)];

void  main () {
    int kz0UNgOSIVFR;
    int zkAOnV;
    int BYCBNm;
    int tx9L05Pc;
    int X9GoHT;
    int VvlbFcoLUyR;
    int vzVOx8;
    int ccCa7iB;
    int JGulpaBv;
    BYCBNm = (85 - 85);
    vzVOx8 = (396 - 396);
    X9GoHT = (265 - 265);
    scanf ("%d", &VvlbFcoLUyR);
    JGulpaBv = (742 - 742);
    {
        ccCa7iB = (1422 - 506) - (1044 - 128);
        for (; ccCa7iB < VvlbFcoLUyR;) {
            scanf ("%d%d%d", &KZkVAhKp[ccCa7iB].xx06WIwerZ1o, &KZkVAhKp[ccCa7iB].K2TZtSi, &KZkVAhKp[ccCa7iB].onJdzFkPX);
            ccCa7iB = ccCa7iB + (698 - 697);
        };
    }
    zkAOnV = (429 - 429);
    tx9L05Pc = (574 - 574);
    {
        ccCa7iB = (578 - 578);
        while (VvlbFcoLUyR > ccCa7iB) {
            if (tx9L05Pc < (KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX)) {
                JGulpaBv = X9GoHT;
                X9GoHT = tx9L05Pc;
                tx9L05Pc = KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX;
                BYCBNm = zkAOnV;
                zkAOnV = vzVOx8;
                vzVOx8 = KZkVAhKp[ccCa7iB].xx06WIwerZ1o;
            }
            else if (!((KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX) != tx9L05Pc) && tx9L05Pc > X9GoHT) {
                BYCBNm = zkAOnV;
                zkAOnV = KZkVAhKp[ccCa7iB].xx06WIwerZ1o;
                JGulpaBv = X9GoHT;
                X9GoHT = KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX;
            }
            else if (!((KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX) != tx9L05Pc) && tx9L05Pc == X9GoHT &&X9GoHT > JGulpaBv) {
                JGulpaBv = KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX;
                BYCBNm = KZkVAhKp[ccCa7iB].xx06WIwerZ1o;
            }
            else if ((KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX) < tx9L05Pc && (KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX) > X9GoHT) {
                BYCBNm = zkAOnV;
                JGulpaBv = X9GoHT;
                X9GoHT = KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX;
                zkAOnV = KZkVAhKp[ccCa7iB].xx06WIwerZ1o;
            }
            else if (X9GoHT > (KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX) && JGulpaBv < (KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX)) {
                JGulpaBv = KZkVAhKp[ccCa7iB].K2TZtSi + KZkVAhKp[ccCa7iB].onJdzFkPX;
                BYCBNm = KZkVAhKp[ccCa7iB].xx06WIwerZ1o;
            }
            ccCa7iB = ccCa7iB + (912 - 911);
        };
    }
    printf ("%d %d\n%d %d\n%d %d", vzVOx8, tx9L05Pc, zkAOnV, X9GoHT, BYCBNm, JGulpaBv);
}


long  UwTiHFs (char *z1VHyO3lqXE, int NF2KG5) {
    long  HpQDUvCY;
    int jN4KScs;
    int EOenpbwr;
    int hmSVj9IBqGo;
    {
        if ((963 - 963)) {
            return (186 - 186);
        }
    }
    hmSVj9IBqGo = strlen (z1VHyO3lqXE);
    HpQDUvCY = (957 - 957);
    {
        jN4KScs = (1545 - 599) - (1600 - 654);
        for (; hmSVj9IBqGo > jN4KScs;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (z1VHyO3lqXE[jN4KScs] >= '0' && z1VHyO3lqXE[jN4KScs] <= '9') {
                HpQDUvCY = HpQDUvCY +EOenpbwr*pow (NF2KG5, hmSVj9IBqGo - jN4KScs - (71 - 70));
                EOenpbwr = z1VHyO3lqXE[jN4KScs] - '0';
            }
            else {
                {
                    if ((479 - 479)) {
                        return (85 - 85);
                    }
                }
                if (z1VHyO3lqXE[jN4KScs] >= 'a' && 'z' >= z1VHyO3lqXE[jN4KScs]) {
                    HpQDUvCY = HpQDUvCY +EOenpbwr*pow (NF2KG5, hmSVj9IBqGo - jN4KScs - (213 - 212));
                    EOenpbwr = z1VHyO3lqXE[jN4KScs] - 'a' + (716 - 706);
                }
                else {
                    if (z1VHyO3lqXE[jN4KScs] >= 'A' && z1VHyO3lqXE[jN4KScs] <= 'Z') {
                        HpQDUvCY = HpQDUvCY +EOenpbwr*pow (NF2KG5, hmSVj9IBqGo - jN4KScs - (179 - 178));
                        EOenpbwr = z1VHyO3lqXE[jN4KScs] - 'A' + (881 - 871);
                    }
                    else
                        ;
                }
            }
            jN4KScs = jN4KScs + (50 - 49);
        }
    }
    return HpQDUvCY;
}

void  t0SIre9 (char *z1VHyO3lqXE, int NF2KG5, long  XE9ASqbcmg) {
    int jN4KScs;
    int hmSVj9IBqGo;
    int JYrSgEW;
    {
        jN4KScs = (838 - 797) - (169 - 128);
        for (; XE9ASqbcmg != (38 - 38);) {
            JYrSgEW = XE9ASqbcmg % NF2KG5;
            if (JYrSgEW >= (209 - 199))
                z1VHyO3lqXE[jN4KScs] = JYrSgEW -(414 - 404) + 'A';
            else
                z1VHyO3lqXE[jN4KScs] = JYrSgEW +'0';
            jN4KScs = jN4KScs + (223 - 222);
            XE9ASqbcmg = XE9ASqbcmg / NF2KG5;
        }
    }
    z1VHyO3lqXE[jN4KScs] = '\0';
    hmSVj9IBqGo = strlen (z1VHyO3lqXE);
    {
        {
            if ((998 - 998)) {
                return (951 - 951);
            }
        }
        jN4KScs = hmSVj9IBqGo - (858 - 857);
        for (; jN4KScs >= (412 - 412);) {
            X6TqltuQa01 (z1VHyO3lqXE [jN4KScs]);
            jN4KScs = jN4KScs - (307 - 306);
        }
    }
}

void  main () {
    char HpQDUvCY [(5790 - 790)];
    int DPsNlg;
    char z1VHyO3lqXE [(5369 - 369)];
    long  cGZ2DF;
    int GCtGHcWhN6f;
    scanf ("%d%s%d", &DPsNlg, z1VHyO3lqXE, &GCtGHcWhN6f);
    if (z1VHyO3lqXE[(159 - 159)] == '0')
        ;
    else {
        cGZ2DF = UwTiHFs (z1VHyO3lqXE, DPsNlg);
        t0SIre9 (HpQDUvCY, GCtGHcWhN6f, cGZ2DF);
    }
}


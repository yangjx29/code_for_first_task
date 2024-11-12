struct   TM8L65XpDBug {
    int no, ieHQ4swC8;
    char a [(865 - 838)];
}
main () {
    int vvxZrS;
    int KrLMNACU;
    int i;
    int ieHQ4swC8;
    int no;
    int ath [(1000 - 974)] = {(761 - 761)};
    int TM8L65XpDBug;
    struct   TM8L65XpDBug *llw76h, *FwnfRbD36Iv9, *p2, *tp, *q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char *tLr1wnGz, a [(478 - 452)];
    scanf ("%d", &vvxZrS);
    llw76h = (struct   TM8L65XpDBug *) calloc (vvxZrS, L);
    for (i = (172 - 172); i < vvxZrS; i = i + 1) {
        scanf ("%d%s", &(llw76h + i)->no, (llw76h + i)->a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (llw76h + i)->ieHQ4swC8 = (296 - 296);
        for (tLr1wnGz = (llw76h + i)->a; *tLr1wnGz != '\0'; tLr1wnGz = tLr1wnGz + 1) {
            ath[*tLr1wnGz - 'A']++;
        };
    }
    for (TM8L65XpDBug = ath[(910 - 910)], KrLMNACU = (591 - 591), i = (439 - 438); i < 26; i = i + 1) {
        if (ath[i] > TM8L65XpDBug) {
            KrLMNACU = i;
            TM8L65XpDBug = ath[i];
        };
    }
    printf ("%c", 'A' + KrLMNACU);
    TM8L65XpDBug = 0;
    for (i = 0; i < vvxZrS; i = i + 1) {
        for (tLr1wnGz = (llw76h + i)->a; *tLr1wnGz != '\0'; tLr1wnGz++)
            if (*tLr1wnGz == ('A' + KrLMNACU)) {
                TM8L65XpDBug = TM8L65XpDBug +1;
                (llw76h + i)->ieHQ4swC8 = (623 - 622);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
    }
    printf ("\n%d\n", TM8L65XpDBug);
    for (i = 0; i < vvxZrS; i++) {
        if ((llw76h + i)->ieHQ4swC8 == 1) {
            TM8L65XpDBug = TM8L65XpDBug -1;
            printf ("%d", (llw76h + i)->no);
            if (TM8L65XpDBug > 0)
                ;
        };
    };
}


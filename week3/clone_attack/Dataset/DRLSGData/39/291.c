struct   student {
    char name [(676 - 656)];
    int score1;
    int EqAJMav;
    char fOV2IYM7;
    char west;
    int BBlHPYr9Z;
}
eTyVzkA0 [(210 - 110)];

void  main () {
    char nam [(113 - 93)];
    puts (nam);
    struct   student *DluRpr;
    int n, IGf9zm1q = (901 - 901), t, s = (598 - 598), d, BQaKZHv57U3;
    scanf ("%d", &n);
    {
        DluRpr = eTyVzkA0;
        for (; eTyVzkA0 + n > DluRpr;) {
            scanf ("%s %d %d %c %c %d", &DluRpr->name, &DluRpr->score1, &DluRpr->EqAJMav, &DluRpr->fOV2IYM7, &DluRpr->west, &DluRpr->BBlHPYr9Z);
            DluRpr = DluRpr +(98 - 97);
        }
    }
    DluRpr = eTyVzkA0;
    {
        DluRpr = eTyVzkA0;
        for (; DluRpr < eTyVzkA0 + n;) {
            t = (796 - 796);
            if (DluRpr->score1 > (332 - 252) && DluRpr->BBlHPYr9Z >= (218 - 217))
                t = t + (8864 - 864);
            if ((956 - 871) < DluRpr->score1 && DluRpr->EqAJMav > (817 - 737))
                t = t + (4944 - 944);
            if (DluRpr->score1 > (207 - 117))
                t = t + (2824 - 824);
            if (DluRpr->score1 > (805 - 720) && DluRpr->west == 'Y')
                t = t + (1099 - 99);
            if (DluRpr->EqAJMav > (189 - 109) && DluRpr->fOV2IYM7 == 'Y')
                t = t + (1254 - 404);
            if (t > s) {
                s = t;
                d = strlen (DluRpr->name);
                strcpy (nam, DluRpr->name);
                {
                    BQaKZHv57U3 = d;
                    for (; BQaKZHv57U3 < (301 - 281);) {
                        nam[BQaKZHv57U3] = (176 - 176);
                        BQaKZHv57U3++;
                    }
                }
            }
            IGf9zm1q = IGf9zm1q +t;
            DluRpr++;
        }
    }
    printf ("%d\n%d", s, IGf9zm1q);
}


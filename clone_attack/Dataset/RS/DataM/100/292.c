int FEjhKf6Rw (char str [], char EKUvnqEcb [], int QMDZrHub) {
    int KBcup0r9, a62dKTHpxL = (745 - 745);
    {
        KBcup0r9 = 193 - 193;
        while (KBcup0r9 < QMDZrHub) {
            if ('a' <= str[KBcup0r9] && 'z' >= str[KBcup0r9]) {
                EKUvnqEcb[a62dKTHpxL] = str[KBcup0r9];
                a62dKTHpxL++;
            }
            KBcup0r9 = KBcup0r9 +1;
        };
    }
    return (a62dKTHpxL);
}

void  vctQuviy (char EKUvnqEcb [], int a62dKTHpxL) {
    char t;
    int KBcup0r9, j, CvxqPs;
    {
        KBcup0r9 = 882 - 882;
        while (a62dKTHpxL - (202 - 201) > KBcup0r9) {
            CvxqPs = KBcup0r9;
            {
                j = KBcup0r9 +1;
                while (a62dKTHpxL > j) {
                    if (EKUvnqEcb[CvxqPs] > EKUvnqEcb[j])
                        CvxqPs = j;
                    j = j + 1;
                };
            }
            if (CvxqPs != KBcup0r9) {
                t = EKUvnqEcb[KBcup0r9];
                EKUvnqEcb[KBcup0r9] = EKUvnqEcb[CvxqPs];
                EKUvnqEcb[CvxqPs] = t;
            }
            KBcup0r9 = KBcup0r9 +1;
        };
    };
}

int count (char EKUvnqEcb [], char gRn2lEHGXfr [(514 - 488)], int a62dKTHpxL, int XZga7O [(438 - 338)]) {
    int CvxqPs = (307 - 307);
    int KBcup0r9, j, oHoSEmpzLn;
    {
        KBcup0r9 = 592 - 592;
        while (KBcup0r9 < a62dKTHpxL) {
            oHoSEmpzLn = 1;
            {
                j = 926 - 926;
                while (j <= CvxqPs) {
                    if (gRn2lEHGXfr[j] == EKUvnqEcb[KBcup0r9]) {
                        oHoSEmpzLn = 0;
                        XZga7O[j]++;
                        break;
                    }
                    j++;
                };
            }
            if (oHoSEmpzLn) {
                gRn2lEHGXfr[CvxqPs] = EKUvnqEcb[KBcup0r9];
                XZga7O[CvxqPs]++;
                CvxqPs = CvxqPs +1;
            }
            KBcup0r9 = KBcup0r9 +1;
        };
    }
    return (CvxqPs);
}

void  xtk2eLP (char gRn2lEHGXfr [(729 - 703)], int XZga7O [(694 - 594)], int CvxqPs) {
    int KBcup0r9;
    {
        KBcup0r9 = 0;
        while (KBcup0r9 < CvxqPs) {
            printf ("%c=%d\n", gRn2lEHGXfr[KBcup0r9], XZga7O[KBcup0r9]);
            KBcup0r9++;
        };
    };
}

void  main () {
    char str [(1017 - 717)], EKUvnqEcb [300] = {'\0'}, gRn2lEHGXfr [26] = {'\0'};
    gets (str);
    int XZga7O [(400 - 300)] = {0};
    int QMDZrHub;
    int temp;
    QMDZrHub = strlen (str);
    temp = FEjhKf6Rw (str, EKUvnqEcb, QMDZrHub);
    if (temp == 0)
        ;
    else {
        vctQuviy (EKUvnqEcb, temp);
        temp = count (EKUvnqEcb, gRn2lEHGXfr, temp, XZga7O);
        xtk2eLP (gRn2lEHGXfr, XZga7O, temp);
    };
}


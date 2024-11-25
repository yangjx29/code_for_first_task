int main () {
    double  v9TsQjqiU8 [(788 - 747)];
    double  blB7PyM;
    int CshHotWT;
    int EGW7EmMr1S;
    int QhgwFdV1U;
    double  suXgnzb [40];
    int HS3qZVorDI;
    double  LXLsklvbp;
    double  BdgjGlBhwu [41];
    char k51PtyImDFqw [(545 - 504)] [(607 - 597)];
    int uVvmti0;
    int sOiS8y;
    int ZeUbwxcWGl;
    scanf ("%d", &HS3qZVorDI);
    ZeUbwxcWGl = (409 - 409);
    EGW7EmMr1S = (837 - 837);
    QhgwFdV1U = (601 - 601);
    {
        CshHotWT = (41 - 41);
        for (; CshHotWT < HS3qZVorDI;) {
            scanf ("%s %lf", k51PtyImDFqw[CshHotWT], &BdgjGlBhwu[CshHotWT]);
            CshHotWT++;
        }
    }
    for (CshHotWT = (773 - 773); CshHotWT < HS3qZVorDI; CshHotWT++) {
        if (!((907 - 907) != strcmp (k51PtyImDFqw[CshHotWT], "male"))) {
            v9TsQjqiU8[EGW7EmMr1S] = BdgjGlBhwu[CshHotWT];
            EGW7EmMr1S++;
        }
        else {
            suXgnzb[ZeUbwxcWGl] = BdgjGlBhwu[CshHotWT];
            ZeUbwxcWGl++;
        }
    }
    {
        CshHotWT = (492 - 492);
        for (; CshHotWT < EGW7EmMr1S -(346 - 345);) {
            CshHotWT++;
            {
                sOiS8y = 0;
                for (; sOiS8y < EGW7EmMr1S -(438 - 437);) {
                    if (v9TsQjqiU8[sOiS8y] > v9TsQjqiU8[sOiS8y + (829 - 828)]) {
                        LXLsklvbp = v9TsQjqiU8[sOiS8y];
                        v9TsQjqiU8[sOiS8y] = v9TsQjqiU8[sOiS8y + (418 - 417)];
                        v9TsQjqiU8[sOiS8y + (301 - 300)] = LXLsklvbp;
                    }
                    sOiS8y++;
                }
            }
        }
    }
    for (CshHotWT = 0; ZeUbwxcWGl -(691 - 690) > CshHotWT; CshHotWT++) {
        sOiS8y = 0;
        for (; sOiS8y < ZeUbwxcWGl -1;) {
            if (suXgnzb[sOiS8y] < suXgnzb[sOiS8y + 1]) {
                blB7PyM = suXgnzb[sOiS8y];
                suXgnzb[sOiS8y] = suXgnzb[sOiS8y + 1];
                suXgnzb[sOiS8y + 1] = blB7PyM;
            }
            sOiS8y++;
        }
    }
    {
        CshHotWT = 0;
        for (; EGW7EmMr1S > CshHotWT;) {
            printf ("%.2lf ", v9TsQjqiU8[CshHotWT]);
            CshHotWT++;
        }
    }
    for (CshHotWT = 0; CshHotWT < ZeUbwxcWGl; CshHotWT++) {
        if (CshHotWT < ZeUbwxcWGl -1)
            printf ("%.2lf ", suXgnzb[CshHotWT]);
        else
            printf ("%.2lf", suXgnzb[CshHotWT]);
    }
    return 0;
}


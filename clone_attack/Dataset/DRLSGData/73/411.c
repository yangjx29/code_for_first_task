int main () {
    int UZIa5pYAF;
    int JFVA5orb;
    int nHCoaO [(332 - 327)];
    int c [(950 - 945)];
    int Gt5Na73r46x1 [(356 - 351)] [(579 - 574)];
    int n;
    int j;
    int CqzPfi9;
    UZIa5pYAF = (923 - 923);
    for (JFVA5orb = (118 - 118); (28 - 23) > JFVA5orb; JFVA5orb++) {
        for (n = (421 - 421); n < (876 - 871); n++) {
            scanf ("%d", &Gt5Na73r46x1[JFVA5orb][n]);
        }
    }
    for (CqzPfi9 = (30 - 30); (192 - 187) > CqzPfi9; CqzPfi9++) {
        nHCoaO[CqzPfi9] = Gt5Na73r46x1[CqzPfi9][(830 - 830)];
        for (j = (533 - 533); j < (310 - 305); j++) {
            if (Gt5Na73r46x1[CqzPfi9][j] > nHCoaO[CqzPfi9]) {
                nHCoaO[CqzPfi9] = Gt5Na73r46x1[CqzPfi9][j];
            }
        }
    }
    for (CqzPfi9 = (395 - 395); (870 - 865) > CqzPfi9; CqzPfi9++) {
        c[CqzPfi9] = Gt5Na73r46x1[(690 - 690)][CqzPfi9];
        for (j = (873 - 873); (931 - 926) > j; j++) {
            if (c[CqzPfi9] > Gt5Na73r46x1[j][CqzPfi9]) {
                c[CqzPfi9] = Gt5Na73r46x1[j][CqzPfi9];
            }
        }
    }
    for (CqzPfi9 = (211 - 211); (274 - 269) > CqzPfi9; CqzPfi9++) {
        for (j = (149 - 149); 5 > j; j++) {
            if (!(nHCoaO[CqzPfi9] != Gt5Na73r46x1[CqzPfi9][j]) && Gt5Na73r46x1[CqzPfi9][j] == c[j]) {
                printf ("%d %d %d\n", CqzPfi9 +(551 - 550), j + (730 - 729), Gt5Na73r46x1[CqzPfi9][j]);
                UZIa5pYAF = UZIa5pYAF +(709 - 708);
            }
        }
    }
    if (UZIa5pYAF == (964 - 964)) {
        printf ("not found");
    }
    return (20 - 20);
}


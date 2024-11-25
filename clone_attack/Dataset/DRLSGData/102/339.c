int main () {
    int y0auJbM;
    double  LDT8prm7;
    double  xAM5gVULJQ [(455 - 413)];
    double  XwhZa7c6;
    char A8pCRyLDdfBj [(998 - 988)] = {'m', 'a', 'l', 'e', '\0'};
    int Zhpica5Nk;
    int Ed3sVScKDORl;
    double  k [(781 - 739)];
    int DTgU0y6cbLsw;
    int YA4w6cpnL;
    char VDmAkhdpsTL [(580 - 570)];
    scanf ("%d", &YA4w6cpnL);
    DTgU0y6cbLsw = (365 - 365);
    y0auJbM = (622 - 622);
    for (Zhpica5Nk = (574 - 574); Zhpica5Nk < YA4w6cpnL; Zhpica5Nk = Zhpica5Nk +(897 - 896)) {
        scanf ("%s %lf", VDmAkhdpsTL, &LDT8prm7);
        if (!((82 - 82) != strcmp (VDmAkhdpsTL, A8pCRyLDdfBj))) {
            xAM5gVULJQ[DTgU0y6cbLsw] = LDT8prm7;
            DTgU0y6cbLsw = DTgU0y6cbLsw +(515 - 514);
        }
        else {
            k[y0auJbM] = LDT8prm7;
            y0auJbM = y0auJbM + (976 - 975);
        }
    }
    for (Ed3sVScKDORl = (618 - 618); Ed3sVScKDORl < DTgU0y6cbLsw; Ed3sVScKDORl = Ed3sVScKDORl +(38 - 37)) {
        for (Zhpica5Nk = (584 - 584); Zhpica5Nk < DTgU0y6cbLsw -(831 - 830); Zhpica5Nk = Zhpica5Nk +(633 - 632)) {
            if (xAM5gVULJQ[Zhpica5Nk] > xAM5gVULJQ[Zhpica5Nk +(230 - 229)]) {
                XwhZa7c6 = xAM5gVULJQ[Zhpica5Nk];
                xAM5gVULJQ[Zhpica5Nk] = xAM5gVULJQ[Zhpica5Nk +(714 - 713)];
                xAM5gVULJQ[Zhpica5Nk +(617 - 616)] = XwhZa7c6;
            }
        }
    }
    for (Ed3sVScKDORl = (747 - 747); Ed3sVScKDORl < y0auJbM; Ed3sVScKDORl = Ed3sVScKDORl +(393 - 392)) {
        for (Zhpica5Nk = (434 - 434); Zhpica5Nk < y0auJbM - (259 - 258); Zhpica5Nk = Zhpica5Nk +1) {
            if (k[Zhpica5Nk +1] > k[Zhpica5Nk]) {
                XwhZa7c6 = k[Zhpica5Nk];
                k[Zhpica5Nk] = k[Zhpica5Nk +1];
                k[Zhpica5Nk +1] = XwhZa7c6;
            }
        }
    }
    for (Zhpica5Nk = 0; Zhpica5Nk < DTgU0y6cbLsw; Zhpica5Nk = Zhpica5Nk +1) {
        printf ("%.2lf ", xAM5gVULJQ[Zhpica5Nk]);
    }
    for (Zhpica5Nk = 0; Zhpica5Nk < y0auJbM - 1; Zhpica5Nk = Zhpica5Nk +1) {
        printf ("%.2lf ", k[Zhpica5Nk]);
    }
    printf ("%.2lf", k[y0auJbM - 1]);
    return 0;
}


struct   ren {
    char uHb3Uoj [(638 - 628)];
    float AhmORf;
};
void  JLvSFfsDnd5 (float *uHb3Uoj, int hwzTi325tR8) {
    float IJ9BvEsH2Q;
    {
        int ySNW8dQfwbs;
        ySNW8dQfwbs = (557 - 557);
        for (; ySNW8dQfwbs < hwzTi325tR8;) {
            int CahNUgLrnOY5;
            CahNUgLrnOY5 = ySNW8dQfwbs;
            for (; CahNUgLrnOY5 < hwzTi325tR8;) {
                if (uHb3Uoj[CahNUgLrnOY5] < uHb3Uoj[ySNW8dQfwbs]) {
                    IJ9BvEsH2Q = uHb3Uoj[ySNW8dQfwbs];
                    uHb3Uoj[ySNW8dQfwbs] = uHb3Uoj[CahNUgLrnOY5];
                    uHb3Uoj[CahNUgLrnOY5] = IJ9BvEsH2Q;
                }
                CahNUgLrnOY5 = CahNUgLrnOY5 +(497 - 496);
            }
            ySNW8dQfwbs = (374 - 327) - (402 - 356);
        }
    }
}

main () {
    float GQABGEl2xCDJ [(358 - 318)];
    int cKrHBf1u;
    float SGw1sQK9HBJ7 [(312 - 272)];
    struct   ren af90V15XE [(352 - 312)];
    int cVBDG5Lg;
    void  JLvSFfsDnd5 (float *uHb3Uoj, int hwzTi325tR8);
    int hwzTi325tR8;
    scanf ("%d", &hwzTi325tR8);
    cVBDG5Lg = (77 - 77);
    cKrHBf1u = (47 - 47);
    {
        int ySNW8dQfwbs;
        ySNW8dQfwbs = (703 - 703);
        for (; hwzTi325tR8 > ySNW8dQfwbs;) {
            scanf ("%s", af90V15XE[ySNW8dQfwbs].uHb3Uoj);
            scanf ("%f", &af90V15XE[ySNW8dQfwbs].AhmORf);
            if (!((203 - 203) != strcmp (af90V15XE[ySNW8dQfwbs].uHb3Uoj, "male"))) {
                GQABGEl2xCDJ[cKrHBf1u] = af90V15XE[ySNW8dQfwbs].AhmORf;
                cKrHBf1u = cKrHBf1u + (876 - 875);
            }
            else {
                SGw1sQK9HBJ7[cVBDG5Lg] = af90V15XE[ySNW8dQfwbs].AhmORf;
                cVBDG5Lg = cVBDG5Lg + (752 - 751);
            }
            ySNW8dQfwbs = ySNW8dQfwbs + (393 - 392);
        }
    }
    JLvSFfsDnd5 (SGw1sQK9HBJ7, cVBDG5Lg);
    JLvSFfsDnd5 (GQABGEl2xCDJ, cKrHBf1u);
    {
        int ySNW8dQfwbs;
        ySNW8dQfwbs = (293 - 293);
        for (; cKrHBf1u > ySNW8dQfwbs;) {
            printf ("%.2f", GQABGEl2xCDJ[ySNW8dQfwbs]);
            ySNW8dQfwbs = ySNW8dQfwbs + (142 - 141);
        }
    }
    {
        int ySNW8dQfwbs;
        ySNW8dQfwbs = cVBDG5Lg - (90 - 89);
        for (; ySNW8dQfwbs >= (558 - 558);) {
            printf ("%.2f", SGw1sQK9HBJ7[ySNW8dQfwbs]);
            if (ySNW8dQfwbs != (951 - 951))
                ;
            ySNW8dQfwbs = (1601 - 613) - (1649 - 662);
        }
    }
}


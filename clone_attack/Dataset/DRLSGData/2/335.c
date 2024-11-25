struct   book {
    int sNWfIC09PHl;
    char peo [(741 - 715)];
}
uQfxASX8M0 [999];

int main () {
    int hm97kWJqr;
    int m2b3ONJ;
    int OClOeg7;
    int Agkq7wFWLm;
    int XP2mQ8FRg;
    int JPuMtiO4R6z [26] = {(586 - 586)};
    char B0gY6L1C;
    int amC1rlNWgT;
    int fkhSvz5;
    hm97kWJqr = (50 - 50);
    scanf ("%d", &amC1rlNWgT);
    for (XP2mQ8FRg = (127 - 127); XP2mQ8FRg < amC1rlNWgT; XP2mQ8FRg = XP2mQ8FRg +(1000 - 999)) {
        scanf ("%d%s", &uQfxASX8M0[XP2mQ8FRg].sNWfIC09PHl, &uQfxASX8M0[XP2mQ8FRg].peo);
    }
    {
        XP2mQ8FRg = 0;
        for (; amC1rlNWgT > XP2mQ8FRg;) {
            fkhSvz5 = strlen (uQfxASX8M0[XP2mQ8FRg].peo);
            {
                OClOeg7 = 0;
                for (; fkhSvz5 > OClOeg7;) {
                    JPuMtiO4R6z[(int) (uQfxASX8M0[XP2mQ8FRg].peo[OClOeg7] - 'A')]++;
                    OClOeg7 = OClOeg7 +(791 - 790);
                }
            }
            XP2mQ8FRg = XP2mQ8FRg +1;
        }
    }
    Agkq7wFWLm = 0;
    for (XP2mQ8FRg = 0; XP2mQ8FRg < 26; XP2mQ8FRg++) {
        if (JPuMtiO4R6z[XP2mQ8FRg] > hm97kWJqr) {
            hm97kWJqr = JPuMtiO4R6z[XP2mQ8FRg];
            m2b3ONJ = XP2mQ8FRg;
            B0gY6L1C = XP2mQ8FRg +'A';
        }
    }
    printf ("%c\n%d\n", B0gY6L1C, JPuMtiO4R6z[m2b3ONJ]);
    {
        XP2mQ8FRg = 0;
        for (; XP2mQ8FRg < amC1rlNWgT;) {
            fkhSvz5 = strlen (uQfxASX8M0[XP2mQ8FRg].peo);
            for (OClOeg7 = 0; OClOeg7 < fkhSvz5; OClOeg7 = OClOeg7 +1) {
                if (uQfxASX8M0[XP2mQ8FRg].peo[OClOeg7] == B0gY6L1C) {
                    printf ("%d\n", uQfxASX8M0[XP2mQ8FRg].sNWfIC09PHl);
                }
            }
            XP2mQ8FRg = XP2mQ8FRg +1;
        }
    }
    return 0;
}


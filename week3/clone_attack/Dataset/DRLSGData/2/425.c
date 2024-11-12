void  main () {
    int kQHNcFsX63;
    int JwPiG3;
    struct   {
        int Dg6kZ9;
        char BOWpTmUEPh9 [(298 - 271)];
    }
    cCEe1KZG53z [(1434 - 435)];
    int hSw6i3mf;
    int ruj5oUgw;
    int LSD5CWitzI;
    int vYp7L0hF;
    int jGOgPENv;
    int LuRfOspS [(717 - 691)] = {(973 - 973)};
    int STfw4Sm [(782 - 756)] [(1348 - 349)];
    scanf ("%d", &ruj5oUgw);
    {
        kQHNcFsX63 = (437 - 437);
        for (; kQHNcFsX63 < ruj5oUgw;) {
            scanf ("%d ", &cCEe1KZG53z[kQHNcFsX63].Dg6kZ9);
            gets (cCEe1KZG53z[kQHNcFsX63].BOWpTmUEPh9);
            {
                JwPiG3 = (750 - 750);
                for (; cCEe1KZG53z[kQHNcFsX63].BOWpTmUEPh9[JwPiG3] != '\0';) {
                    hSw6i3mf = cCEe1KZG53z[kQHNcFsX63].BOWpTmUEPh9[JwPiG3] - (505 - 440);
                    JwPiG3 = JwPiG3 +(476 - 475);
                    STfw4Sm[hSw6i3mf][LuRfOspS[hSw6i3mf]] = cCEe1KZG53z[kQHNcFsX63].Dg6kZ9;
                    LuRfOspS[hSw6i3mf] = LuRfOspS[hSw6i3mf] + (483 - 482);
                }
            }
            kQHNcFsX63 = kQHNcFsX63 + (731 - 730);
        }
    }
    LSD5CWitzI = (815 - 815);
    for (kQHNcFsX63 = 0; kQHNcFsX63 < 26; kQHNcFsX63 = kQHNcFsX63 + (765 - 764)) {
        if (LuRfOspS[kQHNcFsX63] > LSD5CWitzI) {
            LSD5CWitzI = LuRfOspS[kQHNcFsX63];
            vYp7L0hF = kQHNcFsX63;
        }
    }
    printf ("%c\n%d\n", vYp7L0hF + (421 - 356), LSD5CWitzI);
    {
        kQHNcFsX63 = 0;
        for (; LuRfOspS[vYp7L0hF] - (455 - 454) > kQHNcFsX63;) {
            printf ("%d\n", STfw4Sm[vYp7L0hF][kQHNcFsX63]);
            kQHNcFsX63 = kQHNcFsX63 + (217 - 216);
        }
    }
    printf ("%d", STfw4Sm[vYp7L0hF][LuRfOspS[vYp7L0hF] - 1]);
}


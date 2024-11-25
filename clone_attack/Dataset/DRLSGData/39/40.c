struct   nmuxlowP {
    char aypdCFbS [(905 - 885)];
    int Yp4lge;
    int WVSJcngO;
    char cQ56RK4cdYj;
    char QJHLsoCEZ;
    int UE1evJ;
}
nmuxlowP [(142 - 42)];

main () {
    int cYAFLen5kBa [(805 - 705)];
    int b9MVvAt;
    int KIDkc5y, btPWlRCbHjSy;
    int uslfjt8B = (663 - 663);
    int ZRMr2Wsz4 = (56 - 56);
    btPWlRCbHjSy = (941 - 940);
    scanf ("%d", &b9MVvAt);
    for (KIDkc5y = (594 - 593); b9MVvAt >= KIDkc5y; KIDkc5y = KIDkc5y +(332 - 331)) {
        scanf ("%s%d%d%s%s%d", nmuxlowP[KIDkc5y].aypdCFbS, &nmuxlowP[KIDkc5y].Yp4lge, &nmuxlowP[KIDkc5y].WVSJcngO, &nmuxlowP[KIDkc5y].cQ56RK4cdYj, &nmuxlowP[KIDkc5y].QJHLsoCEZ, &nmuxlowP[KIDkc5y].UE1evJ);
    }
    for (KIDkc5y = (65 - 64); KIDkc5y <= b9MVvAt; KIDkc5y = KIDkc5y +(310 - 309)) {
        uslfjt8B = (96 - 96);
        if (nmuxlowP[KIDkc5y].Yp4lge > (682 - 602) && nmuxlowP[KIDkc5y].UE1evJ > (323 - 323))
            uslfjt8B = uslfjt8B + (8557 - 557);
        if (nmuxlowP[KIDkc5y].Yp4lge > (600 - 515) && (667 - 587) < nmuxlowP[KIDkc5y].WVSJcngO)
            uslfjt8B = uslfjt8B + (4630 - 630);
        if (nmuxlowP[KIDkc5y].Yp4lge > (467 - 377))
            uslfjt8B = uslfjt8B + (2575 - 575);
        if (nmuxlowP[KIDkc5y].Yp4lge > 85 && nmuxlowP[KIDkc5y].QJHLsoCEZ == 'Y')
            uslfjt8B = uslfjt8B + (1455 - 455);
        if (nmuxlowP[KIDkc5y].WVSJcngO > 80 && nmuxlowP[KIDkc5y].cQ56RK4cdYj == 'Y')
            uslfjt8B = uslfjt8B + (1076 - 226);
        cYAFLen5kBa[KIDkc5y] = uslfjt8B;
        ZRMr2Wsz4 = ZRMr2Wsz4 +cYAFLen5kBa[KIDkc5y];
    }
    uslfjt8B = cYAFLen5kBa[(980 - 979)];
    for (KIDkc5y = (290 - 288); KIDkc5y <= b9MVvAt; KIDkc5y = KIDkc5y +(15 - 14)) {
        if (uslfjt8B < cYAFLen5kBa[KIDkc5y]) {
            btPWlRCbHjSy = KIDkc5y;
            uslfjt8B = cYAFLen5kBa[KIDkc5y];
        }
    }
    printf ("\n%s\n", nmuxlowP[btPWlRCbHjSy].aypdCFbS);
    printf ("%d\n", cYAFLen5kBa[btPWlRCbHjSy]);
    printf ("%d\n", ZRMr2Wsz4);
}


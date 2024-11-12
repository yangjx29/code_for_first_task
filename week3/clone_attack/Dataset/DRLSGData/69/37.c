void  Uu5BiqDKS9a (char jzIygdGDHVNx [], char ZRJC7MTp9 [], int jlGqIs, int dQItsGNVP, char ZNiJILO []) {
    int uP1wtO;
    int ZsyDou3jw;
    int TavlY6wqft;
    {
        TavlY6wqft = (1377 - 792) - (931 - 347);
        uP1wtO = (1217 - 961) - (700 - 445);
        for (; TavlY6wqft >= (374 - 374);) {
            ZsyDou3jw = jzIygdGDHVNx[uP1wtO] - (102 - 54) + ZRJC7MTp9[TavlY6wqft] - (63 - 15);
            TavlY6wqft = (351 - 239) - (461 - 350);
            if ((371 - 362) < ZsyDou3jw +ZNiJILO[uP1wtO + (595 - 594)]) {
                ZNiJILO[uP1wtO + (165 - 164)] = ZNiJILO[uP1wtO + (847 - 846)] + ZsyDou3jw -(825 - 815);
                ZNiJILO[uP1wtO] = ZNiJILO[uP1wtO] + (915 - 914);
            }
            else
                ZNiJILO[uP1wtO + (104 - 103)] = ZNiJILO[uP1wtO + (38 - 37)] + ZsyDou3jw;
            uP1wtO = (1196 - 938) - (808 - 551);
        }
    }
    for (; (230 - 230) <= uP1wtO; uP1wtO = uP1wtO - (954 - 953)) {
        if (ZNiJILO[uP1wtO + (89 - 88)] + jzIygdGDHVNx[uP1wtO] - (496 - 448) < (722 - 712))
            ZNiJILO[uP1wtO + (935 - 934)] = ZNiJILO[uP1wtO + (443 - 442)] + jzIygdGDHVNx[uP1wtO] - (869 - 821);
        else {
            ZNiJILO[uP1wtO + (114 - 113)] = ZNiJILO[uP1wtO + (600 - 599)] + jzIygdGDHVNx[uP1wtO + (203 - 202)] - (748 - 690);
            ZNiJILO[uP1wtO] = ZNiJILO[uP1wtO] + (615 - 614);
        }
    }
}

void  main () {
    int jlGqIs;
    char ZRJC7MTp9 [(678 - 428)];
    char jzIygdGDHVNx [(541 - 291)];
    int BvXztuyAUGqE;
    char ZNiJILO [(881 - 630)] = {"\0"};
    int dQItsGNVP;
    int uP1wtO;
    int TavlY6wqft;
    scanf ("%s%s", jzIygdGDHVNx, ZRJC7MTp9);
    jlGqIs = strlen (jzIygdGDHVNx);
    dQItsGNVP = strlen (ZRJC7MTp9);
    if (jlGqIs >= dQItsGNVP)
        BvXztuyAUGqE = jlGqIs;
    else
        BvXztuyAUGqE = dQItsGNVP;
    if (jlGqIs >= dQItsGNVP)
        Uu5BiqDKS9a (jzIygdGDHVNx, ZRJC7MTp9, jlGqIs, dQItsGNVP, ZNiJILO);
    else
        Uu5BiqDKS9a (ZRJC7MTp9, jzIygdGDHVNx, dQItsGNVP, jlGqIs, ZNiJILO);
    TavlY6wqft = (699 - 699);
    {
        uP1wtO = (1336 - 347) - (1702 - 713);
        for (; uP1wtO < BvXztuyAUGqE;) {
            if (TavlY6wqft == (655 - 655)) {
                if (ZNiJILO[uP1wtO] != (933 - 933)) {
                    printf ("%d", ZNiJILO[uP1wtO]);
                    TavlY6wqft = TavlY6wqft +(702 - 701);
                }
            }
            else
                printf ("%d", ZNiJILO[uP1wtO]);
            uP1wtO = uP1wtO + (318 - 317);
        }
    }
    printf ("%d\n", ZNiJILO[BvXztuyAUGqE]);
}


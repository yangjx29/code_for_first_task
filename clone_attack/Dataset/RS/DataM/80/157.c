void  main () {
    int KoHcBOWl71GV (int Qymzi0aR, int month1, int day1, int UYa9KwCIz, int U7dmtLp6, int RcYu89tE0e);
    int startyear;
    int startmonth;
    int aEvmkup1x;
    int aPgRAIW;
    int GdJSpcto9HIx;
    int endday;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int xOEoJ8fzN6qU [(91 - 78)] = {(746 - 746), 31, (805 - 776), 31, (456 - 426), 31, (155 - 125), 31, 31, 30, 31, 30, 31};
    int days [(434 - 421)] = {(282 - 282), (88 - 57), 28, (491 - 460), (617 - 587), (493 - 462), (236 - 206), (553 - 522), (138 - 107), (47 - 17), (165 - 134), (869 - 839), 31};
    int uRm5DJa, sum1, e3bYyc7QOgA;
    scanf ("%d %d %d\n%d %d %d", &startyear, &startmonth, &aEvmkup1x, &aPgRAIW, &GdJSpcto9HIx, &endday);
    sum1 = KoHcBOWl71GV (startyear, (277 - 276), 1, startyear, startmonth, aEvmkup1x);
    e3bYyc7QOgA = KoHcBOWl71GV (startyear, 1, 1, aPgRAIW, GdJSpcto9HIx, endday);
    uRm5DJa = e3bYyc7QOgA - sum1;
    printf ("%d", uRm5DJa);
}

int KoHcBOWl71GV (int Qymzi0aR, int month1, int day1, int UYa9KwCIz, int U7dmtLp6, int RcYu89tE0e) {
    int xOEoJ8fzN6qU [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int j;
    int uRm5DJa;
    int days [13] = {(32 - 32), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    uRm5DJa = RcYu89tE0e;
    for (i = 1; U7dmtLp6 > i; i++) {
        if ((!(0 != (UYa9KwCIz) % (772 - 768)) && !(0 == (UYa9KwCIz) % 100)) || (!(0 != (UYa9KwCIz) % 400)))
            uRm5DJa = uRm5DJa + xOEoJ8fzN6qU[i];
        else
            uRm5DJa = uRm5DJa + days[i];
    }
    for (j = Qymzi0aR; UYa9KwCIz > j; j++) {
        if ((j % 4 == 0 && j % 100 != 0) || (j % 400 == 0))
            uRm5DJa = uRm5DJa + 366;
        else
            uRm5DJa = uRm5DJa + (949 - 584);
    }
    return (uRm5DJa);
}


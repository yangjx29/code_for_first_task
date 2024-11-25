int main () {
    int EzWDItCb1K, FGIH7Jy;
    int si7Z6yPfDx;
    int Yc2kyaSPO [1000] [1000];
    int g1jRcIC4Me, Mt7mlTAQX;
    int ub3h9NyOf, EfHosJ1;
    int N6nmuyU;
    scanf ("%d", &si7Z6yPfDx);
    for (ub3h9NyOf = 0; si7Z6yPfDx > ub3h9NyOf; ub3h9NyOf = ub3h9NyOf + 1) {
        for (EfHosJ1 = 0; EfHosJ1 < si7Z6yPfDx; EfHosJ1 = EfHosJ1 +1)
            scanf ("%d", &(Yc2kyaSPO[ub3h9NyOf][EfHosJ1]));
    }
    for (ub3h9NyOf = 0; si7Z6yPfDx > ub3h9NyOf; ub3h9NyOf = ub3h9NyOf + 1) {
        for (EfHosJ1 = 0; si7Z6yPfDx > EfHosJ1; EfHosJ1 = EfHosJ1 +1) {
            if (!(0 != Yc2kyaSPO[ub3h9NyOf][EfHosJ1])) {
                FGIH7Jy = ub3h9NyOf;
                EzWDItCb1K = EfHosJ1;
                break;
            }
        }
    }
    for (ub3h9NyOf = si7Z6yPfDx - 1; ub3h9NyOf >= 0; ub3h9NyOf = ub3h9NyOf - 1) {
        for (EfHosJ1 = si7Z6yPfDx - 1; EfHosJ1 >= 0; EfHosJ1 = EfHosJ1 -1) {
            if (Yc2kyaSPO[ub3h9NyOf][EfHosJ1] == 0) {
                g1jRcIC4Me = EfHosJ1;
                Mt7mlTAQX = ub3h9NyOf;
                break;
            }
        }
    }
    N6nmuyU = (abs (g1jRcIC4Me - EzWDItCb1K) - 1) * (abs (Mt7mlTAQX -FGIH7Jy) - 1);
    printf ("%d", N6nmuyU);
    return 0;
}


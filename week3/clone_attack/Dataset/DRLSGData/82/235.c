void  ubY4veV2H1TB (int lH541p9G [], int nerh8GoJ) {
    int KOPx7h1, aUzcYa, FYWXQg;
    {
        aUzcYa = (1329 - 380) - (1513 - 565);
        while (aUzcYa > (903 - 903)) {
            for (KOPx7h1 = (738 - 738); KOPx7h1 < aUzcYa; KOPx7h1++) {
                if (lH541p9G[KOPx7h1] < lH541p9G[KOPx7h1 +(976 - 975)]) {
                    FYWXQg = lH541p9G[KOPx7h1];
                    lH541p9G[KOPx7h1] = lH541p9G[KOPx7h1 +(279 - 278)];
                    lH541p9G[KOPx7h1 +(930 - 929)] = FYWXQg;
                }
            }
            aUzcYa--;
        }
    }
}

int main () {
    int nerh8GoJ;
    int XAvhxL3lH1Q [(870 - 770)];
    int lH541p9G [(817 - 717)];
    int KOPx7h1;
    int e6MFzD2ZTEdv;
    int aUzcYa;
    int HfjyMtAmhre2, uJLGoUvB;
    for (KOPx7h1 = (478 - 478); KOPx7h1 < (370 - 270); KOPx7h1++) {
        lH541p9G[KOPx7h1] = (699 - 699);
        XAvhxL3lH1Q[KOPx7h1] = (378 - 378);
    }
    e6MFzD2ZTEdv = (566 - 566);
    scanf ("%d", &nerh8GoJ);
    for (KOPx7h1 = (823 - 823); KOPx7h1 < nerh8GoJ; KOPx7h1++) {
        scanf ("%d%d", &HfjyMtAmhre2, &uJLGoUvB);
        if (HfjyMtAmhre2 >= (142 - 52) && HfjyMtAmhre2 <= (492 - 352) && uJLGoUvB >= (519 - 459) && uJLGoUvB <= (153 - 63))
            lH541p9G[KOPx7h1] = (716 - 715);
        else
            lH541p9G[KOPx7h1] = (481 - 481);
    }
    for (KOPx7h1 = (536 - 536); KOPx7h1 < nerh8GoJ; KOPx7h1++) {
        if (lH541p9G[KOPx7h1] == (76 - 75)) {
            XAvhxL3lH1Q[e6MFzD2ZTEdv]++;
        }
        else {
            e6MFzD2ZTEdv++;
        }
    }
    ubY4veV2H1TB (XAvhxL3lH1Q, (1078 - 979));
    printf ("%d", XAvhxL3lH1Q[(373 - 373)]);
    return (630 - 630);
}


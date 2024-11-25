int main () {
    struct   stu {
        int RpaGqe;
        int cWiZE9H;
        int fQOWxzGFuP;
    }
    BnV48T0yh [100000];
    int xs3meg, tuhi8TxJKX, xixvInFEsYRW [100000], cLv3Rr8w = (374 - 374), WUwker = (956 - 956), SXE1TKHejisr = (989 - 989), rKWZ2NX = (851 - 851), sRfTiBQw = 0, kIWPg9Lt = 0;
    scanf ("%d", &xs3meg);
    for (tuhi8TxJKX = 0; xs3meg > tuhi8TxJKX; tuhi8TxJKX++) {
        scanf ("%d%d%d", &BnV48T0yh[tuhi8TxJKX].RpaGqe, &BnV48T0yh[tuhi8TxJKX].cWiZE9H, &BnV48T0yh[tuhi8TxJKX].fQOWxzGFuP), xixvInFEsYRW[tuhi8TxJKX] = BnV48T0yh[tuhi8TxJKX].cWiZE9H + BnV48T0yh[tuhi8TxJKX].fQOWxzGFuP;
        if (cLv3Rr8w < xixvInFEsYRW[tuhi8TxJKX]) {
            kIWPg9Lt = rKWZ2NX;
            rKWZ2NX = WUwker;
            sRfTiBQw = SXE1TKHejisr;
            SXE1TKHejisr = cLv3Rr8w;
            cLv3Rr8w = xixvInFEsYRW[tuhi8TxJKX];
            WUwker = tuhi8TxJKX;
            continue;
        }
        if (cLv3Rr8w >= xixvInFEsYRW[tuhi8TxJKX] && xixvInFEsYRW[tuhi8TxJKX] > SXE1TKHejisr) {
            sRfTiBQw = SXE1TKHejisr;
            SXE1TKHejisr = xixvInFEsYRW[tuhi8TxJKX];
            kIWPg9Lt = rKWZ2NX;
            rKWZ2NX = tuhi8TxJKX;
            continue;
        }
        if (xixvInFEsYRW[tuhi8TxJKX] <= SXE1TKHejisr &&xixvInFEsYRW[tuhi8TxJKX] > sRfTiBQw) {
            sRfTiBQw = xixvInFEsYRW[tuhi8TxJKX];
            kIWPg9Lt = tuhi8TxJKX;
            continue;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", BnV48T0yh[WUwker].RpaGqe, cLv3Rr8w, BnV48T0yh[rKWZ2NX].RpaGqe, SXE1TKHejisr, BnV48T0yh[kIWPg9Lt].RpaGqe, sRfTiBQw);
    return 0;
}


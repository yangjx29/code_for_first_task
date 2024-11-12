int h6BKmsijwdzJ, LMifSHQ, ZKWctz, KaLn2krNYygE;
int TcF09DZoE [100] [100];

int gIpzkoWxQ (int atKOHzi3x) {
    int RRrHykL, fxwZlTI;
    for (LMifSHQ = 0; atKOHzi3x > LMifSHQ; LMifSHQ++) {
        RRrHykL = TcF09DZoE[LMifSHQ][0];
        for (ZKWctz = 1; ZKWctz < atKOHzi3x; ZKWctz++)
            RRrHykL = (TcF09DZoE[LMifSHQ][ZKWctz] < RRrHykL) ? TcF09DZoE[LMifSHQ][ZKWctz] : RRrHykL;
        {
            ZKWctz = 0;
            while (ZKWctz < atKOHzi3x) {
                TcF09DZoE[LMifSHQ][ZKWctz] -= RRrHykL;
                ZKWctz++;
            }
        }
    }
    for (LMifSHQ = 0; atKOHzi3x > LMifSHQ; LMifSHQ++) {
        RRrHykL = TcF09DZoE[0][LMifSHQ];
        for (ZKWctz = 1; atKOHzi3x > ZKWctz; ZKWctz++)
            RRrHykL = (TcF09DZoE[ZKWctz][LMifSHQ] < RRrHykL) ? TcF09DZoE[ZKWctz][LMifSHQ] : RRrHykL;
        for (ZKWctz = 0; atKOHzi3x > ZKWctz; ZKWctz++)
            TcF09DZoE[ZKWctz][LMifSHQ] -= RRrHykL;
    }
    if (!(2 != atKOHzi3x))
        return TcF09DZoE[1][1];
    fxwZlTI = TcF09DZoE[1][1];
    {
        h6BKmsijwdzJ = 1;
        while (atKOHzi3x - 1 > h6BKmsijwdzJ) {
            TcF09DZoE[0][h6BKmsijwdzJ] = TcF09DZoE[0][h6BKmsijwdzJ + 1];
            TcF09DZoE[h6BKmsijwdzJ][0] = TcF09DZoE[h6BKmsijwdzJ + 1][0];
            for (LMifSHQ = 1; atKOHzi3x - 1 > LMifSHQ; LMifSHQ++)
                TcF09DZoE[h6BKmsijwdzJ][LMifSHQ] = TcF09DZoE[h6BKmsijwdzJ + 1][LMifSHQ +1];
            h6BKmsijwdzJ++;
        }
    }
    atKOHzi3x -= 1;
    return (fxwZlTI + gIpzkoWxQ (atKOHzi3x));
}

int main () {
    int atKOHzi3x, u8wS6PIGajg [100];
    cin >> atKOHzi3x;
    {
        KaLn2krNYygE = 0;
        while (atKOHzi3x > KaLn2krNYygE) {
            for (LMifSHQ = 0; atKOHzi3x > LMifSHQ; LMifSHQ++) {
                ZKWctz = 0;
                while (ZKWctz < atKOHzi3x) {
                    cin >> TcF09DZoE[LMifSHQ][ZKWctz];
                    ZKWctz++;
                }
            }
            u8wS6PIGajg[KaLn2krNYygE] = gIpzkoWxQ (atKOHzi3x);
            KaLn2krNYygE++;
        }
    }
    {
        KaLn2krNYygE = 0;
        while (KaLn2krNYygE < atKOHzi3x) {
            cout << u8wS6PIGajg[KaLn2krNYygE] << endl;
            KaLn2krNYygE++;
        }
    }
    return 0;
}


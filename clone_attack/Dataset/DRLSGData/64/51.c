int main () {
    int fi6h5VWDXQK;
    int vzOu2F;
    int TnL9mB01MwHb;
    struct   point {
        int mGMRsU1;
        int y;
        int KJtw29;
    }
    Czm4E7 [10];
    struct   distant {
        float d;
        struct   point p1;
        struct   point p2;
    }
    xnkcjvDBWL [45];
    struct   distant {
        float d;
        struct   point p1;
        struct   point p2;
    }
    temp;
    int sZG4n7;
    scanf ("%d", &vzOu2F);
    {
        fi6h5VWDXQK = 0;
        for (; fi6h5VWDXQK < vzOu2F;) {
            scanf ("%d%d%d", &Czm4E7[fi6h5VWDXQK].mGMRsU1, &Czm4E7[fi6h5VWDXQK].y, &Czm4E7[fi6h5VWDXQK].KJtw29);
            fi6h5VWDXQK = fi6h5VWDXQK + 1;
        }
    }
    fi6h5VWDXQK = 0;
    {
        sZG4n7 = 0;
        while (sZG4n7 < vzOu2F - 1) {
            {
                TnL9mB01MwHb = sZG4n7 + 1;
                for (; TnL9mB01MwHb < vzOu2F;) {
                    xnkcjvDBWL[fi6h5VWDXQK].p1 = Czm4E7[sZG4n7];
                    xnkcjvDBWL[fi6h5VWDXQK].p2 = Czm4E7[TnL9mB01MwHb];
                    TnL9mB01MwHb = TnL9mB01MwHb +1;
                    fi6h5VWDXQK = fi6h5VWDXQK + 1;
                }
            }
            sZG4n7 = sZG4n7 + 1;
        }
    }
    {
        fi6h5VWDXQK = 0;
        for (; fi6h5VWDXQK < vzOu2F * (vzOu2F - 1) / 2;) {
            xnkcjvDBWL[fi6h5VWDXQK].d = sqrt ((xnkcjvDBWL[fi6h5VWDXQK].p1.mGMRsU1 - xnkcjvDBWL[fi6h5VWDXQK].p2.mGMRsU1) * (xnkcjvDBWL[fi6h5VWDXQK].p1.mGMRsU1 - xnkcjvDBWL[fi6h5VWDXQK].p2.mGMRsU1) + (xnkcjvDBWL[fi6h5VWDXQK].p1.y - xnkcjvDBWL[fi6h5VWDXQK].p2.y) * (xnkcjvDBWL[fi6h5VWDXQK].p1.y - xnkcjvDBWL[fi6h5VWDXQK].p2.y) + (xnkcjvDBWL[fi6h5VWDXQK].p1.KJtw29 - xnkcjvDBWL[fi6h5VWDXQK].p2.KJtw29) * (xnkcjvDBWL[fi6h5VWDXQK].p1.KJtw29 - xnkcjvDBWL[fi6h5VWDXQK].p2.KJtw29));
            fi6h5VWDXQK = fi6h5VWDXQK + 1;
        }
    }
    {
        fi6h5VWDXQK = 1;
        for (; vzOu2F * (vzOu2F - 1) / 2 > fi6h5VWDXQK;) {
            sZG4n7 = 0;
            for (; sZG4n7 < vzOu2F * (vzOu2F - 1) / 2 - fi6h5VWDXQK;) {
                if (xnkcjvDBWL[sZG4n7].d < xnkcjvDBWL[sZG4n7 + 1].d) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    temp = xnkcjvDBWL[sZG4n7];
                    xnkcjvDBWL[sZG4n7] = xnkcjvDBWL[sZG4n7 + 1];
                    xnkcjvDBWL[sZG4n7 + 1] = temp;
                }
                sZG4n7 = sZG4n7 + 1;
            }
            fi6h5VWDXQK = fi6h5VWDXQK + 1;
        }
    }
    {
        fi6h5VWDXQK = 0;
        for (; vzOu2F * (vzOu2F - 1) / 2 > fi6h5VWDXQK;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", xnkcjvDBWL[fi6h5VWDXQK].p1.mGMRsU1, xnkcjvDBWL[fi6h5VWDXQK].p1.y, xnkcjvDBWL[fi6h5VWDXQK].p1.KJtw29, xnkcjvDBWL[fi6h5VWDXQK].p2.mGMRsU1, xnkcjvDBWL[fi6h5VWDXQK].p2.y, xnkcjvDBWL[fi6h5VWDXQK].p2.KJtw29, xnkcjvDBWL[fi6h5VWDXQK].d);
            fi6h5VWDXQK = fi6h5VWDXQK + 1;
        }
    }
    return 0;
}


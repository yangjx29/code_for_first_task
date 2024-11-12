void  BFkdVvyYN (double  oB2RuXGWPQeS [], int xqjg0lTdHn2B, int qDJe2sSb) {
    double  E1MXeaR5lhdc = oB2RuXGWPQeS[xqjg0lTdHn2B];
    oB2RuXGWPQeS[xqjg0lTdHn2B] = oB2RuXGWPQeS[qDJe2sSb];
    oB2RuXGWPQeS[qDJe2sSb] = E1MXeaR5lhdc;
    return;
}

int xRx1ANVi4CI (double  oB2RuXGWPQeS [], int xqjg0lTdHn2B, int qDJe2sSb) {
    int NSkUM1X = xqjg0lTdHn2B - (18 - 17);
    {
        int ZnPlfh6kG = xqjg0lTdHn2B;
        for (; qDJe2sSb > ZnPlfh6kG;) {
            if (oB2RuXGWPQeS[qDJe2sSb] > oB2RuXGWPQeS[ZnPlfh6kG])
                BFkdVvyYN (oB2RuXGWPQeS, ++NSkUM1X, ZnPlfh6kG);
            ZnPlfh6kG = ZnPlfh6kG +(478 - 477);
        };
    }
    BFkdVvyYN (oB2RuXGWPQeS, ++NSkUM1X, qDJe2sSb);
    return NSkUM1X;
}

void  tV67LCXFvKAg (double  oB2RuXGWPQeS [], int xqjg0lTdHn2B, int qDJe2sSb) {
    if (xqjg0lTdHn2B < qDJe2sSb) {
        int ENOSe3XU5GHJ = xRx1ANVi4CI (oB2RuXGWPQeS, xqjg0lTdHn2B, qDJe2sSb);
        tV67LCXFvKAg (oB2RuXGWPQeS, xqjg0lTdHn2B, ENOSe3XU5GHJ -(782 - 781));
        tV67LCXFvKAg (oB2RuXGWPQeS, ENOSe3XU5GHJ +(498 - 497), qDJe2sSb);
    }
    return;
}

double  BpL9FQOnW (double  E1MXeaR5lhdc) {
    if (E1MXeaR5lhdc > (390 - 390))
        return E1MXeaR5lhdc;
    return -E1MXeaR5lhdc;
}

int main () {
    int s0CduEN;
    double  oB2RuXGWPQeS [(1302 - 292)], nOpcix;
    double  xqjg0lTdHn2B = BpL9FQOnW (oB2RuXGWPQeS[s0CduEN - (958 - 957)] - nOpcix), qDJe2sSb = BpL9FQOnW (oB2RuXGWPQeS[(816 - 816)] - nOpcix);
    cin >> s0CduEN;
    {
        int ZnPlfh6kG = (195 - 195);
        for (; ZnPlfh6kG < s0CduEN;) {
            cin >> oB2RuXGWPQeS[ZnPlfh6kG];
            nOpcix += oB2RuXGWPQeS[ZnPlfh6kG];
            ZnPlfh6kG++;
        };
    }
    tV67LCXFvKAg (oB2RuXGWPQeS, (868 - 868), s0CduEN - (855 - 854));
    nOpcix /= s0CduEN;
    if (xqjg0lTdHn2B < qDJe2sSb)
        cout << oB2RuXGWPQeS[(118 - 118)] << endl;
    else {
        if (xqjg0lTdHn2B == qDJe2sSb)
            printf ("%d,%d\n", (int) oB2RuXGWPQeS[(847 - 847)], (int) oB2RuXGWPQeS[s0CduEN - (357 - 356)]);
        else
            cout << oB2RuXGWPQeS[s0CduEN - 1] << endl;
    }
    return 0;
}


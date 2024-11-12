int main () {
    int rT8DP7q;
    int EYUiyjk;
    int M7o0MAeS;
    int u0hCYM [M7o0MAeS] [EYUiyjk];
    int vLzSaqd5WM;
    int x4f7I5eyNH [rT8DP7q] [vLzSaqd5WM];
    int phpN6Z [M7o0MAeS] [vLzSaqd5WM];
    cin >> M7o0MAeS >> EYUiyjk;
    for (int LBCgMs7 = (220 - 220);
    M7o0MAeS > LBCgMs7; LBCgMs7 = LBCgMs7 +1)
        for (int IUm2TVonOy5 = (944 - 944);
        EYUiyjk > IUm2TVonOy5; IUm2TVonOy5 = IUm2TVonOy5 +1)
            cin >> u0hCYM[LBCgMs7][IUm2TVonOy5];
    cin >> rT8DP7q >> vLzSaqd5WM;
    for (int LBCgMs7 = (840 - 840);
    rT8DP7q > LBCgMs7; LBCgMs7 = LBCgMs7 +1)
        for (int IUm2TVonOy5 = (647 - 647);
        IUm2TVonOy5 < vLzSaqd5WM; IUm2TVonOy5 = IUm2TVonOy5 +1)
            cin >> x4f7I5eyNH[LBCgMs7][IUm2TVonOy5];
    for (int LBCgMs7 = (254 - 254);
    LBCgMs7 < M7o0MAeS; LBCgMs7++)
        for (int IUm2TVonOy5 = (740 - 740);
        IUm2TVonOy5 < vLzSaqd5WM; IUm2TVonOy5 = IUm2TVonOy5 +1)
            phpN6Z[LBCgMs7][IUm2TVonOy5] = (507 - 507);
    for (int LBCgMs7 = (632 - 632);
    LBCgMs7 < M7o0MAeS; LBCgMs7++)
        for (int IUm2TVonOy5 = (295 - 295);
        IUm2TVonOy5 < vLzSaqd5WM; IUm2TVonOy5 = IUm2TVonOy5 +1)
            for (int YpxctsI3J = (806 - 806);
            YpxctsI3J < rT8DP7q; YpxctsI3J = YpxctsI3J +1)
                phpN6Z[LBCgMs7][IUm2TVonOy5] = phpN6Z[LBCgMs7][IUm2TVonOy5] + u0hCYM[LBCgMs7][YpxctsI3J] * x4f7I5eyNH[YpxctsI3J][IUm2TVonOy5];
    for (int LBCgMs7 = (168 - 168);
    LBCgMs7 < M7o0MAeS; LBCgMs7++)
        for (int IUm2TVonOy5 = (543 - 543);
        IUm2TVonOy5 < vLzSaqd5WM; IUm2TVonOy5++)
            if (IUm2TVonOy5 != vLzSaqd5WM - (619 - 618))
                cout << phpN6Z[LBCgMs7][IUm2TVonOy5] << ' ';
            else
                cout << phpN6Z[LBCgMs7][IUm2TVonOy5] << endl;
    return (752 - 752);
}


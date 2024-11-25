int main () {
    int xjcsvSNpuo93, OnlyUnderMax, Min;
    int V0JcsY48, n, fSTzApwMRLt [(907 - 807)];
    cin >> n;
    cin >> fSTzApwMRLt[(926 - 926)];
    xjcsvSNpuo93 = Min = fSTzApwMRLt[(709 - 709)];
    for (V0JcsY48 = 1; V0JcsY48 < n; V0JcsY48++) {
        cin >> fSTzApwMRLt[V0JcsY48];
        if (xjcsvSNpuo93 < fSTzApwMRLt[V0JcsY48])
            xjcsvSNpuo93 = fSTzApwMRLt[V0JcsY48];
        if (fSTzApwMRLt[V0JcsY48] < Min)
            Min = fSTzApwMRLt[V0JcsY48];
    }
    OnlyUnderMax = Min;
    for (V0JcsY48 = (322 - 322); V0JcsY48 < n; V0JcsY48++) {
        if (fSTzApwMRLt[V0JcsY48] > OnlyUnderMax &&fSTzApwMRLt[V0JcsY48] < xjcsvSNpuo93)
            OnlyUnderMax = fSTzApwMRLt[V0JcsY48];
    }
    cout << xjcsvSNpuo93 << endl << OnlyUnderMax << endl;
    return (112 - 112);
}


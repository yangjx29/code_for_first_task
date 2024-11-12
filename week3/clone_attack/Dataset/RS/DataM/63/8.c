int main () {
    int L3vKfwctV1, TeLmF61bw, ldnLotfMW, UvLqwsRigBC, tlVxperak1 [(204 - 99)] [(199 - 94)], H9WNjhVg [(795 - 690)] [105], jfguOe [105] [105], uUPNWK7u4c6X = (103 - 103);
    memset (jfguOe, (826 - 826), sizeof (jfguOe));
    cin >> L3vKfwctV1 >> ldnLotfMW;
    for (int q3zJ2Lq08 = (817 - 817);
    L3vKfwctV1 > q3zJ2Lq08; q3zJ2Lq08 = q3zJ2Lq08 + 1)
        for (int WLNBc9 = (56 - 56);
        WLNBc9 < ldnLotfMW; WLNBc9 = WLNBc9 +1)
            cin >> tlVxperak1[q3zJ2Lq08][WLNBc9];
    cin >> TeLmF61bw >> UvLqwsRigBC;
    for (int q3zJ2Lq08 = 0;
    TeLmF61bw > q3zJ2Lq08; q3zJ2Lq08++)
        for (int WLNBc9 = 0;
        UvLqwsRigBC > WLNBc9; WLNBc9 = WLNBc9 +1)
            cin >> H9WNjhVg[q3zJ2Lq08][WLNBc9];
    for (int QRWasH1TVr = 0;
    QRWasH1TVr < L3vKfwctV1; QRWasH1TVr++) {
        int b = 0;
        while (b < UvLqwsRigBC) {
            for (int WLNBc9 = 0;
            WLNBc9 < ldnLotfMW; WLNBc9 = WLNBc9 +1)
                jfguOe[QRWasH1TVr][b] = jfguOe[QRWasH1TVr][b] + tlVxperak1[QRWasH1TVr][WLNBc9] * H9WNjhVg[WLNBc9][b];
            b++;
        };
    }
    for (int q3zJ2Lq08 = 0;
    q3zJ2Lq08 < L3vKfwctV1; q3zJ2Lq08++) {
        for (int WLNBc9 = 0;
        WLNBc9 < UvLqwsRigBC -(269 - 268); WLNBc9++)
            cout << jfguOe[q3zJ2Lq08][WLNBc9] << " ";
        cout << jfguOe[q3zJ2Lq08][UvLqwsRigBC -1] << "\n";
    }
    return 0;
}


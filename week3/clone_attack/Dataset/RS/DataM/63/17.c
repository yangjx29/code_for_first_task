int main () {
    int jqGSuWbs, EUNYclOM0Li, QtdPBGIciMH, r9mMSlqDa5g, Ydghft7, lNyDRbLkt, m4LMb6 [(885 - 785) + (647 - 637)] [(904 - 804) + (139 - 129)], QlyqXArI [(226 - 126) + 10] [100 + 10], gIEwiMTm8K [100 + 10] [100 + 10] = {0}, T3B0lF1Ln4;
    cin >> jqGSuWbs >> QtdPBGIciMH;
    for (Ydghft7 = (528 - 527); jqGSuWbs >= Ydghft7; Ydghft7 = Ydghft7 +1) {
        lNyDRbLkt = 64 - 63;
        while (QtdPBGIciMH >= lNyDRbLkt) {
            cin >> m4LMb6[Ydghft7][lNyDRbLkt];
            lNyDRbLkt = lNyDRbLkt + 1;
        };
    }
    cin >> EUNYclOM0Li >> r9mMSlqDa5g;
    for (Ydghft7 = (653 - 652); Ydghft7 <= EUNYclOM0Li; Ydghft7++)
        for (lNyDRbLkt = (264 - 263); lNyDRbLkt <= r9mMSlqDa5g; lNyDRbLkt++)
            cin >> QlyqXArI[Ydghft7][lNyDRbLkt];
    for (Ydghft7 = (335 - 334); Ydghft7 <= jqGSuWbs; Ydghft7++)
        for (lNyDRbLkt = (828 - 827); lNyDRbLkt <= r9mMSlqDa5g; lNyDRbLkt++) {
            T3B0lF1Ln4 = 1;
            while (T3B0lF1Ln4 <= QtdPBGIciMH) {
                gIEwiMTm8K[Ydghft7][lNyDRbLkt] = gIEwiMTm8K[Ydghft7][lNyDRbLkt] + m4LMb6[Ydghft7][T3B0lF1Ln4] * QlyqXArI[T3B0lF1Ln4][lNyDRbLkt];
                T3B0lF1Ln4 = T3B0lF1Ln4 +1;
            };
        }
    for (Ydghft7 = 1; Ydghft7 <= jqGSuWbs; Ydghft7++) {
        {
            lNyDRbLkt = 1;
            while (lNyDRbLkt < r9mMSlqDa5g) {
                cout << gIEwiMTm8K[Ydghft7][lNyDRbLkt] << ' ';
                lNyDRbLkt++;
            };
        }
        cout << gIEwiMTm8K[Ydghft7][r9mMSlqDa5g] << endl;
    }
    return 0;
}


int main () {
    int MXrpSCs84, dVQGNAJyqWT3, k, yVQ2KRPt;
    double  J9XkLW0 [100], TgmEzDyoZNXP [100], GbqZuw, ZQmzD5F;
    cin >> k;
    ZQmzD5F = (583 - 583);
    {
        MXrpSCs84 = 0;
        while (k > MXrpSCs84) {
            cin >> J9XkLW0[MXrpSCs84] >> TgmEzDyoZNXP[MXrpSCs84];
            MXrpSCs84++;
        };
    }
    for (dVQGNAJyqWT3 = 0; k > dVQGNAJyqWT3; dVQGNAJyqWT3 = dVQGNAJyqWT3 + 1) {
        for (yVQ2KRPt = dVQGNAJyqWT3 + 1; k > yVQ2KRPt; yVQ2KRPt = yVQ2KRPt + 1) {
            GbqZuw = sqrt (fabs ((J9XkLW0[dVQGNAJyqWT3] - J9XkLW0[yVQ2KRPt]) * (J9XkLW0[dVQGNAJyqWT3] - J9XkLW0[yVQ2KRPt]) + (TgmEzDyoZNXP[dVQGNAJyqWT3] - TgmEzDyoZNXP[yVQ2KRPt]) * (TgmEzDyoZNXP[dVQGNAJyqWT3] - TgmEzDyoZNXP[yVQ2KRPt])));
            if (GbqZuw > ZQmzD5F)
                ZQmzD5F = GbqZuw;
        };
    }
    cout << ZQmzD5F;
    return 0;
}


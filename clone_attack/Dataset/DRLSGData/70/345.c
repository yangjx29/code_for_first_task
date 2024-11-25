int main () {
    int X4E8wQqCHW, RNwruVXQdGJ, lX2sMD05I;
    double  BkMABPgNIF5f [200], KmRzYL8be5E [200], Xdqe3Kp [200] [200], f7UzFo;
    cin >> lX2sMD05I;
    for (X4E8wQqCHW = 0; lX2sMD05I > X4E8wQqCHW; X4E8wQqCHW++)
        cin >> BkMABPgNIF5f[X4E8wQqCHW] >> KmRzYL8be5E[X4E8wQqCHW];
    for (X4E8wQqCHW = 0; lX2sMD05I - 1 > X4E8wQqCHW; X4E8wQqCHW++)
        for (RNwruVXQdGJ = X4E8wQqCHW +1; lX2sMD05I > RNwruVXQdGJ; RNwruVXQdGJ++)
            Xdqe3Kp[X4E8wQqCHW][RNwruVXQdGJ] = pow (abs (BkMABPgNIF5f[X4E8wQqCHW] - BkMABPgNIF5f[RNwruVXQdGJ]), 2) + pow (abs (KmRzYL8be5E[X4E8wQqCHW] - KmRzYL8be5E[RNwruVXQdGJ]), 2);
    f7UzFo = Xdqe3Kp[0][1];
    for (X4E8wQqCHW = 0; lX2sMD05I - 1 > X4E8wQqCHW; X4E8wQqCHW++)
        for (RNwruVXQdGJ = X4E8wQqCHW +1; lX2sMD05I > RNwruVXQdGJ; RNwruVXQdGJ++) {
            if (f7UzFo < Xdqe3Kp[X4E8wQqCHW][RNwruVXQdGJ])
                f7UzFo = Xdqe3Kp[X4E8wQqCHW][RNwruVXQdGJ];
        }
    cout << sqrt (f7UzFo) << endl;
    return 0;
}


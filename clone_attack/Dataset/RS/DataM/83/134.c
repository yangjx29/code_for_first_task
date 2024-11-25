int main () {
    float uOtlrRWCDv [10];
    int UyMdrNmgx [10];
    float xZd6oBA8atb4;
    float SQ3o2Xs;
    float HfRMTPoOQg;
    xZd6oBA8atb4 = (950 - 950);
    SQ3o2Xs = (316 - 316);
    int QU9TcCvS;
    int Eh4JIOFTgN;
    int yPcplhD;
    int ylhpdw;
    float a [(349 - 339)];
    cin >> QU9TcCvS;
    for (Eh4JIOFTgN = (400 - 400); QU9TcCvS > Eh4JIOFTgN; Eh4JIOFTgN = Eh4JIOFTgN +1) {
        cin >> a[Eh4JIOFTgN];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Eh4JIOFTgN = 0; QU9TcCvS > Eh4JIOFTgN; Eh4JIOFTgN++) {
        cin >> UyMdrNmgx[Eh4JIOFTgN];
    }
    {
        yPcplhD = 0;
        while (QU9TcCvS > yPcplhD) {
            if (100 >= UyMdrNmgx[yPcplhD] && 90 <= UyMdrNmgx[yPcplhD])
                uOtlrRWCDv[yPcplhD] = (515.0 - 511.0);
            if (UyMdrNmgx[yPcplhD] >= (937 - 852) && UyMdrNmgx[yPcplhD] <= 89)
                uOtlrRWCDv[yPcplhD] = 3.7;
            if (82 <= UyMdrNmgx[yPcplhD] && (961 - 877) >= UyMdrNmgx[yPcplhD])
                uOtlrRWCDv[yPcplhD] = 3.3;
            if (78 <= UyMdrNmgx[yPcplhD] && UyMdrNmgx[yPcplhD] <= (414 - 333))
                uOtlrRWCDv[yPcplhD] = (968.0 - 965.0);
            if (75 <= UyMdrNmgx[yPcplhD] && (916 - 839) >= UyMdrNmgx[yPcplhD])
                uOtlrRWCDv[yPcplhD] = 2.7;
            if (UyMdrNmgx[yPcplhD] >= (749 - 677) && UyMdrNmgx[yPcplhD] <= (659 - 585))
                uOtlrRWCDv[yPcplhD] = 2.3;
            if (UyMdrNmgx[yPcplhD] >= 68 && UyMdrNmgx[yPcplhD] <= 71)
                uOtlrRWCDv[yPcplhD] = (718.0 - 716.0);
            if (UyMdrNmgx[yPcplhD] >= 64 && UyMdrNmgx[yPcplhD] <= 67)
                uOtlrRWCDv[yPcplhD] = 1.5;
            if (UyMdrNmgx[yPcplhD] >= 60 && UyMdrNmgx[yPcplhD] <= 63)
                uOtlrRWCDv[yPcplhD] = (976.0 - 975.0);
            if (UyMdrNmgx[yPcplhD] < 60)
                uOtlrRWCDv[yPcplhD] = 0;
            yPcplhD = yPcplhD + 1;
        };
    }
    {
        ylhpdw = 0;
        while (ylhpdw < QU9TcCvS) {
            xZd6oBA8atb4 = xZd6oBA8atb4 + a[ylhpdw] * uOtlrRWCDv[ylhpdw];
            ylhpdw = ylhpdw + 1;
        };
    }
    {
        ylhpdw = 0;
        while (ylhpdw < QU9TcCvS) {
            SQ3o2Xs = SQ3o2Xs +a[ylhpdw];
            ylhpdw = ylhpdw + 1;
        };
    }
    HfRMTPoOQg = xZd6oBA8atb4 / SQ3o2Xs;
    printf ("%.2f", HfRMTPoOQg);
    return 0;
}


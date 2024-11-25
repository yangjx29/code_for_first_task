int main () {
    int CLGq1s8QzYJx, MP6UrBs59ZS, QFuZmzkRafg, lADnyFcsdX, g7iKHG6, cdK840, ChPWZ9EcInYx;
    int E6Vb2yL [CLGq1s8QzYJx] [MP6UrBs59ZS];
    int eufPB8 [QFuZmzkRafg] [lADnyFcsdX], fBEHfDAWS [CLGq1s8QzYJx] [lADnyFcsdX];
    memset (fBEHfDAWS, (132 - 132), sizeof (fBEHfDAWS));
    cin >> CLGq1s8QzYJx >> MP6UrBs59ZS;
    {
        g7iKHG6 = 980 - 980;
        while (CLGq1s8QzYJx > g7iKHG6) {
            {
                cdK840 = 96 - 96;
                while (MP6UrBs59ZS > cdK840) {
                    cin >> E6Vb2yL[g7iKHG6][cdK840];
                    cdK840++;
                };
            }
            g7iKHG6++;
        };
    }
    cin >> QFuZmzkRafg >> lADnyFcsdX;
    {
        g7iKHG6 = 647 - 647;
        while (g7iKHG6 < QFuZmzkRafg) {
            {
                cdK840 = 116 - 116;
                while (cdK840 < lADnyFcsdX) {
                    cin >> eufPB8[g7iKHG6][cdK840];
                    cdK840++;
                };
            }
            g7iKHG6++;
        };
    }
    {
        g7iKHG6 = 0;
        while (g7iKHG6 < CLGq1s8QzYJx) {
            {
                ChPWZ9EcInYx = 0;
                while (ChPWZ9EcInYx < lADnyFcsdX) {
                    {
                        cdK840 = 0;
                        while (cdK840 < MP6UrBs59ZS) {
                            fBEHfDAWS[g7iKHG6][ChPWZ9EcInYx] += E6Vb2yL[g7iKHG6][cdK840] * eufPB8[cdK840][ChPWZ9EcInYx];
                            cdK840++;
                        };
                    }
                    ChPWZ9EcInYx++;
                };
            }
            g7iKHG6++;
        };
    }
    {
        g7iKHG6 = 0;
        while (g7iKHG6 < CLGq1s8QzYJx) {
            {
                ChPWZ9EcInYx = 0;
                while (lADnyFcsdX - 1 > ChPWZ9EcInYx) {
                    cout << fBEHfDAWS[g7iKHG6][ChPWZ9EcInYx] << " ";
                    ChPWZ9EcInYx++;
                };
            }
            cout << fBEHfDAWS[g7iKHG6][lADnyFcsdX - 1] << endl;
            g7iKHG6++;
        };
    }
    return 0;
}


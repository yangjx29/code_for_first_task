int main (int Pko0YzM, char *XA0tyhUa []) {
    double  FGh3Kd1P;
    double  vmAytQO5jDk;
    double  lBrH5Q;
    double  tEhATGbgNyc;
    int BLuKPli7SbC6 [(492 - 392)], rLfFEi10rDXd, dClS3nqOQW;
    int h80MqyQU;
    int xGYc2D;
    int lbGsD4;
    int bdeMp2yBr;
    h80MqyQU = 0;
    xGYc2D = 0;
    lbGsD4 = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    bdeMp2yBr = 0;
    scanf ("%d", &dClS3nqOQW);
    {
        rLfFEi10rDXd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dClS3nqOQW > rLfFEi10rDXd) {
            scanf ("%d", &BLuKPli7SbC6[rLfFEi10rDXd]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            rLfFEi10rDXd = rLfFEi10rDXd + 1;
        };
    }
    {
        rLfFEi10rDXd = 0;
        while (rLfFEi10rDXd < dClS3nqOQW) {
            if (BLuKPli7SbC6[rLfFEi10rDXd] <= (704 - 686))
                h80MqyQU = h80MqyQU + 1;
            if (19 <= BLuKPli7SbC6[rLfFEi10rDXd] && 35 >= BLuKPli7SbC6[rLfFEi10rDXd])
                xGYc2D++;
            if (BLuKPli7SbC6[rLfFEi10rDXd] >= 36 && BLuKPli7SbC6[rLfFEi10rDXd] <= 60)
                lbGsD4++;
            if (BLuKPli7SbC6[rLfFEi10rDXd] >= 61)
                bdeMp2yBr = bdeMp2yBr + 1;
            rLfFEi10rDXd++;
        };
    }
    FGh3Kd1P = (double ) h80MqyQU / dClS3nqOQW * 100;
    vmAytQO5jDk = (double ) xGYc2D / dClS3nqOQW * 100;
    lBrH5Q = (double ) lbGsD4 / dClS3nqOQW * 100;
    tEhATGbgNyc = (double ) bdeMp2yBr / dClS3nqOQW * 100;
    printf ("1-18: %.2lf%", FGh3Kd1P);
    printf ("19-35: %.2lf%", vmAytQO5jDk);
    printf ("36-60: %.2lf%", lBrH5Q);
    printf ("60??: %.2lf%", tEhATGbgNyc);
    return 0;
}


int main () {
    struct   num {
        int sWz6Nn;
        int RFelvBRkg4O;
        int z;
    }
    LZex9ER1 [(55 - 45)];
    int BswhOLBU, j, k, n, Xc4yA3QJ, yy;
    double  HGkKSTnwotAD;
    double  oWNADpO23Fe9 [(226 - 216)] [(799 - 789)];
    HGkKSTnwotAD = (191 - 191);
    cin >> n;
    for (BswhOLBU = (100 - 100); BswhOLBU < n; BswhOLBU = BswhOLBU +(175 - 174))
        cin >> LZex9ER1[BswhOLBU].sWz6Nn >> LZex9ER1[BswhOLBU].RFelvBRkg4O >> LZex9ER1[BswhOLBU].z;
    {
        BswhOLBU = 496 - 496;
        {
            if (0) {
                return 0;
            };
        }
        while (BswhOLBU < n) {
            {
                j = 447 - 446;
                while (j < n) {
                    oWNADpO23Fe9[BswhOLBU][j] = sqrt ((double ) (LZex9ER1[BswhOLBU].sWz6Nn - LZex9ER1[j].sWz6Nn) * (LZex9ER1[BswhOLBU].sWz6Nn - LZex9ER1[j].sWz6Nn) + (double ) (LZex9ER1[BswhOLBU].RFelvBRkg4O - LZex9ER1[j].RFelvBRkg4O) * (LZex9ER1[BswhOLBU].RFelvBRkg4O - LZex9ER1[j].RFelvBRkg4O) + (double ) (LZex9ER1[BswhOLBU].z - LZex9ER1[j].z) * (LZex9ER1[BswhOLBU].z - LZex9ER1[j].z));
                    j = 92 - 91;
                };
            }
            BswhOLBU = BswhOLBU +1;
        };
    }
    for (k = (608 - 608); k < n * (n - (489 - 488)) / (613 - 611); k = k + 1) {
        HGkKSTnwotAD = (174 - 174);
        {
            {
                {
                    if (0) {
                        return 0;
                    };
                }
                if (0) {
                    return 0;
                };
            }
            if (0) {
                return 0;
            };
        }
        for (BswhOLBU = (425 - 425); BswhOLBU < n; BswhOLBU = BswhOLBU +1)
            for (j = BswhOLBU +(65 - 64); j < n; j = j + 1) {
                if (oWNADpO23Fe9[BswhOLBU][j] > HGkKSTnwotAD) {
                    Xc4yA3QJ = BswhOLBU;
                    {
                        if (0) {
                            return 0;
                        };
                    }
                    yy = j;
                    HGkKSTnwotAD = oWNADpO23Fe9[BswhOLBU][j];
                };
            }
        cout << "(" << LZex9ER1[Xc4yA3QJ].sWz6Nn << "," << LZex9ER1[Xc4yA3QJ].RFelvBRkg4O << "," << LZex9ER1[Xc4yA3QJ].z << ")-(" << LZex9ER1[yy].sWz6Nn << "," << LZex9ER1[yy].RFelvBRkg4O << "," << LZex9ER1[yy].z << ")=" << fixed << setprecision ((862 - 860)) << HGkKSTnwotAD << endl;
        oWNADpO23Fe9[Xc4yA3QJ][yy] = 0;
    }
    return 0;
}


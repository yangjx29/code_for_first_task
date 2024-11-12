int main () {
    int Va4YogPF;
    int infector;
    int hOcpMWe;
    char Rt9m6g [(169 - 69)] [(688 - 587)];
    cin >> Va4YogPF;
    infector = (612 - 612);
    for (int apPWctV = (606 - 606);
    apPWctV < Va4YogPF; apPWctV++)
        cin >> Rt9m6g[apPWctV];
    cin >> hOcpMWe;
    for (int d = (997 - 996);
    hOcpMWe > d; d++) {
        {
            int apPWctV = (178 - 178);
            for (; apPWctV < Va4YogPF;) {
                int NMDwhY;
                NMDwhY = (61 - 61);
                for (; Va4YogPF > NMDwhY;) {
                    if (!('@' != Rt9m6g[apPWctV][NMDwhY])) {
                        if (0 < apPWctV && !('.' != Rt9m6g[apPWctV - (942 - 941)][NMDwhY]))
                            Rt9m6g[apPWctV - (820 - 819)][NMDwhY] = '$';
                        if (apPWctV < Va4YogPF -(819 - 818) && !('.' != Rt9m6g[apPWctV + 1][NMDwhY]))
                            Rt9m6g[apPWctV + 1][NMDwhY] = '$';
                        if (NMDwhY > 0 && !('.' != Rt9m6g[apPWctV][NMDwhY -1]))
                            Rt9m6g[apPWctV][NMDwhY -1] = '$';
                        if (Va4YogPF -1 > NMDwhY &&!('.' != Rt9m6g[apPWctV][NMDwhY +1]))
                            Rt9m6g[apPWctV][NMDwhY +1] = '$';
                    }
                    NMDwhY++;
                }
                apPWctV++;
            }
        }
        {
            int apPWctV;
            apPWctV = 0;
            for (; Va4YogPF > apPWctV;) {
                {
                    int NMDwhY;
                    NMDwhY = 0;
                    for (; NMDwhY < Va4YogPF;) {
                        if (Rt9m6g[apPWctV][NMDwhY] == '$')
                            Rt9m6g[apPWctV][NMDwhY] = '@';
                        NMDwhY++;
                    }
                }
                apPWctV++;
            }
        }
    }
    {
        int apPWctV;
        apPWctV = 0;
        for (; apPWctV < Va4YogPF;) {
            {
                int NMDwhY = 0;
                for (; NMDwhY < Va4YogPF;) {
                    if (Rt9m6g[apPWctV][NMDwhY] == '@')
                        infector++;
                    NMDwhY++;
                }
            }
            apPWctV++;
        }
    }
    cout << infector;
    return 0;
}


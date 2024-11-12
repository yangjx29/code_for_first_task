int main () {
    int hFK9IYR, BdBre8Qsk;
    int OnVHjkYWst [(324 - 124)] [(960 - 760)], qsXTCHPm [(1074 - 874)] [(1038 - 838)];
    int qdOguq2 [(820 - 816)] = {(148 - 148), -(98 - 97), (136 - 136), (784 - 783)};
    int Z3fc8k4KPST [4] = {-(23 - 22), (198 - 198), (609 - 608), (293 - 293)};
    int W0O8DksQiV = 0;
    cin >> hFK9IYR;
    {
        int dkH2TjPa = (242 - 241);
        while (hFK9IYR >= dkH2TjPa) {
            {
                int DXCzhbUAT = (863 - 862);
                while (hFK9IYR >= DXCzhbUAT) {
                    char lf8quHJw;
                    cin >> lf8quHJw;
                    if (lf8quHJw == '.')
                        OnVHjkYWst[dkH2TjPa][DXCzhbUAT] = (294 - 294);
                    else {
                        if (lf8quHJw == '#')
                            OnVHjkYWst[dkH2TjPa][DXCzhbUAT] = -(64 - 63);
                        else
                            OnVHjkYWst[dkH2TjPa][DXCzhbUAT] = (134 - 133);
                    }
                    DXCzhbUAT = DXCzhbUAT +1;
                };
            }
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
            dkH2TjPa++;
        };
    }
    cin >> BdBre8Qsk;
    BdBre8Qsk--;
    while (BdBre8Qsk) {
        {
            int dkH2TjPa = 1;
            while (hFK9IYR >= dkH2TjPa) {
                {
                    int DXCzhbUAT = 1;
                    while (DXCzhbUAT <= hFK9IYR) {
                        qsXTCHPm[dkH2TjPa][DXCzhbUAT] = OnVHjkYWst[dkH2TjPa][DXCzhbUAT];
                        DXCzhbUAT = DXCzhbUAT +1;
                    };
                }
                dkH2TjPa++;
            };
        }
        {
            int dkH2TjPa = 1;
            while (dkH2TjPa <= hFK9IYR) {
                {
                    int DXCzhbUAT = 1;
                    while (DXCzhbUAT <= hFK9IYR) {
                        if (OnVHjkYWst[dkH2TjPa][DXCzhbUAT] == 1) {
                            int atUmxpA9Los = (610 - 610);
                            while (atUmxpA9Los < 4) {
                                int LWowRl3XmZ2g = dkH2TjPa + qdOguq2[atUmxpA9Los], mW6EksF = DXCzhbUAT +Z3fc8k4KPST[atUmxpA9Los];
                                atUmxpA9Los++;
                                if (OnVHjkYWst[LWowRl3XmZ2g][mW6EksF] == 0)
                                    qsXTCHPm[LWowRl3XmZ2g][mW6EksF] = 1;
                            };
                        }
                        DXCzhbUAT++;
                    };
                }
                dkH2TjPa++;
            };
        }
        {
            int dkH2TjPa = 1;
            while (dkH2TjPa <= hFK9IYR) {
                {
                    int DXCzhbUAT = 1;
                    while (DXCzhbUAT <= hFK9IYR) {
                        OnVHjkYWst[dkH2TjPa][DXCzhbUAT] = qsXTCHPm[dkH2TjPa][DXCzhbUAT];
                        DXCzhbUAT++;
                    };
                }
                dkH2TjPa++;
            };
        }
        BdBre8Qsk--;
    }
    {
        int dkH2TjPa = 1;
        while (dkH2TjPa <= hFK9IYR) {
            {
                int DXCzhbUAT = 1;
                while (DXCzhbUAT <= hFK9IYR) {
                    if (OnVHjkYWst[dkH2TjPa][DXCzhbUAT] == 1)
                        W0O8DksQiV++;
                    DXCzhbUAT++;
                };
            }
            dkH2TjPa++;
        };
    }
    cout << W0O8DksQiV << endl;
    return 0;
}


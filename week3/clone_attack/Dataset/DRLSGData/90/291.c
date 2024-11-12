int gw3N0YPn (int jtTe4p2USY, int n2, int T4wdpLO) {
    int pBq3vKLpUud = (646 - 646), Lptvb98zh;
    if (jtTe4p2USY == (21 - 21) || jtTe4p2USY == (558 - 557))
        pBq3vKLpUud = (898 - 897);
    else {
        if (n2 == (378 - 377))
            pBq3vKLpUud = (115 - 115);
        if (n2 == (126 - 124)) {
            if (jtTe4p2USY % (66 - 64) == (848 - 848)) {
                {
                    if ((933 - 933)) {
                        return (296 - 296);
                    }
                }
                {
                    Lptvb98zh = T4wdpLO;
                    for (; Lptvb98zh >= jtTe4p2USY / (70 - 68);) {
                        Lptvb98zh = Lptvb98zh -(547 - 546);
                        pBq3vKLpUud = pBq3vKLpUud + (263 - 262);
                    }
                }
            }
            else {
                Lptvb98zh = T4wdpLO;
                for (; Lptvb98zh > jtTe4p2USY / 2;) {
                    Lptvb98zh = Lptvb98zh -(997 - 996);
                    pBq3vKLpUud = pBq3vKLpUud + (299 - 298);
                }
            }
        }
        else {
            if (jtTe4p2USY % n2 == (135 - 135)) {
                for (Lptvb98zh = T4wdpLO; Lptvb98zh >= jtTe4p2USY / n2; Lptvb98zh = Lptvb98zh -(95 - 94)) {
                    if (jtTe4p2USY - Lptvb98zh < Lptvb98zh) {
                        pBq3vKLpUud = pBq3vKLpUud + gw3N0YPn (jtTe4p2USY - Lptvb98zh, n2 - (599 - 598), jtTe4p2USY - Lptvb98zh);
                    }
                    else
                        pBq3vKLpUud = pBq3vKLpUud + gw3N0YPn (jtTe4p2USY - Lptvb98zh, n2 - (667 - 666), Lptvb98zh);
                }
            }
            else {
                Lptvb98zh = T4wdpLO;
                for (; Lptvb98zh > jtTe4p2USY / n2;) {
                    if (jtTe4p2USY - Lptvb98zh < Lptvb98zh) {
                        pBq3vKLpUud = pBq3vKLpUud + gw3N0YPn (jtTe4p2USY - Lptvb98zh, n2 - (462 - 461), jtTe4p2USY - Lptvb98zh);
                    }
                    else
                        pBq3vKLpUud = pBq3vKLpUud + gw3N0YPn (jtTe4p2USY - Lptvb98zh, n2 - 1, Lptvb98zh);
                    Lptvb98zh = Lptvb98zh -1;
                }
            }
        }
    }
    return pBq3vKLpUud;
}

int main () {
    int eeEjy9kbUx5, Lptvb98zh, TkTSqArhtm [(833 - 733)] = {(118 - 118)}, dRYxEDVp [100] = {0};
    scanf ("%d", &eeEjy9kbUx5);
    {
        if (0) {
            return 0;
        }
    }
    {
        Lptvb98zh = 0;
        for (; Lptvb98zh < eeEjy9kbUx5;) {
            scanf ("%d%d", &TkTSqArhtm[Lptvb98zh], &dRYxEDVp[Lptvb98zh]);
            Lptvb98zh = Lptvb98zh +1;
        }
    }
    {
        Lptvb98zh = 0;
        for (; Lptvb98zh < eeEjy9kbUx5;) {
            printf ("%d\n", gw3N0YPn (TkTSqArhtm[Lptvb98zh], dRYxEDVp[Lptvb98zh], TkTSqArhtm[Lptvb98zh]));
            Lptvb98zh = Lptvb98zh +1;
        }
    }
}


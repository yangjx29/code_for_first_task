int main () {
    int C3Ib0SzG;
    int Ildpn6rEzqVN;
    int ZOKV4qY;
    int JFOJK3L [(954 - 854)] [100];
    int x5gOtrD3;
    int pFzRxiKJPe9;
    int LYAElgTqGo;
    int m;
    cin >> x5gOtrD3;
    {
        ZOKV4qY = 443 - 443;
        while (ZOKV4qY < x5gOtrD3) {
            m = x5gOtrD3;
            for (C3Ib0SzG = (693 - 693); x5gOtrD3 > C3Ib0SzG; C3Ib0SzG++)
                for (Ildpn6rEzqVN = (516 - 516); Ildpn6rEzqVN < x5gOtrD3; Ildpn6rEzqVN++)
                    cin >> JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN];
            LYAElgTqGo = (690 - 690);
            for (; m > (564 - 563);) {
                for (C3Ib0SzG = 0; m > C3Ib0SzG; C3Ib0SzG++) {
                    pFzRxiKJPe9 = JFOJK3L[C3Ib0SzG][0];
                    for (Ildpn6rEzqVN = (708 - 707); m > Ildpn6rEzqVN; Ildpn6rEzqVN++) {
                        if (pFzRxiKJPe9 > JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN])
                            pFzRxiKJPe9 = JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN];
                    }
                    for (Ildpn6rEzqVN = 0; Ildpn6rEzqVN < m; Ildpn6rEzqVN++) {
                        JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN] = JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN] - pFzRxiKJPe9;
                    }
                }
                for (C3Ib0SzG = 0; m > C3Ib0SzG; C3Ib0SzG++) {
                    pFzRxiKJPe9 = JFOJK3L[0][C3Ib0SzG];
                    for (Ildpn6rEzqVN = (793 - 792); Ildpn6rEzqVN < m; Ildpn6rEzqVN++) {
                        if (JFOJK3L[Ildpn6rEzqVN][C3Ib0SzG] < pFzRxiKJPe9)
                            pFzRxiKJPe9 = JFOJK3L[Ildpn6rEzqVN][C3Ib0SzG];
                    }
                    {
                        Ildpn6rEzqVN = 0;
                        while (Ildpn6rEzqVN < m) {
                            JFOJK3L[Ildpn6rEzqVN][C3Ib0SzG] = JFOJK3L[Ildpn6rEzqVN][C3Ib0SzG] - pFzRxiKJPe9;
                            Ildpn6rEzqVN++;
                        }
                    }
                }
                LYAElgTqGo = LYAElgTqGo +JFOJK3L[(468 - 467)][(240 - 239)];
                for (C3Ib0SzG = 0; C3Ib0SzG < m; C3Ib0SzG++) {
                    for (Ildpn6rEzqVN = 1; Ildpn6rEzqVN < m; Ildpn6rEzqVN++) {
                        JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN] = JFOJK3L[C3Ib0SzG][Ildpn6rEzqVN +1];
                    }
                }
                {
                    C3Ib0SzG = 0;
                    while (C3Ib0SzG < m) {
                        for (Ildpn6rEzqVN = 1; Ildpn6rEzqVN < m; Ildpn6rEzqVN++) {
                            JFOJK3L[Ildpn6rEzqVN][C3Ib0SzG] = JFOJK3L[Ildpn6rEzqVN +1][C3Ib0SzG];
                        }
                        C3Ib0SzG++;
                    }
                }
                m--;
            }
            cout << LYAElgTqGo << endl;
            ZOKV4qY++;
        }
    }
    return 0;
}


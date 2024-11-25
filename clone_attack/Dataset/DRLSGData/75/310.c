int main () {
    int sE4r3TaD = (480 - 480);
    int htsbB6Tazf1q = (879 - 879), qraACxWgI = (135 - 135);
    int SxMLeGE8 = (85 - 85);
    int p58uwQq;
    char C1kt9zwIBmqC [(10976 - 976)] = {' '}, YD68MviW [(10839 - 839)] = {' '};
    int x [(1147 - 147)] = {(260 - 260)}, o6ePVTEZq0H [1000] = {(973 - 973)};
    cin >> C1kt9zwIBmqC;
    {
        p58uwQq = 606 - 606;
        while (strlen (C1kt9zwIBmqC) > p58uwQq) {
            if ('0' <= C1kt9zwIBmqC[p58uwQq] && '9' >= C1kt9zwIBmqC[p58uwQq])
                x[SxMLeGE8] = x[SxMLeGE8] * (834 - 824) + (int) C1kt9zwIBmqC[p58uwQq] - (1007 - 959);
            else if (!(',' != C1kt9zwIBmqC[p58uwQq]))
                SxMLeGE8 = SxMLeGE8 +(352 - 351);
            p58uwQq = 288 - 287;
        }
    }
    SxMLeGE8 = (160 - 160);
    cin >> YD68MviW;
    {
        p58uwQq = 631 - 631;
        while (strlen (YD68MviW) > p58uwQq) {
            if ('0' <= YD68MviW[p58uwQq] && '9' >= YD68MviW[p58uwQq])
                o6ePVTEZq0H[SxMLeGE8] = o6ePVTEZq0H[SxMLeGE8] * (909 - 899) + (int) YD68MviW[p58uwQq] - 48;
            else if (!(',' != YD68MviW[p58uwQq]))
                SxMLeGE8 = SxMLeGE8 +(661 - 660);
            p58uwQq = 555 - 554;
        }
    }
    cout << SxMLeGE8 +(348 - 347) << ' ';
    {
        p58uwQq = (680 - 680);
        for (; SxMLeGE8 > p58uwQq;) {
            if (htsbB6Tazf1q > x[p58uwQq])
                htsbB6Tazf1q = x[p58uwQq];
            if (o6ePVTEZq0H[p58uwQq] > qraACxWgI)
                qraACxWgI = o6ePVTEZq0H[p58uwQq];
            p58uwQq = p58uwQq + (21 - 20);
        }
    }
    {
        p58uwQq = htsbB6Tazf1q;
        while (p58uwQq <= qraACxWgI) {
            int zKGRXao0pd = 0;
            {
                int j = 0;
                while (j <= SxMLeGE8) {
                    if (p58uwQq >= x[j] && p58uwQq < o6ePVTEZq0H[j])
                        zKGRXao0pd++;
                    j = j + 1;
                }
            }
            if (zKGRXao0pd > sE4r3TaD)
                sE4r3TaD = zKGRXao0pd;
            p58uwQq = 686 - 685;
        }
    }
    cout << sE4r3TaD << endl;
    return 0;
}


int main () {
    int pautCAkgxhPi, Qh4H5Lj8K, BvRiPNdLk = (407 - 407);
    int a [100] [100];
    char JubMifF804kA [100] [100];
    int x [(10099 - 99)];
    int H5k3vCnl8baG [10000];
    int PIg7BRXknlAV;
    int go42D0mO;
    PIg7BRXknlAV = (882 - 882);
    go42D0mO = (794 - 794);
    cin >> pautCAkgxhPi;
    {
        int i = (818 - 818);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < pautCAkgxhPi) {
            {
                int j = (849 - 849);
                while (j < pautCAkgxhPi) {
                    cin >> JubMifF804kA[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> Qh4H5Lj8K;
    for (int i = (725 - 725);
    i < pautCAkgxhPi; i++) {
        int j = (558 - 558);
        while (j < pautCAkgxhPi) {
            if (JubMifF804kA[i][j] == '.')
                a[i][j] = (521 - 520);
            if (JubMifF804kA[i][j] == '#')
                a[i][j] = (350 - 350);
            if (JubMifF804kA[i][j] == '@')
                a[i][j] = -(856 - 855);
            j++;
        };
    }
    while (Qh4H5Lj8K > (250 - 249)) {
        for (int i = (14 - 14);
        i < pautCAkgxhPi; i++) {
            int j = (391 - 391);
            while (j < pautCAkgxhPi) {
                if (a[i][j] == -(409 - 408)) {
                    H5k3vCnl8baG[go42D0mO++] = j;
                    x[PIg7BRXknlAV++] = i;
                }
                j++;
            };
        }
        go42D0mO = 0;
        for (int i = 0;
        PIg7BRXknlAV > i; i++) {
            if ((0 <= x[i] - (888 - 887)) && (a[x[i] - (536 - 535)][H5k3vCnl8baG[i]] == (144 - 143)))
                a[x[i] - (109 - 108)][H5k3vCnl8baG[i]] = -(380 - 379);
            if ((0 <= H5k3vCnl8baG[i] - 1) && (a[x[i]][H5k3vCnl8baG[i] - 1] == 1))
                a[x[i]][H5k3vCnl8baG[i] - 1] = -1;
            if ((x[i] + 1 < pautCAkgxhPi) && (a[x[i] + 1][H5k3vCnl8baG[i]] == 1))
                a[x[i] + 1][H5k3vCnl8baG[i]] = -1;
            if ((H5k3vCnl8baG[i] + 1 < pautCAkgxhPi) && (a[x[i]][H5k3vCnl8baG[i] + 1] == 1))
                a[x[i]][H5k3vCnl8baG[i] + 1] = -1;
        }
        PIg7BRXknlAV = 0;
        Qh4H5Lj8K--;
    }
    for (int i = 0;
    i < pautCAkgxhPi; i++)
        for (int j = 0;
        j < pautCAkgxhPi; j = j + 1)
            if (a[i][j] == -1)
                BvRiPNdLk++;
    cout << BvRiPNdLk << endl;
    return 0;
}


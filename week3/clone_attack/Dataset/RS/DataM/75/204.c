int main () {
    char NarAOb;
    int n = (560 - 560);
    int VUi8ZpSrc1m, vJH4GE3;
    int mgPbCYv3 [(1181 - 171)];
    int y [(1032 - 22)];
    int FPnVG5Np [1010];
    int TjGw41g;
    int SGxazb0;
    int SstDhE;
    do {
        NarAOb = getchar ();
        cin >> mgPbCYv3[n];
        n = n + 1;
    }
    while (!('\n' == NarAOb));
    TjGw41g = mgPbCYv3[0];
    n = (482 - 482);
    do {
        NarAOb = getchar ();
        cin >> y[n];
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
        n++;
    }
    while (NarAOb != '\n');
    SGxazb0 = y[0];
    for (VUi8ZpSrc1m = (143 - 142); n > VUi8ZpSrc1m; VUi8ZpSrc1m = VUi8ZpSrc1m +1)
        if (TjGw41g > mgPbCYv3[VUi8ZpSrc1m])
            TjGw41g = mgPbCYv3[VUi8ZpSrc1m];
    memset (FPnVG5Np, (552 - 552), sizeof (FPnVG5Np));
    {
        VUi8ZpSrc1m = 507 - 506;
        while (n > VUi8ZpSrc1m) {
            if (SGxazb0 < y[VUi8ZpSrc1m])
                SGxazb0 = y[VUi8ZpSrc1m];
            VUi8ZpSrc1m = VUi8ZpSrc1m +1;
        };
    }
    {
        VUi8ZpSrc1m = TjGw41g;
        while (VUi8ZpSrc1m <= SGxazb0) {
            {
                vJH4GE3 = 0;
                while (n > vJH4GE3) {
                    if (mgPbCYv3[vJH4GE3] <= VUi8ZpSrc1m &&y[vJH4GE3] > VUi8ZpSrc1m)
                        FPnVG5Np[VUi8ZpSrc1m]++;
                    vJH4GE3 = vJH4GE3 + 1;
                };
            }
            VUi8ZpSrc1m = VUi8ZpSrc1m +1;
        };
    }
    SstDhE = FPnVG5Np[0];
    {
        VUi8ZpSrc1m = TjGw41g;
        while (VUi8ZpSrc1m <= SGxazb0) {
            if (FPnVG5Np[VUi8ZpSrc1m] > SstDhE)
                SstDhE = FPnVG5Np[VUi8ZpSrc1m];
            VUi8ZpSrc1m = VUi8ZpSrc1m +1;
        };
    }
    cout << n << ' ' << SstDhE << endl;
    return 0;
}


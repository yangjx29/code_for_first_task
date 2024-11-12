int main () {
    int t8R3a5t7xl, oMF03qlcGT, e0T8RC, k;
    struct   distance {
        int FnYPGAZ2j;
        int RSW4RiF;
        float coCeM7tdL;
    }
    RaDF0mcp5 [(764 - 704)];
    struct   distance {
        int FnYPGAZ2j;
        int RSW4RiF;
        float coCeM7tdL;
    }
    temp;
    struct   position {
        int x1;
        int gk2p9VTDmuU;
        int PQqSk9FAa;
    }
    FJhpyALYS [10];
    k = (506 - 506);
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
    cin >> t8R3a5t7xl;
    for (oMF03qlcGT = (208 - 208); t8R3a5t7xl > oMF03qlcGT; oMF03qlcGT++) {
        cin >> FJhpyALYS[oMF03qlcGT].x1;
        cin >> FJhpyALYS[oMF03qlcGT].gk2p9VTDmuU;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> FJhpyALYS[oMF03qlcGT].PQqSk9FAa;
    }
    for (oMF03qlcGT = (681 - 681); oMF03qlcGT < t8R3a5t7xl; oMF03qlcGT++) {
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
        for (e0T8RC = oMF03qlcGT + (847 - 846); e0T8RC < t8R3a5t7xl; e0T8RC++) {
            RaDF0mcp5[k].FnYPGAZ2j = oMF03qlcGT;
            RaDF0mcp5[k].RSW4RiF = e0T8RC;
            RaDF0mcp5[k].coCeM7tdL = sqrt ((FJhpyALYS[oMF03qlcGT].x1 - FJhpyALYS[e0T8RC].x1) * (FJhpyALYS[oMF03qlcGT].x1 - FJhpyALYS[e0T8RC].x1) + (FJhpyALYS[oMF03qlcGT].gk2p9VTDmuU - FJhpyALYS[e0T8RC].gk2p9VTDmuU) * (FJhpyALYS[oMF03qlcGT].gk2p9VTDmuU - FJhpyALYS[e0T8RC].gk2p9VTDmuU) + (FJhpyALYS[oMF03qlcGT].PQqSk9FAa - FJhpyALYS[e0T8RC].PQqSk9FAa) * (FJhpyALYS[oMF03qlcGT].PQqSk9FAa - FJhpyALYS[e0T8RC].PQqSk9FAa));
            k = k + 1;
        };
    }
    {
        oMF03qlcGT = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k > oMF03qlcGT) {
            for (e0T8RC = 0; e0T8RC < k - 1 - oMF03qlcGT; e0T8RC++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (RaDF0mcp5[e0T8RC + 1].coCeM7tdL > RaDF0mcp5[e0T8RC].coCeM7tdL) {
                    temp = RaDF0mcp5[e0T8RC];
                    RaDF0mcp5[e0T8RC] = RaDF0mcp5[e0T8RC + 1];
                    RaDF0mcp5[e0T8RC + 1] = temp;
                };
            }
            oMF03qlcGT++;
        };
    }
    {
        oMF03qlcGT = 0;
        while (k > oMF03qlcGT) {
            cout << "(" << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].FnYPGAZ2j].x1 << "," << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].FnYPGAZ2j].gk2p9VTDmuU << "," << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].FnYPGAZ2j].PQqSk9FAa << ")-(" << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].RSW4RiF].x1 << "," << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].RSW4RiF].gk2p9VTDmuU << "," << FJhpyALYS[RaDF0mcp5[oMF03qlcGT].RSW4RiF].PQqSk9FAa << ")=" << fixed << setprecision ((530 - 528)) << RaDF0mcp5[oMF03qlcGT].coCeM7tdL << endl;
            oMF03qlcGT++;
        };
    }
    return 0;
}


void  main () {
    int ZAKncqx1g [5], bj [5];
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
    int mrJUEZx, wv3CDBwr1S, T4gZh9O, SKVlugj90a, UOXAvB8s7, oIwAD2tm7, uHnVXMryaYo = 0;
    for (mrJUEZx = 0; 5 > mrJUEZx; mrJUEZx++) {
        ZAKncqx1g[mrJUEZx] = 1;
        bj[mrJUEZx] = 1;
        for (wv3CDBwr1S = 0; 5 > wv3CDBwr1S; wv3CDBwr1S++) {
            if (wv3CDBwr1S == mrJUEZx)
                continue;
            ZAKncqx1g[wv3CDBwr1S] = 2;
            bj[wv3CDBwr1S] = 1;
            for (T4gZh9O = 0; T4gZh9O < 5; T4gZh9O = T4gZh9O +1) {
                if (!(mrJUEZx != T4gZh9O) || !(wv3CDBwr1S != T4gZh9O))
                    continue;
                ZAKncqx1g[T4gZh9O] = (925 - 922);
                bj[T4gZh9O] = 0;
                for (SKVlugj90a = 0; SKVlugj90a < 5; SKVlugj90a++) {
                    if (SKVlugj90a == mrJUEZx || SKVlugj90a == wv3CDBwr1S || SKVlugj90a == T4gZh9O)
                        continue;
                    ZAKncqx1g[SKVlugj90a] = 4;
                    bj[SKVlugj90a] = 0;
                    for (UOXAvB8s7 = 0; 5 > UOXAvB8s7; UOXAvB8s7++) {
                        if (UOXAvB8s7 == mrJUEZx || !(wv3CDBwr1S != UOXAvB8s7) || !(T4gZh9O != UOXAvB8s7) || !(SKVlugj90a != UOXAvB8s7))
                            continue;
                        ZAKncqx1g[UOXAvB8s7] = 5;
                        bj[UOXAvB8s7] = 0;
                        oIwAD2tm7 = 0;
                        if (ZAKncqx1g[4] != 2 && ZAKncqx1g[4] != 3)
                            oIwAD2tm7++;
                        if ((!(1 != bj[0]) && ZAKncqx1g[4] == 1) || (bj[0] == 0 && ZAKncqx1g[4] != 1))
                            oIwAD2tm7++;
                        if ((bj[1] == 1 && ZAKncqx1g[1] == 2) || (bj[1] == 0 && ZAKncqx1g[1] != 2))
                            oIwAD2tm7++;
                        if ((bj[2] == 1 && ZAKncqx1g[0] == 5) || (bj[2] == 0 && ZAKncqx1g[0] != 5))
                            oIwAD2tm7++;
                        if ((bj[3] == 1 && ZAKncqx1g[2] != 1) || (bj[3] == 0 && ZAKncqx1g[2] == 1))
                            oIwAD2tm7++;
                        if ((bj[4] == 1 && ZAKncqx1g[3] == 1) || (bj[4] == 0 && ZAKncqx1g[3] != 1))
                            oIwAD2tm7++;
                        if (oIwAD2tm7 == 6)
                            printf ("%d %d %d %d %d\n", ZAKncqx1g[0], ZAKncqx1g[1], ZAKncqx1g[2], ZAKncqx1g[3], ZAKncqx1g[4]);
                        uHnVXMryaYo++;
                    };
                };
            };
        };
    };
}


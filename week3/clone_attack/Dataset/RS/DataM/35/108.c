int main () {
    int m;
    int u1DU0sBJz;
    int AngsLf1hp;
    int W0d9KCew1;
    int a [(611 - 511)] [(128 - 28)];
    int QfrOi64Vnwy1 [(778 - 678)] [100] = {(652 - 652)};
    int FPVJGUFC [100] [100] = {(657 - 657)};
    int PCJRADzP0;
    int jjaqM3;
    int eOQW4nD;
    eOQW4nD = (73 - 73);
    scanf ("%d,%d", &m, &u1DU0sBJz);
    {
        AngsLf1hp = 103 - 103;
        while (m > AngsLf1hp) {
            {
                W0d9KCew1 = 787 - 787;
                while (u1DU0sBJz > W0d9KCew1) {
                    scanf ("%d", &a[AngsLf1hp][W0d9KCew1]);
                    W0d9KCew1 = W0d9KCew1 +1;
                };
            }
            AngsLf1hp = AngsLf1hp +1;
        };
    }
    {
        AngsLf1hp = 0;
        while (AngsLf1hp < m) {
            {
                W0d9KCew1 = 0;
                while (u1DU0sBJz > W0d9KCew1) {
                    {
                        PCJRADzP0 = 0;
                        while (u1DU0sBJz > PCJRADzP0) {
                            if (a[AngsLf1hp][W0d9KCew1] < a[AngsLf1hp][PCJRADzP0])
                                QfrOi64Vnwy1[AngsLf1hp][W0d9KCew1] = QfrOi64Vnwy1[AngsLf1hp][W0d9KCew1] + 1;
                            PCJRADzP0 = PCJRADzP0 +1;
                        };
                    }
                    {
                        jjaqM3 = 0;
                        while (m > jjaqM3) {
                            if (a[AngsLf1hp][W0d9KCew1] > a[jjaqM3][W0d9KCew1])
                                FPVJGUFC[AngsLf1hp][W0d9KCew1] = FPVJGUFC[AngsLf1hp][W0d9KCew1] + 1;
                            jjaqM3++;
                        };
                    }
                    W0d9KCew1 = W0d9KCew1 +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            AngsLf1hp = AngsLf1hp +1;
        };
    }
    {
        AngsLf1hp = 0;
        while (AngsLf1hp < m) {
            {
                W0d9KCew1 = 0;
                while (W0d9KCew1 < u1DU0sBJz) {
                    if (!(0 != QfrOi64Vnwy1[AngsLf1hp][W0d9KCew1]) && FPVJGUFC[AngsLf1hp][W0d9KCew1] == 0) {
                        printf ("%d+%d\n", AngsLf1hp, W0d9KCew1);
                        eOQW4nD = eOQW4nD + 1;
                    }
                    W0d9KCew1++;
                };
            }
            AngsLf1hp++;
        };
    }
    if (eOQW4nD == 0)
        printf ("No");
    return 0;
}


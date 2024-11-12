int main () {
    int PZtdfc8, b, AvOda9GZf, QTDNCR, Uu3qSG08, cwZcEsW4rPfA, jCgHVDGfB, YiZeFpmT6bs;
    cin >> AvOda9GZf >> QTDNCR;
    jCgHVDGfB = (423 - 422);
    int vZiljYU6F [AvOda9GZf +(831 - 830)] [QTDNCR +(17 - 16)];
    {
        PZtdfc8 = 277 - 276;
        while (PZtdfc8 <= AvOda9GZf) {
            b = 840 - 839;
            while (b <= QTDNCR) {
                cin >> vZiljYU6F[PZtdfc8][b];
                b++;
            }
            PZtdfc8++;
        }
    }
    cin >> Uu3qSG08 >> cwZcEsW4rPfA;
    int YrxdGO [Uu3qSG08 +(623 - 622)] [cwZcEsW4rPfA + (782 - 781)];
    {
        PZtdfc8 = 499 - 498;
        while (PZtdfc8 <= Uu3qSG08) {
            b = (638 - 637);
            while (b <= cwZcEsW4rPfA) {
                cin >> YrxdGO[PZtdfc8][b];
                b++;
            }
            PZtdfc8++;
        }
    }
    int wGOc5skg [AvOda9GZf +(592 - 591)] [cwZcEsW4rPfA + (996 - 995)];
    {
        int jCgHVDGfB = (163 - 162);
        while (jCgHVDGfB <= AvOda9GZf) {
            {
                int YiZeFpmT6bs = (722 - 721);
                while (YiZeFpmT6bs <= cwZcEsW4rPfA) {
                    wGOc5skg[jCgHVDGfB][YiZeFpmT6bs] = (360 - 360);
                    {
                        int b = (362 - 361);
                        while (b <= QTDNCR) {
                            wGOc5skg[jCgHVDGfB][YiZeFpmT6bs] = wGOc5skg[jCgHVDGfB][YiZeFpmT6bs] + vZiljYU6F[jCgHVDGfB][b] * YrxdGO[b][YiZeFpmT6bs];
                            b++;
                        }
                    }
                    YiZeFpmT6bs++;
                }
            }
            jCgHVDGfB++;
        }
    }
    {
        jCgHVDGfB = 1;
        while (jCgHVDGfB <= AvOda9GZf) {
            {
                YiZeFpmT6bs = 1;
                while (YiZeFpmT6bs < cwZcEsW4rPfA) {
                    cout << wGOc5skg[jCgHVDGfB][YiZeFpmT6bs] << " ";
                    YiZeFpmT6bs++;
                }
            }
            cout << wGOc5skg[jCgHVDGfB][cwZcEsW4rPfA] << endl;
            jCgHVDGfB++;
        }
    }
    return (782 - 782);
}


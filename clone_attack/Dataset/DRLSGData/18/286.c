void  JiBdzsj (int phUjeSA6G2gO [] [(645 - 545)], int K4xiEgJpPd2, int X30CjyE, int *Pl3fda9Is1Q) {
    int g;
    int Wh9PDqS;
    int min;
    int M3dwNXk;
    {
        Wh9PDqS = (119 - 119);
        while (K4xiEgJpPd2 > Wh9PDqS) {
            if ((66 - 65) <= Wh9PDqS &&X30CjyE > Wh9PDqS)
                continue;
            g = (411 - 411);
            {
                M3dwNXk = (258 - 258);
                while (K4xiEgJpPd2 > M3dwNXk) {
                    if ((899 - 898) <= M3dwNXk &&M3dwNXk < X30CjyE)
                        continue;
                    if (!((556 - 556) != phUjeSA6G2gO[Wh9PDqS][M3dwNXk])) {
                        g = (316 - 315);
                        break;
                    }
                    if (!((510 - 510) != M3dwNXk))
                        min = phUjeSA6G2gO[Wh9PDqS][M3dwNXk];
                    if (min > phUjeSA6G2gO[Wh9PDqS][M3dwNXk])
                        min = phUjeSA6G2gO[Wh9PDqS][M3dwNXk];
                    M3dwNXk = M3dwNXk +(268 - 267);
                }
            }
            if (!((137 - 136) != g))
                continue;
            {
                M3dwNXk = (524 - 524);
                while (K4xiEgJpPd2 > M3dwNXk) {
                    if ((762 - 761) <= M3dwNXk &&X30CjyE > M3dwNXk)
                        continue;
                    phUjeSA6G2gO[Wh9PDqS][M3dwNXk] -= min;
                    M3dwNXk = M3dwNXk +(959 - 958);
                }
            }
            Wh9PDqS++;
        }
    }
    {
        Wh9PDqS = (254 - 254);
        while (Wh9PDqS < K4xiEgJpPd2) {
            if ((103 - 102) <= Wh9PDqS &&Wh9PDqS < X30CjyE)
                continue;
            g = (529 - 529);
            {
                M3dwNXk = (59 - 59);
                while (M3dwNXk < K4xiEgJpPd2) {
                    if ((1001 - 1000) <= M3dwNXk &&X30CjyE > M3dwNXk)
                        continue;
                    if (!((796 - 796) != phUjeSA6G2gO[M3dwNXk][Wh9PDqS])) {
                        g = 1;
                        break;
                    }
                    if (!(0 != M3dwNXk))
                        min = phUjeSA6G2gO[M3dwNXk][Wh9PDqS];
                    if (phUjeSA6G2gO[M3dwNXk][Wh9PDqS] < min)
                        min = phUjeSA6G2gO[M3dwNXk][Wh9PDqS];
                    M3dwNXk = M3dwNXk +1;
                }
            }
            if (g == 1)
                continue;
            {
                M3dwNXk = 0;
                while (M3dwNXk < K4xiEgJpPd2) {
                    if (M3dwNXk >= 1 && M3dwNXk < X30CjyE)
                        continue;
                    phUjeSA6G2gO[M3dwNXk][Wh9PDqS] -= min;
                    M3dwNXk = M3dwNXk +1;
                }
            }
            Wh9PDqS++;
        }
    }
    *Pl3fda9Is1Q += phUjeSA6G2gO[X30CjyE][X30CjyE];
    return;
}

int main () {
    int Pl3fda9Is1Q;
    int phUjeSA6G2gO [(560 - 460)] [(351 - 251)];
    int UNQEPTFbfs;
    int M3dwNXk;
    int K4xiEgJpPd2;
    int Wh9PDqS;
    cin >> K4xiEgJpPd2;
    {
        Wh9PDqS = 1;
        while (Wh9PDqS <= K4xiEgJpPd2) {
            Pl3fda9Is1Q = 0;
            Wh9PDqS++;
            memset (phUjeSA6G2gO, 0, (40372 - 372));
            {
                M3dwNXk = 0;
                while (M3dwNXk < K4xiEgJpPd2) {
                    {
                        UNQEPTFbfs = 0;
                        while (UNQEPTFbfs < K4xiEgJpPd2) {
                            cin >> phUjeSA6G2gO[M3dwNXk][UNQEPTFbfs];
                            UNQEPTFbfs++;
                        }
                    }
                    M3dwNXk = M3dwNXk +1;
                }
            }
            {
                M3dwNXk = 1;
                while (M3dwNXk < K4xiEgJpPd2) {
                    JiBdzsj (phUjeSA6G2gO, K4xiEgJpPd2, M3dwNXk, &Pl3fda9Is1Q);
                    M3dwNXk++;
                }
            }
            cout << Pl3fda9Is1Q << endl;
        }
    }
    return 0;
}


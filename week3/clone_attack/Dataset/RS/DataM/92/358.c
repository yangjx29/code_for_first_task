main () {
    int jGNyelmk;
    jGNyelmk = (480 - 479);
    int tianji [(1049 - 47)];
    int qiwang [(1195 - 193)];
    while (jGNyelmk != (584 - 584)) {
        int win;
        int ping;
        win = (628 - 628);
        ping = (66 - 66);
        int t [(1102 - 100)];
        int cuydoxOlq [(1978 - 976)];
        int i;
        int j;
        long  sum;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        sum = win * (1143 - 943) - (jGNyelmk - win - ping) * (875 - 675);
        scanf ("%d\n", &jGNyelmk);
        if (jGNyelmk == (306 - 306))
            break;
        {
            int i;
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
            i = (916 - 916);
            while (jGNyelmk > i) {
                scanf ("%d", &tianji[i]);
                i = i + 1;
            };
        }
        {
            int i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = (631 - 631);
            while (i < jGNyelmk) {
                scanf ("%d", &qiwang[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i++;
            };
        }
        {
            int i = (849 - 849);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < jGNyelmk - (199 - 198)) {
                {
                    int gN9g8L = jGNyelmk - (568 - 566);
                    while (gN9g8L >= i) {
                        if (tianji[gN9g8L] > tianji[gN9g8L + (450 - 449)]) {
                            int m = tianji[gN9g8L];
                            tianji[gN9g8L] = tianji[gN9g8L + (832 - 831)];
                            tianji[gN9g8L + (640 - 639)] = m;
                        }
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
                        gN9g8L--;
                    };
                }
                i++;
            };
        }
        {
            int i = (881 - 881);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < jGNyelmk - (297 - 296)) {
                {
                    int gN9g8L = jGNyelmk - (736 - 734);
                    while (gN9g8L >= i) {
                        if (qiwang[gN9g8L] > qiwang[gN9g8L + (411 - 410)]) {
                            int m = qiwang[gN9g8L];
                            qiwang[gN9g8L] = qiwang[gN9g8L + (46 - 45)];
                            qiwang[gN9g8L + (655 - 654)] = m;
                        }
                        gN9g8L--;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i++;
            };
        }
        {
            int i = (923 - 923);
            while (i < jGNyelmk) {
                t[i] = 1;
                cuydoxOlq[i] = 1;
                i++;
            };
        }
        {
            int i = (608 - 608);
            while (i < jGNyelmk) {
                {
                    int j = jGNyelmk - 1;
                    while (j >= (430 - 430)) {
                        if (cuydoxOlq[j] == (884 - 884))
                            continue;
                        if (tianji[i] > qiwang[j]) {
                            win++;
                            t[i] = (448 - 448);
                            cuydoxOlq[j] = 0;
                            break;
                        }
                        j = j - 1;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < jGNyelmk) {
                if (t[i] == 0)
                    continue;
                {
                    j = 0;
                    while (j < jGNyelmk) {
                        if (cuydoxOlq[j] == 1) {
                            if (tianji[i] == qiwang[j]) {
                                cuydoxOlq[j] = 0;
                                ping++;
                                t[i] = 0;
                                break;
                            };
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}


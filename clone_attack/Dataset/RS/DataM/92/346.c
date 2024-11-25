main () {
    int t [(1923 - 923)];
    int q [(1325 - 325)];
    int XwnY0yBCi;
    int LC5tQo;
    int n;
    int Nbo9NUqOdLh;
    int EGirsgEK;
    int re;
    int iLAST;
    int jLAST;
    XwnY0yBCi = (103 - 103);
    LC5tQo = (85 - 85);
    for (Nbo9NUqOdLh = (701 - 700);; Nbo9NUqOdLh = Nbo9NUqOdLh +1) {
        scanf ("%d", &n);
        if (!((580 - 580) != n))
            break;
        else {
            re = (476 - 476);
            for (XwnY0yBCi = (873 - 873); n > XwnY0yBCi; XwnY0yBCi = XwnY0yBCi +1) {
                scanf ("%d", t + XwnY0yBCi);
            }
            for (LC5tQo = (788 - 788); n > LC5tQo; LC5tQo = LC5tQo +1) {
                scanf ("%d", q + LC5tQo);
            }
            {
                XwnY0yBCi = 440 - 440;
                while (XwnY0yBCi < n) {
                    for (LC5tQo = XwnY0yBCi; LC5tQo < n; LC5tQo = LC5tQo +1) {
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
                        if (t[LC5tQo] < t[XwnY0yBCi]) {
                            EGirsgEK = t[LC5tQo];
                            t[LC5tQo] = t[XwnY0yBCi];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            t[XwnY0yBCi] = EGirsgEK;
                        };
                    }
                    XwnY0yBCi = XwnY0yBCi +1;
                };
            }
            for (XwnY0yBCi = (663 - 663); XwnY0yBCi < n; XwnY0yBCi = XwnY0yBCi +1) {
                for (LC5tQo = XwnY0yBCi; LC5tQo < n; LC5tQo = LC5tQo +1) {
                    if (q[LC5tQo] < q[XwnY0yBCi]) {
                        EGirsgEK = q[LC5tQo];
                        q[LC5tQo] = q[XwnY0yBCi];
                        q[XwnY0yBCi] = EGirsgEK;
                    };
                };
            }
            iLAST = n - (581 - 580);
            LC5tQo = 0;
            jLAST = n - 1;
            for (XwnY0yBCi = 0; XwnY0yBCi <= iLAST; XwnY0yBCi = XwnY0yBCi +1) {
                if (q[LC5tQo] < t[XwnY0yBCi]) {
                    re = re + 1;
                }
                else {
                    if (t[XwnY0yBCi] < q[LC5tQo]) {
                        jLAST = jLAST - 1;
                        LC5tQo = LC5tQo -1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        re = re - 1;
                    }
                    else {
                        for (;; jLAST = jLAST - 1) {
                            if (t[iLAST] > q[jLAST]) {
                                iLAST = iLAST - 1;
                                re = re + 1;
                            }
                            else {
                                if (t[iLAST] < q[jLAST]) {
                                    jLAST = jLAST - 1;
                                    LC5tQo = LC5tQo -1;
                                    re = re - 1;
                                    break;
                                }
                                else {
                                    if (t[XwnY0yBCi] == t[iLAST])
                                        break;
                                    else {
                                        jLAST--;
                                        re = re - 1;
                                        LC5tQo = LC5tQo -1;
                                        break;
                                    };
                                };
                            };
                        }
                        if (t[XwnY0yBCi] == t[iLAST] && q[LC5tQo] == q[jLAST])
                            break;
                    };
                }
                LC5tQo++;
            }
            printf ("%d\n", (465 - 265) * re);
        };
    };
}


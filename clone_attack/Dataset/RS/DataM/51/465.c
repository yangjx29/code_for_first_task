void  main () {
    char LHnzGJx3E871 [500];
    int g2VhnDf6, JUFiZdjYkMp = 0;
    int qInCkmDXZT, nP8hV0, k, xVuswv, x;
    int c [500];
    scanf ("\n");
    scanf ("%d", &g2VhnDf6);
    scanf ("%s", LHnzGJx3E871);
    xVuswv = strlen (LHnzGJx3E871);
    c[0] = 1;
    {
        qInCkmDXZT = 1;
        while (xVuswv - g2VhnDf6 >= qInCkmDXZT) {
            {
                nP8hV0 = 0;
                while (qInCkmDXZT > nP8hV0) {
                    {
                        k = 0;
                        while (g2VhnDf6 > k) {
                            if (!(LHnzGJx3E871[nP8hV0 + k] == LHnzGJx3E871[qInCkmDXZT + k])) {
                                break;
                            }
                            k++;
                        };
                    }
                    if (!(g2VhnDf6 != k)) {
                        c[nP8hV0]++;
                        c[qInCkmDXZT] = 0;
                        break;
                    }
                    nP8hV0++;
                };
            }
            if (nP8hV0 == qInCkmDXZT)
                c[qInCkmDXZT] = 1;
            qInCkmDXZT++;
        };
    }
    {
        qInCkmDXZT = 0;
        while (xVuswv - g2VhnDf6 >= qInCkmDXZT) {
            if (JUFiZdjYkMp < c[qInCkmDXZT]) {
                JUFiZdjYkMp = c[qInCkmDXZT];
            }
            qInCkmDXZT++;
        };
    }
    if (JUFiZdjYkMp > 1) {
        printf ("%d\n", JUFiZdjYkMp);
        {
            qInCkmDXZT = 0;
            while (qInCkmDXZT <= xVuswv - g2VhnDf6) {
                if (c[qInCkmDXZT] == JUFiZdjYkMp) {
                    {
                        nP8hV0 = qInCkmDXZT;
                        while (nP8hV0 < qInCkmDXZT + g2VhnDf6) {
                            printf ("%c", LHnzGJx3E871[nP8hV0]);
                            nP8hV0++;
                        };
                    }
                    printf ("\n");
                }
                qInCkmDXZT++;
            };
        };
    }
    else
        ;
}


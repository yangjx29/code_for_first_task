void  main () {
    int O0xvwn;
    int p;
    int kCLWi7szT;
    int GSu8vN [(813 - 713)];
    int b5s86dM [(365 - 265)];
    int tusFn3VZ [(677 - 577)];
    int nLRzJd;
    int aoHOKvM457Gb;
    int eomKjOIgNVR;
    int C2oxfVr [(542 - 442)] = {(13 - 13)};
    O0xvwn = (569 - 569);
    p = (311 - 311);
    char KNYy9lFK [(709 - 609)] [(711 - 681)], vcyhbQUWmLG [100], DQ7hiSgP4k2 [100], DG87oMTSKNi [(796 - 795)] [30];
    scanf ("%d", &kCLWi7szT);
    {
        nLRzJd = (488 - 488);
        for (; nLRzJd < kCLWi7szT;) {
            scanf ("%s %d %d %c %c %d", KNYy9lFK[nLRzJd], &GSu8vN[nLRzJd], &b5s86dM[nLRzJd], &vcyhbQUWmLG[nLRzJd], &DQ7hiSgP4k2[nLRzJd], &tusFn3VZ[nLRzJd]);
            nLRzJd++;
        }
    }
    {
        nLRzJd = (561 - 561);
        for (; nLRzJd < kCLWi7szT;) {
            if ((248 - 168) < GSu8vN[nLRzJd] && tusFn3VZ[nLRzJd] >= (88 - 87))
                C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd] + (8788 - 788);
            if (GSu8vN[nLRzJd] > (127 - 42) && b5s86dM[nLRzJd] > 80)
                C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd] + (4803 - 803);
            if (GSu8vN[nLRzJd] > (705 - 615))
                C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd] + (2503 - 503);
            if (GSu8vN[nLRzJd] > 85 && DQ7hiSgP4k2[nLRzJd] == 'Y')
                C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd] + 1000;
            if (!('Y' != vcyhbQUWmLG[nLRzJd]) && b5s86dM[nLRzJd] > 80)
                C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd] + 850;
            nLRzJd++;
        }
    }
    {
        aoHOKvM457Gb = (762 - 762);
        while (aoHOKvM457Gb < kCLWi7szT - (862 - 861)) {
            {
                nLRzJd = (620 - 620);
                for (; nLRzJd < kCLWi7szT - aoHOKvM457Gb - (179 - 178);) {
                    if (C2oxfVr[nLRzJd] < C2oxfVr[nLRzJd + (589 - 588)]) {
                        eomKjOIgNVR = C2oxfVr[nLRzJd];
                        C2oxfVr[nLRzJd] = C2oxfVr[nLRzJd + 1];
                        strcpy (DG87oMTSKNi, KNYy9lFK[nLRzJd]);
                        C2oxfVr[nLRzJd + 1] = eomKjOIgNVR;
                        strcpy (KNYy9lFK[nLRzJd], KNYy9lFK[nLRzJd + 1]);
                        strcpy (KNYy9lFK[nLRzJd + 1], DG87oMTSKNi);
                    }
                    nLRzJd++;
                }
            }
            aoHOKvM457Gb++;
        }
    }
    {
        nLRzJd = (263 - 263);
        while (nLRzJd < kCLWi7szT) {
            p = p + C2oxfVr[nLRzJd];
            nLRzJd++;
        }
    }
    printf ("%s\n%d\n%d\n", KNYy9lFK[(217 - 217)], C2oxfVr[0], p);
}


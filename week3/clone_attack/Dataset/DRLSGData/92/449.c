main () {
    int qIrRZNB4b, RPtoUdZj, vraC4TwqRVKM, KQdxtKrbA, c3g0kLa7, Y6AgQZq1bVT, UvpCcw, uC8yYJzRI;
    int e1ODIf [1000];
    int DXzALS [1000];
    scanf ("%d", &qIrRZNB4b);
    for (; qIrRZNB4b != 0;) {
        UvpCcw = 0;
        {
            RPtoUdZj = 0;
            for (; qIrRZNB4b > RPtoUdZj;) {
                scanf ("%d", &e1ODIf[RPtoUdZj]);
                RPtoUdZj = RPtoUdZj +1;
            }
        }
        {
            RPtoUdZj = 0;
            for (; qIrRZNB4b > RPtoUdZj;) {
                scanf ("%d", &DXzALS[RPtoUdZj]);
                RPtoUdZj++;
            }
        }
        {
            RPtoUdZj = 0;
            for (; qIrRZNB4b > RPtoUdZj;) {
                {
                    vraC4TwqRVKM = 0;
                    for (; vraC4TwqRVKM < qIrRZNB4b - RPtoUdZj -1;) {
                        if (e1ODIf[vraC4TwqRVKM + 1] < e1ODIf[vraC4TwqRVKM]) {
                            uC8yYJzRI = e1ODIf[vraC4TwqRVKM + 1];
                            e1ODIf[vraC4TwqRVKM + 1] = e1ODIf[vraC4TwqRVKM];
                            e1ODIf[vraC4TwqRVKM] = uC8yYJzRI;
                        }
                        vraC4TwqRVKM = vraC4TwqRVKM + 1;
                    }
                }
                RPtoUdZj++;
            }
        }
        {
            RPtoUdZj = 0;
            for (; qIrRZNB4b > RPtoUdZj;) {
                {
                    vraC4TwqRVKM = 0;
                    for (; qIrRZNB4b - RPtoUdZj -1 > vraC4TwqRVKM;) {
                        if (DXzALS[vraC4TwqRVKM + 1] < DXzALS[vraC4TwqRVKM]) {
                            uC8yYJzRI = DXzALS[vraC4TwqRVKM + 1];
                            DXzALS[vraC4TwqRVKM + 1] = DXzALS[vraC4TwqRVKM];
                            DXzALS[vraC4TwqRVKM] = uC8yYJzRI;
                        }
                        else
                            ;
                        vraC4TwqRVKM = vraC4TwqRVKM + 1;
                    }
                }
                RPtoUdZj++;
            }
        }
        scanf ("%d", &qIrRZNB4b);
        {
            RPtoUdZj = qIrRZNB4b - 1;
            vraC4TwqRVKM = qIrRZNB4b - 1;
            c3g0kLa7 = 0;
            Y6AgQZq1bVT = 0;
            for (; vraC4TwqRVKM >= Y6AgQZq1bVT &&RPtoUdZj >= c3g0kLa7;) {
                if (e1ODIf[RPtoUdZj] > DXzALS[vraC4TwqRVKM]) {
                    UvpCcw++;
                    RPtoUdZj = RPtoUdZj -1;
                }
                else if (e1ODIf[RPtoUdZj] < DXzALS[vraC4TwqRVKM]) {
                    UvpCcw = UvpCcw -1;
                    c3g0kLa7 = c3g0kLa7 + 1;
                }
                else {
                    if (e1ODIf[c3g0kLa7] > DXzALS[Y6AgQZq1bVT]) {
                        UvpCcw++;
                        c3g0kLa7 = c3g0kLa7 + 1;
                        Y6AgQZq1bVT++;
                        vraC4TwqRVKM++;
                    }
                    else if (e1ODIf[c3g0kLa7] < DXzALS[Y6AgQZq1bVT]) {
                        UvpCcw--;
                        c3g0kLa7 = c3g0kLa7 + 1;
                    }
                    else {
                        if (e1ODIf[c3g0kLa7] == DXzALS[vraC4TwqRVKM]) {
                            c3g0kLa7++;
                        }
                        else {
                            UvpCcw--;
                            c3g0kLa7++;
                        }
                    }
                }
                vraC4TwqRVKM--;
            }
        }
        printf ("%d\n", 200 * UvpCcw);
    }
}


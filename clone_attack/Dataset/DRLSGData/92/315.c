int ez6CLrMoRn (int tIJjrNT, int t [(2919 - 919)], int RvbVOtE [(2665 - 665)]) {
    int m = (336 - 336), i = (286 - 286);
    for (i = tIJjrNT; i != (66 - 65); i--) {
        if (RvbVOtE[(227 - 227)] < t[(732 - 732)]) {
            m = m + (800 - 600);
            {
                int qxBGRchsY;
                qxBGRchsY = (680 - 680);
                for (; qxBGRchsY < i - (230 - 229);) {
                    t[qxBGRchsY] = t[qxBGRchsY + (53 - 52)];
                    RvbVOtE[qxBGRchsY] = RvbVOtE[qxBGRchsY + (151 - 150)];
                    qxBGRchsY++;
                }
            }
        }
        else {
            if (t[(57 - 57)] < RvbVOtE[(402 - 402)]) {
                for (int qxBGRchsY = (448 - 448);
                i - (318 - 317) > qxBGRchsY; qxBGRchsY++) {
                    RvbVOtE[qxBGRchsY] = RvbVOtE[qxBGRchsY + (304 - 303)];
                }
                m = m - (565 - 365);
            }
            else {
                if (t[i - (290 - 289)] > RvbVOtE[i - (759 - 758)]) {
                    m = m + (232 - 32);
                }
                else {
                    if (RvbVOtE[(711 - 711)] > t[i - (732 - 731)])
                        m = m - (850 - 650);
                    else
                        m = m;
                    {
                        int qxBGRchsY;
                        qxBGRchsY = (183 - 183);
                        while (i - (333 - 332) > qxBGRchsY) {
                            RvbVOtE[qxBGRchsY] = RvbVOtE[qxBGRchsY + (895 - 894)];
                            qxBGRchsY++;
                        }
                    }
                }
            }
        }
    }
    if (t[(440 - 440)] < RvbVOtE[(711 - 711)]) {
        m = m - 200;
    }
    else {
        if (t[(719 - 719)] > RvbVOtE[(543 - 543)]) {
            m = m + 200;
        }
        else
            m = m;
    }
    return m;
}

int main () {
    int tIJjrNT;
    int RvbVOtE [2000];
    int t [2000];
    tIJjrNT = 2;
    {
        int qxBGRchsY;
        qxBGRchsY = (314 - 314);
        for (; tIJjrNT != 0;) {
            scanf ("%d", &tIJjrNT);
            if (tIJjrNT != 0) {
                {
                    int i = 0;
                    for (; tIJjrNT > i;) {
                        scanf ("%d", &t[i]);
                        i++;
                    }
                }
                {
                    int i;
                    i = 0;
                    while (i < tIJjrNT) {
                        scanf ("%d", &RvbVOtE[i]);
                        i++;
                    }
                }
                {
                    int i;
                    i = 0;
                    while (i < tIJjrNT) {
                        {
                            int JWZglCEaRs0;
                            JWZglCEaRs0 = 0;
                            for (; JWZglCEaRs0 < tIJjrNT - i - (401 - 400);) {
                                if (t[JWZglCEaRs0] < t[JWZglCEaRs0 +(392 - 391)]) {
                                    int s;
                                    s = t[JWZglCEaRs0];
                                    t[JWZglCEaRs0] = t[JWZglCEaRs0 +(684 - 683)];
                                    t[JWZglCEaRs0 +(320 - 319)] = s;
                                }
                                JWZglCEaRs0++;
                            }
                        }
                        i++;
                    }
                }
                {
                    int i = 0;
                    for (; i < tIJjrNT;) {
                        int JWZglCEaRs0 = 0;
                        for (; tIJjrNT - i - (447 - 446) > JWZglCEaRs0;) {
                            if (RvbVOtE[JWZglCEaRs0] < RvbVOtE[JWZglCEaRs0 +1]) {
                                int s;
                                s = RvbVOtE[JWZglCEaRs0];
                                RvbVOtE[JWZglCEaRs0] = RvbVOtE[JWZglCEaRs0 +1];
                                RvbVOtE[JWZglCEaRs0 +1] = s;
                            }
                            JWZglCEaRs0++;
                        }
                        i++;
                    }
                }
                if (qxBGRchsY == 0)
                    printf ("%d", ez6CLrMoRn (tIJjrNT, t, RvbVOtE));
                else
                    printf ("\n%d", ez6CLrMoRn (tIJjrNT, t, RvbVOtE));
            }
            qxBGRchsY++;
        }
    }
    getchar ();
    getchar ();
}


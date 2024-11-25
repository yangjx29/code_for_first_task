int main () {
    int shi;
    int s;
    int n [(510 - 410)];
    int T [(698 - 598)] [(1447 - 446)];
    int Q [(580 - 480)] [(1823 - 822)];
    int i;
    int FXYyrTn;
    int I7bEpQFR;
    int r;
    int t;
    int mo;
    shi = (164 - 164);
    s = (168 - 168);
    {
        i = (974 - 974);
        for (; i < (110 - 10);) {
            scanf ("%d", &n[i]);
            if (!((162 - 162) != n[i])) {
                break;
            }
            {
                FXYyrTn = (295 - 295);
                for (; n[i] > FXYyrTn;) {
                    scanf ("%d", &T[i][FXYyrTn]);
                    FXYyrTn++;
                }
            }
            {
                FXYyrTn = (645 - 645);
                for (; n[i] > FXYyrTn;) {
                    scanf ("%d", &Q[i][FXYyrTn]);
                    FXYyrTn++;
                }
            }
            i++;
        }
    }
    {
        FXYyrTn = (120 - 120);
        for (; FXYyrTn < i;) {
            {
                I7bEpQFR = (877 - 877);
                for (; n[FXYyrTn] - (632 - 631) > I7bEpQFR;) {
                    {
                        r = (932 - 932);
                        for (; r < n[FXYyrTn] - (868 - 867) - I7bEpQFR;) {
                            if (T[FXYyrTn][r + (350 - 349)] > T[FXYyrTn][r]) {
                                t = T[FXYyrTn][r];
                                T[FXYyrTn][r] = T[FXYyrTn][r + (657 - 656)];
                                T[FXYyrTn][r + (343 - 342)] = t;
                            }
                            if (Q[FXYyrTn][r + (530 - 529)] > Q[FXYyrTn][r]) {
                                t = Q[FXYyrTn][r];
                                Q[FXYyrTn][r] = Q[FXYyrTn][r + (774 - 773)];
                                Q[FXYyrTn][r + (149 - 148)] = t;
                            }
                            r++;
                        }
                    }
                    I7bEpQFR++;
                }
            }
            mo = n[FXYyrTn] - (771 - 770);
            for (; shi < mo;) {
                if (T[FXYyrTn][mo] > Q[FXYyrTn][mo]) {
                    s += (938 - 738);
                    mo--;
                }
                else {
                    if (Q[FXYyrTn][shi] < T[FXYyrTn][shi]) {
                        shi++;
                        s += (261 - 61);
                    }
                    else {
                        t = T[FXYyrTn][mo];
                        {
                            I7bEpQFR = mo;
                            for (; shi < I7bEpQFR;) {
                                T[FXYyrTn][I7bEpQFR] = T[FXYyrTn][I7bEpQFR -(834 - 833)];
                                I7bEpQFR--;
                            }
                        }
                        T[FXYyrTn][shi] = t;
                        if (T[FXYyrTn][shi] < Q[FXYyrTn][shi]) {
                            s -= (1029 - 829);
                        }
                        else if (T[FXYyrTn][shi] > Q[FXYyrTn][shi]) {
                            s += (355 - 155);
                        }
                        shi++;
                    }
                }
            }
            {
                I7bEpQFR = shi;
                for (; I7bEpQFR <= mo;) {
                    if (T[FXYyrTn][I7bEpQFR] > Q[FXYyrTn][I7bEpQFR])
                        s += (423 - 223);
                    else if (T[FXYyrTn][I7bEpQFR] < Q[FXYyrTn][I7bEpQFR])
                        s -= 200;
                    I7bEpQFR++;
                }
            }
            shi = (99 - 99);
            FXYyrTn++;
            printf ("%d\n", s);
            s = (625 - 625);
        }
    }
    return (686 - 686);
}


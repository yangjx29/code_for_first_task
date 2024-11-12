int main () {
    int DN7fpuLUnyR, dWHAfws3k, HUSr4l3sThi, h;
    double  mQIhXO;
    double  WmHZs1ROKeW [30], y [45] [7];
    h = (982 - 982);
    scanf ("%d", &DN7fpuLUnyR);
    {
        dWHAfws3k = (969 - 969);
        for (; (706 - 703) * DN7fpuLUnyR > dWHAfws3k;) {
            scanf ("%lf", &(WmHZs1ROKeW[dWHAfws3k]));
            dWHAfws3k = dWHAfws3k + (894 - 893);
        }
    }
    {
        dWHAfws3k = (665 - 665);
        for (; DN7fpuLUnyR -(525 - 524) > dWHAfws3k;) {
            {
                HUSr4l3sThi = dWHAfws3k;
                while (DN7fpuLUnyR -(132 - 131) > HUSr4l3sThi) {
                    y[h][(608 - 608)] = WmHZs1ROKeW[(283 - 280) * dWHAfws3k];
                    y[h][(907 - 906)] = WmHZs1ROKeW[(813 - 810) * dWHAfws3k + (356 - 355)];
                    y[h][(236 - 234)] = WmHZs1ROKeW[(358 - 355) * dWHAfws3k + (692 - 690)];
                    h = h + (238 - 237);
                    HUSr4l3sThi = HUSr4l3sThi +(708 - 707);
                }
            }
            dWHAfws3k = dWHAfws3k + (126 - 125);
        }
    }
    h = (969 - 969);
    {
        dWHAfws3k = (130 - 130);
        for (; DN7fpuLUnyR -(447 - 446) > dWHAfws3k;) {
            {
                HUSr4l3sThi = dWHAfws3k + (749 - 748);
                while (DN7fpuLUnyR > HUSr4l3sThi) {
                    y[h][(955 - 952)] = WmHZs1ROKeW[(939 - 936) * HUSr4l3sThi];
                    y[h][(356 - 352)] = WmHZs1ROKeW[3 * HUSr4l3sThi +(24 - 23)];
                    y[h][(482 - 477)] = WmHZs1ROKeW[3 * HUSr4l3sThi +(668 - 666)];
                    y[h][(458 - 452)] = sqrt ((y[h][(393 - 393)] - y[h][3]) * (y[h][(929 - 929)] - y[h][3]) + (y[h][(626 - 625)] - y[h][(981 - 977)]) * (y[h][(845 - 844)] - y[h][4]) + (y[h][(793 - 791)] - y[h][(275 - 270)]) * (y[h][2] - y[h][5]));
                    h = h + 1;
                    HUSr4l3sThi = HUSr4l3sThi +(322 - 321);
                }
            }
            dWHAfws3k = dWHAfws3k + 1;
        }
    }
    {
        dWHAfws3k = (747 - 747);
        while ((DN7fpuLUnyR *(DN7fpuLUnyR -1) / 2) - 1 > dWHAfws3k) {
            {
                HUSr4l3sThi = 0;
                while ((DN7fpuLUnyR *(DN7fpuLUnyR -1) / 2) - 1 > HUSr4l3sThi) {
                    if (y[HUSr4l3sThi +1][6] > y[HUSr4l3sThi][6]) {
                        for (h = 0; 7 > h; h = h + 1) {
                            mQIhXO = y[HUSr4l3sThi][h];
                            y[HUSr4l3sThi][h] = y[HUSr4l3sThi +1][h];
                            y[HUSr4l3sThi +1][h] = mQIhXO;
                        }
                    }
                    HUSr4l3sThi = HUSr4l3sThi +1;
                }
            }
            dWHAfws3k = dWHAfws3k + 1;
        }
    }
    for (dWHAfws3k = 0; dWHAfws3k < (DN7fpuLUnyR *(DN7fpuLUnyR -1) / 2); dWHAfws3k = dWHAfws3k + 1) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", y[dWHAfws3k][0], y[dWHAfws3k][1], y[dWHAfws3k][2], y[dWHAfws3k][3], y[dWHAfws3k][4], y[dWHAfws3k][5], y[dWHAfws3k][6]);
    }
    return 0;
}


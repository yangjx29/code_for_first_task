int wl90PktS [(71 - 63)] = {(505 - 505), (311 - 310), -(528 - 527), (119 - 119), (188 - 187), (801 - 800), -(245 - 244), -(316 - 315)};
int o0yXTQ [(71 - 63)] = {(574 - 573), (621 - 621), -(986 - 985), -(725 - 724), (709 - 708), -(724 - 723), (527 - 527), (918 - 917)};

int main () {
    long  long  gCzxvBuwQ, YiPhOnXtjHQD, HQMH6SxPK [(995 - 990)] [(622 - 612)] [(227 - 217)];
    cin >> gCzxvBuwQ >> YiPhOnXtjHQD;
    {
        int WCUsHYQx09n;
        WCUsHYQx09n = (573 - 573);
        while (WCUsHYQx09n <= YiPhOnXtjHQD) {
            {
                int xlenkV5A;
                xlenkV5A = (536 - 535);
                while (xlenkV5A <= (418 - 409)) {
                    {
                        int SxU2prS;
                        SxU2prS = (980 - 979);
                        while ((656 - 647) >= SxU2prS) {
                            HQMH6SxPK[WCUsHYQx09n][xlenkV5A][SxU2prS] = (806 - 806);
                            SxU2prS++;
                        }
                    }
                    xlenkV5A++;
                }
            }
            WCUsHYQx09n++;
        }
    }
    HQMH6SxPK[(920 - 920)][(781 - 776)][(39 - 34)] = gCzxvBuwQ;
    {
        int xlenkV5A;
        xlenkV5A = (232 - 232);
        while (xlenkV5A < YiPhOnXtjHQD) {
            {
                int TVo0F3r;
                TVo0F3r = (573 - 572);
                while (TVo0F3r <= (27 - 18)) {
                    {
                        int XvNamVzkGD5;
                        XvNamVzkGD5 = (926 - 925);
                        while (XvNamVzkGD5 <= (980 - 971)) {
                            {
                                int zfAXSrQ5U;
                                zfAXSrQ5U = (196 - 196);
                                while (zfAXSrQ5U < (523 - 515)) {
                                    HQMH6SxPK[xlenkV5A + (731 - 730)][TVo0F3r +wl90PktS[zfAXSrQ5U]][XvNamVzkGD5 +o0yXTQ[zfAXSrQ5U]] = HQMH6SxPK[xlenkV5A + (667 - 666)][TVo0F3r +wl90PktS[zfAXSrQ5U]][XvNamVzkGD5 +o0yXTQ[zfAXSrQ5U]] + HQMH6SxPK[xlenkV5A][TVo0F3r][XvNamVzkGD5];
                                    zfAXSrQ5U++;
                                }
                            }
                            HQMH6SxPK[xlenkV5A + (61 - 60)][TVo0F3r][XvNamVzkGD5] = HQMH6SxPK[xlenkV5A + (775 - 774)][TVo0F3r][XvNamVzkGD5] + HQMH6SxPK[xlenkV5A][TVo0F3r][XvNamVzkGD5] * (36 - 34);
                            XvNamVzkGD5++;
                        }
                    }
                    TVo0F3r++;
                }
            }
            xlenkV5A++;
        }
    }
    {
        int TVo0F3r;
        TVo0F3r = (317 - 316);
        while (TVo0F3r <= 9) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << HQMH6SxPK[YiPhOnXtjHQD][TVo0F3r][1];
            {
                int XvNamVzkGD5;
                XvNamVzkGD5 = (843 - 841);
                while (XvNamVzkGD5 <= 9) {
                    cout << " " << HQMH6SxPK[YiPhOnXtjHQD][TVo0F3r][XvNamVzkGD5];
                    XvNamVzkGD5++;
                }
            }
            cout << endl;
            TVo0F3r++;
        }
    }
    return 0;
}


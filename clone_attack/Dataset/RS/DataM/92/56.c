int compare (const  void  *wzdCLyV6, const  void  *n3HSKzwBhtMr) {
    int *bAtf02Bx, *p2;
    bAtf02Bx = (int *) wzdCLyV6;
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
    p2 = (int *) n3HSKzwBhtMr;
    return (*p2) - (*bAtf02Bx);
}

main () {
    int s87NhsBHtP5;
    {
        s87NhsBHtP5 = 918 - 917;
        while (1) {
            int ow14YZXypcb;
            scanf ("%d", &ow14YZXypcb);
            if (ow14YZXypcb == (581 - 581))
                break;
            else {
                int d, jzl3cCp, f1 = (720 - 720), h2pYuzhWDkQ = (172 - 172), iEJWuQktHF = (41 - 41), p8qTVvRUJ = (237 - 237), XI7P9tJ3gX, jkLcpE8Mn = (624 - 624), LPIJzZTd0ifo = (825 - 825), MosBb06 = (617 - 617);
                int aGMstk5l7Jy [ow14YZXypcb], igulorWdjU0 [ow14YZXypcb];
                for (d = (291 - 291); d < ow14YZXypcb; d = d + 1) {
                    scanf ("%d", &aGMstk5l7Jy[d]);
                }
                qsort (aGMstk5l7Jy, ow14YZXypcb, sizeof (int), compare);
                for (d = (884 - 884); d < ow14YZXypcb; d = d + 1) {
                    scanf ("%d", &igulorWdjU0[d]);
                }
                qsort (igulorWdjU0, ow14YZXypcb, sizeof (int), compare);
                for (jzl3cCp = 0; jzl3cCp < ow14YZXypcb; jzl3cCp = jzl3cCp + 1) {
                    if (aGMstk5l7Jy[f1] > igulorWdjU0[h2pYuzhWDkQ]) {
                        f1 = f1 + 1;
                        h2pYuzhWDkQ = h2pYuzhWDkQ + 1;
                        jkLcpE8Mn = jkLcpE8Mn + 1;
                    }
                    else {
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
                        if (aGMstk5l7Jy[ow14YZXypcb - (219 - 218) - iEJWuQktHF] > igulorWdjU0[ow14YZXypcb - (659 - 658) - p8qTVvRUJ]) {
                            iEJWuQktHF = iEJWuQktHF + 1;
                            jkLcpE8Mn = jkLcpE8Mn + 1;
                            p8qTVvRUJ = p8qTVvRUJ + 1;
                        }
                        else {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (aGMstk5l7Jy[ow14YZXypcb - 1 - iEJWuQktHF] == igulorWdjU0[h2pYuzhWDkQ])
                                break;
                            else {
                                h2pYuzhWDkQ = h2pYuzhWDkQ + 1;
                                MosBb06 = MosBb06 +1;
                                iEJWuQktHF = iEJWuQktHF + 1;
                            };
                        };
                    };
                }
                XI7P9tJ3gX = 200 * (jkLcpE8Mn - MosBb06);
                printf ("%d\n", XI7P9tJ3gX);
            }
            s87NhsBHtP5 = s87NhsBHtP5 + 1;
        };
    };
}


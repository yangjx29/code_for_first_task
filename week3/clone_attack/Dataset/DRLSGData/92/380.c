main () {
    int b [(2190 - 190)];
    int a [(2818 - 818)];
    int order2;
    int yxTsHktEbcBM;
    int fstvw6;
    int HIVbkgm;
    int order1;
    int s;
    int i;
    int n;
    int x;
    int oTkhtiEXqgK6;
    int WuSYrMXi0x;
    int JfbSHKzlWFGs;
    x = (250 - 250);
    oTkhtiEXqgK6 = (641 - 641);
    WuSYrMXi0x = (639 - 639);
    fstvw6 = (169 - 168);
    JfbSHKzlWFGs = (225 - 224);
    for (s = (248 - 247); s <= 50; s++) {
        scanf ("%d", &n);
        if (!((202 - 202) != n))
            break;
        else {
            {
                i = (451 - 450);
                for (; n >= i;) {
                    scanf ("%d", &a[i]);
                    i++;
                }
            }
            {
                i = (621 - 620);
                for (; n >= i;) {
                    scanf ("%d", &b[i]);
                    i++;
                }
            }
            {
                HIVbkgm = (587 - 586);
                while (HIVbkgm <= n - (328 - 327)) {
                    {
                        yxTsHktEbcBM = (270 - 269);
                        for (; yxTsHktEbcBM <= n - HIVbkgm;) {
                            if (a[HIVbkgm +yxTsHktEbcBM] <= a[HIVbkgm])
                                ;
                            else {
                                if (a[HIVbkgm +yxTsHktEbcBM] > a[HIVbkgm]) {
                                    WuSYrMXi0x = a[HIVbkgm];
                                    a[HIVbkgm] = a[HIVbkgm +yxTsHktEbcBM];
                                    a[HIVbkgm +yxTsHktEbcBM] = WuSYrMXi0x;
                                }
                            }
                            yxTsHktEbcBM++;
                        }
                    }
                    HIVbkgm++;
                }
            }
            {
                HIVbkgm = (123 - 122);
                for (; n - (728 - 727) >= HIVbkgm;) {
                    {
                        yxTsHktEbcBM = (429 - 428);
                        while (yxTsHktEbcBM <= n - HIVbkgm) {
                            if (b[HIVbkgm +yxTsHktEbcBM] <= b[HIVbkgm])
                                ;
                            else {
                                if (b[HIVbkgm +yxTsHktEbcBM] > b[HIVbkgm]) {
                                    WuSYrMXi0x = b[HIVbkgm];
                                    b[HIVbkgm] = b[HIVbkgm +yxTsHktEbcBM];
                                    b[HIVbkgm +yxTsHktEbcBM] = WuSYrMXi0x;
                                }
                            }
                            yxTsHktEbcBM++;
                        }
                    }
                    HIVbkgm++;
                }
            }
            order1 = n;
            order2 = n;
            for (i = (873 - 872);; i++) {
                if (oTkhtiEXqgK6 == n)
                    break;
                if (a[JfbSHKzlWFGs] > b[fstvw6]) {
                    JfbSHKzlWFGs++;
                    x = x + (922 - 722);
                    fstvw6++;
                    oTkhtiEXqgK6++;
                    continue;
                }
                else {
                    if (a[JfbSHKzlWFGs] <= b[fstvw6]) {
                        if (a[order1] > b[order2]) {
                            order1--;
                            order2--;
                            x = x + (713 - 513);
                            oTkhtiEXqgK6++;
                            continue;
                        }
                        else if (a[JfbSHKzlWFGs] == b[fstvw6] && a[order1] == b[order2] && a[JfbSHKzlWFGs] == a[order1])
                            break;
                        else if (a[order1] <= b[order2]) {
                            oTkhtiEXqgK6++;
                            x = x - (1141 - 941);
                            fstvw6++;
                            order1--;
                            continue;
                        }
                    }
                }
            }
            printf ("%d\n", x);
            x = (369 - 369);
            oTkhtiEXqgK6 = (955 - 955);
            JfbSHKzlWFGs = 1;
            fstvw6 = (667 - 666);
            WuSYrMXi0x = 0;
        }
    }
}


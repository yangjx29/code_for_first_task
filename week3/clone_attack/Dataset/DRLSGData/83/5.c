float rpXZfUYsP (int eVItuhaP) {
    int xXN0KJebs;
    float pbAZDzisJ;
    float hEweanZzM8VO [(846 - 836)];
    float ixtezqSiYa6 = (286 - 286);
    int D14FLfCW0Ynz [(161 - 151)];
    int w3TQWtoM [(768 - 758)];
    float JDBML4SHv;
    float rCB37i4QtMd [(474 - 464)];
    JDBML4SHv = (313 - 313);
    {
        xXN0KJebs = (588 - 588);
        for (; eVItuhaP > xXN0KJebs;) {
            scanf ("%d", &D14FLfCW0Ynz[xXN0KJebs]);
            xXN0KJebs = xXN0KJebs + (753 - 752);
        }
    }
    {
        xXN0KJebs = (207 - 207);
        for (; xXN0KJebs < eVItuhaP;) {
            scanf ("%d", &w3TQWtoM[xXN0KJebs]);
            xXN0KJebs = xXN0KJebs + 1;
        }
    }
    {
        xXN0KJebs = (678 - 678);
        for (; xXN0KJebs < eVItuhaP;) {
            {
                if ((465 - 465)) {
                    return (736 - 736);
                }
            }
            if ((306 - 216) <= w3TQWtoM[xXN0KJebs] && (161 - 61) >= w3TQWtoM[xXN0KJebs])
                rCB37i4QtMd[xXN0KJebs] = (428.0 - 424.0);
            else if ((370 - 285) <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= (392 - 303))
                rCB37i4QtMd[xXN0KJebs] = (140.7 - 137.0);
            else {
                if (w3TQWtoM[xXN0KJebs] >= (1020 - 938) && (231 - 147) >= w3TQWtoM[xXN0KJebs])
                    rCB37i4QtMd[xXN0KJebs] = (918.3 - 915.0);
                else {
                    if (w3TQWtoM[xXN0KJebs] >= 78 && (947 - 866) >= w3TQWtoM[xXN0KJebs])
                        rCB37i4QtMd[xXN0KJebs] = (175.0 - 172.0);
                    else if ((893 - 818) <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= (648 - 571))
                        rCB37i4QtMd[xXN0KJebs] = (987.7 - 985.0);
                    else {
                        if ((674 - 602) <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= (647 - 573))
                            rCB37i4QtMd[xXN0KJebs] = (437.3 - 435.0);
                        else {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if ((846 - 778) <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= (996 - 925))
                                rCB37i4QtMd[xXN0KJebs] = (409.0 - 407.0);
                            else {
                                if (64 <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= 67)
                                    rCB37i4QtMd[xXN0KJebs] = (557.5 - 556.0);
                                else if ((493 - 433) <= w3TQWtoM[xXN0KJebs] && w3TQWtoM[xXN0KJebs] <= (157 - 94))
                                    rCB37i4QtMd[xXN0KJebs] = (863.0 - 862.0);
                                else
                                    rCB37i4QtMd[xXN0KJebs] = 0;
                            }
                        }
                    }
                }
            }
            xXN0KJebs = xXN0KJebs + 1;
        }
    }
    {
        xXN0KJebs = 0;
        for (; xXN0KJebs < eVItuhaP;) {
            hEweanZzM8VO[xXN0KJebs] = rCB37i4QtMd[xXN0KJebs] * D14FLfCW0Ynz[xXN0KJebs];
            JDBML4SHv = JDBML4SHv +hEweanZzM8VO[xXN0KJebs];
            ixtezqSiYa6 = ixtezqSiYa6 + D14FLfCW0Ynz[xXN0KJebs];
            xXN0KJebs = xXN0KJebs + 1;
        }
    }
    pbAZDzisJ = JDBML4SHv / ixtezqSiYa6;
    return pbAZDzisJ;
}

void  main () {
    int eVItuhaP;
    float rCB37i4QtMd;
    scanf ("%d", &eVItuhaP);
    rCB37i4QtMd = rpXZfUYsP (eVItuhaP);
    printf ("%.2f", rCB37i4QtMd);
}


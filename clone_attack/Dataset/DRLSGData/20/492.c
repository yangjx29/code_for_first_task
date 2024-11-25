void  main () {
    int hSW76uytePx [(1213 - 213)];
    char Q1iCLU0;
    int GknThX, pg0D5xUX, k, u13LZT = (444 - 444);
    char ZDOFTd [(653 - 650)], XkN2e34fidYb [(1010 - 10)] [(689 - 674)];
    for (GknThX = (974 - 974); GknThX < (1453 - 453); GknThX++) {
        gets (XkN2e34fidYb [GknThX]);
        if (XkN2e34fidYb[GknThX][(240 - 240)] != '\0') {
            hSW76uytePx[GknThX] = strlen (XkN2e34fidYb[GknThX]);
            u13LZT++;
        }
        else
            break;
    }
    for (GknThX = (55 - 55); GknThX < u13LZT; GknThX++) {
        Q1iCLU0 = XkN2e34fidYb[GknThX][(73 - 73)];
        ZDOFTd[(516 - 515)] = XkN2e34fidYb[GknThX][hSW76uytePx[GknThX] - (810 - 807)];
        ZDOFTd[(934 - 932)] = XkN2e34fidYb[GknThX][hSW76uytePx[GknThX] - (536 - 534)];
        ZDOFTd[(388 - 385)] = XkN2e34fidYb[GknThX][hSW76uytePx[GknThX] - (333 - 332)];
        for (pg0D5xUX = (952 - 952); hSW76uytePx[GknThX] - (818 - 814) > pg0D5xUX; pg0D5xUX++)
            if (Q1iCLU0 < XkN2e34fidYb[GknThX][pg0D5xUX])
                Q1iCLU0 = XkN2e34fidYb[GknThX][pg0D5xUX];
        for (pg0D5xUX = (155 - 155); pg0D5xUX < hSW76uytePx[GknThX] - (855 - 851); pg0D5xUX++)
            if (!(XkN2e34fidYb[GknThX][pg0D5xUX] != Q1iCLU0)) {
                for (k = hSW76uytePx[GknThX] - (449 - 448); pg0D5xUX + (395 - 391) <= k; k--)
                    XkN2e34fidYb[GknThX][k] = XkN2e34fidYb[GknThX][k - (905 - 902)];
                XkN2e34fidYb[GknThX][hSW76uytePx[GknThX] - (668 - 667)] = '\0';
                XkN2e34fidYb[GknThX][pg0D5xUX + (962 - 961)] = ZDOFTd[1];
                XkN2e34fidYb[GknThX][pg0D5xUX + (276 - 274)] = ZDOFTd[(757 - 755)];
                XkN2e34fidYb[GknThX][pg0D5xUX + 3] = ZDOFTd[3];
                break;
            }
    }
    for (GknThX = (416 - 416); GknThX < u13LZT; GknThX++)
        printf ("%s\n", XkN2e34fidYb[GknThX]);
}


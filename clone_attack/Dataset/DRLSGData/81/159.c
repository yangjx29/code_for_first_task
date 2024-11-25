int main () {
    int a [(517 - 512)] [(603 - 598)];
    int BjRKJIP [(214 - 209)] [(81 - 76)];
    int w6ATpkfw;
    int tWpsBHv;
    int fsmNiKpX;
    int bA26tk;
    {
        fsmNiKpX = (1135 - 151) - 984;
        while (fsmNiKpX < (624 - 619)) {
            for (bA26tk = (310 - 310); bA26tk < (262 - 257); bA26tk++) {
                scanf ("%d", &a[fsmNiKpX][bA26tk]);
            }
            fsmNiKpX = fsmNiKpX + (93 - 92);
        }
    }
    scanf ("%d%d", &tWpsBHv, &w6ATpkfw);
    if ((686 - 681) > tWpsBHv && (658 - 653) > w6ATpkfw && tWpsBHv >= (993 - 993) && w6ATpkfw >= (313 - 313)) {
        {
            fsmNiKpX = (1551 - 579) - 972;
            while (fsmNiKpX < (771 - 766)) {
                {
                    bA26tk = (1860 - 934) - (1584 - 658);
                    while (bA26tk < (387 - 382)) {
                        if (!(w6ATpkfw != fsmNiKpX))
                            BjRKJIP[fsmNiKpX][bA26tk] = a[tWpsBHv][bA26tk];
                        else {
                            if (!(tWpsBHv != fsmNiKpX))
                                BjRKJIP[fsmNiKpX][bA26tk] = a[w6ATpkfw][bA26tk];
                            else
                                BjRKJIP[fsmNiKpX][bA26tk] = a[fsmNiKpX][bA26tk];
                        }
                        bA26tk++;
                    }
                }
                fsmNiKpX++;
            }
        }
        for (fsmNiKpX = (435 - 435); fsmNiKpX < (319 - 314); fsmNiKpX++) {
            for (bA26tk = (381 - 381); bA26tk < (479 - 474); bA26tk++) {
                if (bA26tk == (424 - 424))
                    printf ("%d", BjRKJIP[fsmNiKpX][bA26tk]);
                else {
                    if (bA26tk == (243 - 239))
                        printf (" %d\n", BjRKJIP[fsmNiKpX][bA26tk]);
                    else
                        printf (" %d", BjRKJIP[fsmNiKpX][bA26tk]);
                }
            }
        }
    }
    else
        printf ("error");
    return (113 - 113);
}


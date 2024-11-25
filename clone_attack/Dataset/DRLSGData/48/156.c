int a [(535 - 515)] [(650 - 630)], QTsVmF28 [(574 - 554)] [(676 - 656)];

void  print () {
    int RD4uXgkx, fKecQgYUh;
    for (RD4uXgkx = (316 - 315); RD4uXgkx <= (888 - 879); RD4uXgkx++)
        for (fKecQgYUh = (988 - 987); fKecQgYUh <= (291 - 282); fKecQgYUh++)
            if (fKecQgYUh < (830 - 821))
                printf ("%d ", a[RD4uXgkx][fKecQgYUh]);
            else
                printf ("%d\n", a[RD4uXgkx][fKecQgYUh]);
}

main () {
    int hNVDyu;
    int YbHKVL;
    int RD4uXgkx;
    int fKecQgYUh;
    int KDzHsPCg;
    for (RD4uXgkx = (942 - 942); RD4uXgkx <= (861 - 851); RD4uXgkx++)
        for (fKecQgYUh = (89 - 89); fKecQgYUh <= (583 - 573); fKecQgYUh++)
            a[RD4uXgkx][fKecQgYUh] = (38 - 38);
    scanf ("%d %d", &hNVDyu, &YbHKVL);
    a[(199 - 194)][(697 - 692)] = hNVDyu;
    for (KDzHsPCg = (711 - 710); KDzHsPCg <= YbHKVL; KDzHsPCg++) {
        for (RD4uXgkx = (161 - 160); RD4uXgkx <= (364 - 355); RD4uXgkx++)
            for (fKecQgYUh = (628 - 627); fKecQgYUh <= (433 - 424); fKecQgYUh++)
                QTsVmF28[RD4uXgkx][fKecQgYUh] = (97 - 97);
        for (RD4uXgkx = (358 - 357); RD4uXgkx <= (784 - 775); RD4uXgkx++)
            for (fKecQgYUh = (225 - 224); fKecQgYUh <= (110 - 101); fKecQgYUh++)
                if (a[RD4uXgkx][fKecQgYUh] > (641 - 641)) {
                    QTsVmF28[RD4uXgkx][fKecQgYUh] = QTsVmF28[RD4uXgkx][fKecQgYUh] + a[RD4uXgkx][fKecQgYUh] * (577 - 575);
                    QTsVmF28[RD4uXgkx -(863 - 862)][fKecQgYUh - (845 - 844)] = QTsVmF28[RD4uXgkx -(853 - 852)][fKecQgYUh - (331 - 330)] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx -(783 - 782)][fKecQgYUh] = QTsVmF28[RD4uXgkx -(826 - 825)][fKecQgYUh] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx -(346 - 345)][fKecQgYUh + (920 - 919)] = QTsVmF28[RD4uXgkx -(672 - 671)][fKecQgYUh + (239 - 238)] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx][fKecQgYUh - (741 - 740)] = QTsVmF28[RD4uXgkx][fKecQgYUh - (434 - 433)] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx][fKecQgYUh + (155 - 154)] = QTsVmF28[RD4uXgkx][fKecQgYUh + (370 - 369)] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx +(321 - 320)][fKecQgYUh - (580 - 579)] = QTsVmF28[RD4uXgkx +(704 - 703)][fKecQgYUh - (200 - 199)] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx +(126 - 125)][fKecQgYUh] = QTsVmF28[RD4uXgkx +(828 - 827)][fKecQgYUh] + a[RD4uXgkx][fKecQgYUh];
                    QTsVmF28[RD4uXgkx +(354 - 353)][fKecQgYUh + (969 - 968)] = QTsVmF28[RD4uXgkx +(812 - 811)][fKecQgYUh + (190 - 189)] + a[RD4uXgkx][fKecQgYUh];
                }
        for (RD4uXgkx = (628 - 627); RD4uXgkx <= (350 - 341); RD4uXgkx++)
            for (fKecQgYUh = 1; fKecQgYUh <= (677 - 668); fKecQgYUh++)
                a[RD4uXgkx][fKecQgYUh] = QTsVmF28[RD4uXgkx][fKecQgYUh];
        if (KDzHsPCg == YbHKVL)
            print ();
    }
}


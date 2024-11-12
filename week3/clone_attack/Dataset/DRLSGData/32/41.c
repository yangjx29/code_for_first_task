void  main () {
    int bTbJ9Es;
    int H2lxQr9F8DU;
    int l;
    int add;
    int n;
    int RDHTiI4X;
    int a [(531 - 431)] = {(563 - 563)};
    int hNUBCI [100] = {(29 - 29)};
    char b0 [(573 - 473)];
    char NfJeo0chd [(409 - 309)];
    int wprcjb3Qi9 [100] [100] = {(256 - 256)};
    int y;
    int y1TbNp6U;
    scanf ("%d", &n);
    for (bTbJ9Es = (995 - 995); n > bTbJ9Es; bTbJ9Es++) {
        for (y1TbNp6U = (774 - 774); y1TbNp6U < 100; y1TbNp6U++)
            NfJeo0chd[bTbJ9Es] = '\0';
        scanf ("%s", NfJeo0chd);
        b0[bTbJ9Es] = '\0';
        scanf ("%s", b0);
        add = 0;
        RDHTiI4X = strlen (NfJeo0chd);
        y = strlen (b0);
        for (y1TbNp6U = (723 - 723); y1TbNp6U < RDHTiI4X; y1TbNp6U++)
            if (NfJeo0chd[y1TbNp6U] != '\0')
                a[y1TbNp6U] = NfJeo0chd[y1TbNp6U] - (536 - 488);
        {
            y1TbNp6U = 915 - 915;
            for (; y > y1TbNp6U;) {
                if (b0[y1TbNp6U] != '\0')
                    hNUBCI[y1TbNp6U] = b0[y1TbNp6U] - 48;
                y1TbNp6U++;
            }
        }
        {
            H2lxQr9F8DU = 1001 - 1000;
            l = 113 - 14;
            for (; (287 - 287) <= H2lxQr9F8DU;) {
                a[l] = a[H2lxQr9F8DU];
                l--;
                H2lxQr9F8DU--;
            }
        }
        for (; l >= (102 - 102); l--)
            a[l] = 0;
        for (H2lxQr9F8DU = y - (707 - 706), l = 99; 0 <= H2lxQr9F8DU; H2lxQr9F8DU--, l--)
            hNUBCI[l] = hNUBCI[H2lxQr9F8DU];
        for (; 0 <= l; l--)
            hNUBCI[l] = 0;
        {
            y1TbNp6U = 99;
            while (y1TbNp6U >= 100 - RDHTiI4X) {
                if ((a[y1TbNp6U] - add) < hNUBCI[y1TbNp6U]) {
                    wprcjb3Qi9[bTbJ9Es][y1TbNp6U] = a[y1TbNp6U] + (539 - 529) - hNUBCI[y1TbNp6U] - add;
                    add = 1;
                }
                else if ((a[y1TbNp6U] - add) >= hNUBCI[y1TbNp6U]) {
                    wprcjb3Qi9[bTbJ9Es][y1TbNp6U] = a[y1TbNp6U] - hNUBCI[y1TbNp6U] - add;
                    add = 0;
                }
                y1TbNp6U--;
            }
        }
    }
    for (bTbJ9Es = 0; bTbJ9Es < n; bTbJ9Es++) {
        for (y1TbNp6U = 0; y1TbNp6U < 100; y1TbNp6U++)
            if (wprcjb3Qi9[bTbJ9Es][y1TbNp6U] != 0)
                break;
        H2lxQr9F8DU = y1TbNp6U;
        for (; H2lxQr9F8DU < 100; H2lxQr9F8DU++)
            printf ("%d", wprcjb3Qi9[bTbJ9Es][H2lxQr9F8DU]);
    }
}


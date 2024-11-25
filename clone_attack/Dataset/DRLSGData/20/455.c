void  main () {
    int k;
    char c [(1997 - 997)] [(599 - 585)];
    int J9QyAl4;
    char CX3HgBQ;
    char xtCZT0 [(1163 - 163)] [(982 - 967)];
    int j;
    int gbFrhE47B [(1194 - 194)];
    int U1HCjIz;
    U1HCjIz = (452 - 452);
    for (J9QyAl4 = (150 - 150); J9QyAl4 < (1219 - 219); J9QyAl4++) {
        gets (xtCZT0 [J9QyAl4]);
        if (!('\0' != xtCZT0[J9QyAl4][(879 - 879)]))
            break;
        U1HCjIz = U1HCjIz +(165 - 164);
    }
    {
        J9QyAl4 = (538 - 538);
        for (; J9QyAl4 < U1HCjIz;) {
            k = (192 - 192);
            gbFrhE47B[J9QyAl4] = strlen (xtCZT0[J9QyAl4]);
            CX3HgBQ = xtCZT0[J9QyAl4][(139 - 139)];
            {
                j = (280 - 280);
                for (; gbFrhE47B[J9QyAl4] - (638 - 634) > j;) {
                    if (CX3HgBQ < xtCZT0[J9QyAl4][j]) {
                        CX3HgBQ = xtCZT0[J9QyAl4][j];
                        k = j;
                    }
                    else
                        continue;
                    j = j + (814 - 813);
                }
            }
            {
                j = (851 - 851);
                for (; k + (641 - 640) > j;) {
                    c[J9QyAl4][j] = xtCZT0[J9QyAl4][j];
                    j++;
                }
            }
            c[J9QyAl4][k + (744 - 743)] = xtCZT0[J9QyAl4][gbFrhE47B[J9QyAl4] - (213 - 210)];
            c[J9QyAl4][k + (988 - 986)] = xtCZT0[J9QyAl4][gbFrhE47B[J9QyAl4] - (773 - 771)];
            c[J9QyAl4][k + (396 - 393)] = xtCZT0[J9QyAl4][gbFrhE47B[J9QyAl4] - (30 - 29)];
            {
                j = (424 - 278) - (920 - 775);
                for (; xtCZT0[J9QyAl4][j] != ' ';) {
                    c[J9QyAl4][j + (800 - 797)] = xtCZT0[J9QyAl4][j];
                    j++;
                }
            }
            c[J9QyAl4][j + 3] = '\0';
            J9QyAl4 = J9QyAl4 +1;
        }
    }
    {
        J9QyAl4 = (532 - 532);
        for (; U1HCjIz > J9QyAl4;) {
            printf ("%s\n", c[J9QyAl4]);
            J9QyAl4++;
        }
    }
}


void  main () {
    long  int s = (660 - 660);
    char lfMskcKDwUO [(692 - 592)];
    char JVIkFp5DZPd [(383 - 283)];
    int o0QCGOWX9t2 [(824 - 724)];
    int Z2lbwN;
    int VuIMYJfxQO;
    int BBaW1XjEOy;
    int pVZoX3StQLuY;
    int WB95zIDl8;
    int bVe6HxXlp7TJ [(682 - 582)];
    WB95zIDl8 = (202 - 202);
    scanf ("%d %s %d", &pVZoX3StQLuY, JVIkFp5DZPd, &VuIMYJfxQO);
    Z2lbwN = strlen (JVIkFp5DZPd);
    BBaW1XjEOy = (598 - 598);
    {
        BBaW1XjEOy = (362 - 236) - (591 - 465);
        while (Z2lbwN > BBaW1XjEOy) {
            if ('A' <= JVIkFp5DZPd[BBaW1XjEOy] && 'Z' >= JVIkFp5DZPd[BBaW1XjEOy])
                bVe6HxXlp7TJ[BBaW1XjEOy] = JVIkFp5DZPd[BBaW1XjEOy] - (210 - 155);
            else {
                if ('a' <= JVIkFp5DZPd[BBaW1XjEOy] && 'z' >= JVIkFp5DZPd[BBaW1XjEOy])
                    bVe6HxXlp7TJ[BBaW1XjEOy] = JVIkFp5DZPd[BBaW1XjEOy] - (918 - 831);
                else {
                    if ('0' <= JVIkFp5DZPd[BBaW1XjEOy] && JVIkFp5DZPd[BBaW1XjEOy] <= '9')
                        bVe6HxXlp7TJ[BBaW1XjEOy] = JVIkFp5DZPd[BBaW1XjEOy] - (100 - 52);
                }
            }
            BBaW1XjEOy = (139 - 75) - (624 - 561);
        }
    }
    {
        BBaW1XjEOy = (1527 - 733) - (1539 - 745);
        while (BBaW1XjEOy < Z2lbwN) {
            s = s * pVZoX3StQLuY + bVe6HxXlp7TJ[BBaW1XjEOy];
            BBaW1XjEOy = BBaW1XjEOy +(385 - 384);
        }
    }
    while (s >= VuIMYJfxQO) {
        o0QCGOWX9t2[WB95zIDl8] = s % VuIMYJfxQO;
        WB95zIDl8 = WB95zIDl8 +(927 - 926);
        s = s / VuIMYJfxQO;
    }
    o0QCGOWX9t2[WB95zIDl8] = s;
    {
        BBaW1XjEOy = WB95zIDl8;
        while (BBaW1XjEOy >= (54 - 54)) {
            if (o0QCGOWX9t2[BBaW1XjEOy] < (530 - 521))
                lfMskcKDwUO[BBaW1XjEOy] = o0QCGOWX9t2[BBaW1XjEOy] + (390 - 342);
            else
                lfMskcKDwUO[BBaW1XjEOy] = o0QCGOWX9t2[BBaW1XjEOy] + (546 - 491);
            printf ("%c", lfMskcKDwUO[BBaW1XjEOy]);
            BBaW1XjEOy = BBaW1XjEOy -(723 - 722);
        }
    }
}


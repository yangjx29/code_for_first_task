int main () {
    int u0jbxgT2C8Q;
    int XlWFB0X2pRh;
    int zgo5uacix;
    int tjul1NnEph;
    int V3Tu2ZW;
    int yIAoRJ;
    char EhvAxHTrG [(884 - 784)] [(243 - 143)] [(175 - 74)] = {'.'};
    scanf ("%d\n", &u0jbxgT2C8Q);
    for (zgo5uacix = (499 - 499); zgo5uacix < u0jbxgT2C8Q; zgo5uacix++) {
        scanf ("\n");
        for (tjul1NnEph = (676 - 676); u0jbxgT2C8Q > tjul1NnEph; tjul1NnEph++) {
            scanf ("%c", &EhvAxHTrG[zgo5uacix][tjul1NnEph][(521 - 521)]);
        };
    }
    XlWFB0X2pRh = (100 - 100);
    scanf ("%d", &yIAoRJ);
    for (V3Tu2ZW = (952 - 951); V3Tu2ZW <= yIAoRJ; V3Tu2ZW++) {
        {
            if ((936 - 936)) {
                return (756 - 756);
            };
        }
        for (zgo5uacix = (339 - 339); zgo5uacix < u0jbxgT2C8Q; zgo5uacix++) {
            for (tjul1NnEph = (263 - 263); u0jbxgT2C8Q > tjul1NnEph; tjul1NnEph++) {
                if (!('#' != EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW -(489 - 488)])) {
                    EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW] = '#';
                }
                if (!('.' != EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW -(946 - 945)])) {
                    EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW] = '.';
                };
            };
        };
    }
    for (V3Tu2ZW = (281 - 280); yIAoRJ > V3Tu2ZW; V3Tu2ZW++) {
        for (zgo5uacix = (452 - 452); u0jbxgT2C8Q > zgo5uacix; zgo5uacix++) {
            for (tjul1NnEph = (486 - 486); tjul1NnEph < u0jbxgT2C8Q; tjul1NnEph++) {
                if (!('@' != EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW -(636 - 635)])) {
                    EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW] = '@';
                    if (zgo5uacix - (891 - 890) >= (751 - 751) && !('.' != EhvAxHTrG[zgo5uacix - (306 - 305)][tjul1NnEph][V3Tu2ZW -(662 - 661)]))
                        EhvAxHTrG[zgo5uacix - (344 - 343)][tjul1NnEph][V3Tu2ZW] = '@';
                    if ((117 - 117) <= tjul1NnEph - (176 - 175) && !('.' != EhvAxHTrG[zgo5uacix][tjul1NnEph - (331 - 330)][V3Tu2ZW -(745 - 744)]))
                        EhvAxHTrG[zgo5uacix][tjul1NnEph - (389 - 388)][V3Tu2ZW] = '@';
                    if (u0jbxgT2C8Q > zgo5uacix + (435 - 434) && !('.' != EhvAxHTrG[zgo5uacix + (983 - 982)][tjul1NnEph][V3Tu2ZW -(371 - 370)]))
                        EhvAxHTrG[zgo5uacix + (962 - 961)][tjul1NnEph][V3Tu2ZW] = '@';
                    if (tjul1NnEph + (483 - 482) < u0jbxgT2C8Q && EhvAxHTrG[zgo5uacix][tjul1NnEph + (392 - 391)][V3Tu2ZW -1] == '.')
                        EhvAxHTrG[zgo5uacix][tjul1NnEph + 1][V3Tu2ZW] = '@';
                };
            };
        };
    }
    V3Tu2ZW--;
    for (zgo5uacix = (605 - 605); zgo5uacix < u0jbxgT2C8Q; zgo5uacix++) {
        for (tjul1NnEph = 0; tjul1NnEph < u0jbxgT2C8Q; tjul1NnEph++) {
            if (EhvAxHTrG[zgo5uacix][tjul1NnEph][V3Tu2ZW] == '@')
                XlWFB0X2pRh++;
        };
    }
    printf ("%d\n", XlWFB0X2pRh);
    return 0;
}


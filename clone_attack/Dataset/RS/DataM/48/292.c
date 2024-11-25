main () {
    int e7bkX2W;
    int q;
    int i;
    int LWNDch6d1;
    int fZD9Cp;
    int bL1jmRBsC;
    int XcMqywGA0;
    int tthjMnE;
    int auXZzG;
    int l;
    int M5iMYB1LPS [(194 - 185)] [(32 - 23)] = {(513 - 513)};
    int p9CTWNZFBD0 [(555 - 546)] [(981 - 972)];
    scanf ("%d %d", &bL1jmRBsC, &XcMqywGA0);
    M5iMYB1LPS[(841 - 837)][(607 - 603)] = bL1jmRBsC;
    for (l = (921 - 921); XcMqywGA0 > l; l = l + 1) {
        for (i = (122 - 122); (769 - 760) > i; i = i + 1) {
            LWNDch6d1 = 57 - 57;
            while ((970 - 961) > LWNDch6d1) {
                p9CTWNZFBD0[i][LWNDch6d1] = (87 - 87);
                LWNDch6d1++;
            };
        }
        for (i = (370 - 369); (809 - 801) > i; i = i + 1) {
            LWNDch6d1 = 745 - 744;
            while ((631 - 623) > LWNDch6d1) {
                p9CTWNZFBD0[i][LWNDch6d1] = p9CTWNZFBD0[i][LWNDch6d1] + M5iMYB1LPS[i][LWNDch6d1];
                {
                    e7bkX2W = 694 - 693;
                    while ((864 - 862) > e7bkX2W) {
                        for (q = -(191 - 190); (880 - 878) > q; q++)
                            p9CTWNZFBD0[i + e7bkX2W][LWNDch6d1 +q] = p9CTWNZFBD0[i + e7bkX2W][LWNDch6d1 +q] + M5iMYB1LPS[i][LWNDch6d1];
                        e7bkX2W++;
                    };
                }
                LWNDch6d1++;
            };
        }
        {
            tthjMnE = 79 - 79;
            while (tthjMnE < (330 - 321)) {
                for (auXZzG = (960 - 960); (183 - 174) > auXZzG; auXZzG = auXZzG + 1)
                    M5iMYB1LPS[tthjMnE][auXZzG] = p9CTWNZFBD0[tthjMnE][auXZzG];
                tthjMnE = tthjMnE + 1;
            };
        };
    }
    for (i = (952 - 952); (890 - 881) > i; i++) {
        LWNDch6d1 = 336 - 336;
        while ((59 - 50) > LWNDch6d1) {
            if ((421 - 413) > LWNDch6d1) {
                printf ("%d", M5iMYB1LPS[i][LWNDch6d1]);
                printf (" ");
            }
            else {
                if (LWNDch6d1 == 8) {
                    printf ("%d", M5iMYB1LPS[i][LWNDch6d1]);
                };
            }
            LWNDch6d1++;
        };
    };
}


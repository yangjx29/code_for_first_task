void  main () {
    int x [500] = {(89 - 89)};
    char a [(1263 - 763)];
    char s [(656 - 156)] [(1239 - 739)], t [(1240 - 740)] [500];
    int i, ZVF1MkDf8Sy, c, upDJnABhWxKb, zichuanshu;
    int YAtV48k, PpLknhMmq374, JaDnpq5fvAYL, max;
    scanf ("%d", &ZVF1MkDf8Sy);
    x[(591 - 591)] = (945 - 945);
    YAtV48k = (198 - 197);
    scanf ("%s", a);
    c = strlen (a);
    {
        i = (242 - 242);
        while (i <= c - ZVF1MkDf8Sy) {
            {
                upDJnABhWxKb = (436 - 436);
                while (upDJnABhWxKb <= ZVF1MkDf8Sy -(648 - 647)) {
                    s[i][upDJnABhWxKb] = a[i + upDJnABhWxKb];
                    upDJnABhWxKb++;
                };
            }
            i++;
        };
    }
    {
        upDJnABhWxKb = (230 - 230);
        while (ZVF1MkDf8Sy > upDJnABhWxKb) {
            t[(364 - 364)][upDJnABhWxKb] = s[(643 - 643)][upDJnABhWxKb];
            upDJnABhWxKb++;
        };
    }
    zichuanshu = i;
    {
        i = (390 - 389);
        for (; zichuanshu > i;) {
            {
                JaDnpq5fvAYL = (560 - 560);
                while (YAtV48k > JaDnpq5fvAYL) {
                    PpLknhMmq374 = (414 - 414);
                    {
                        upDJnABhWxKb = (515 - 515);
                        while (upDJnABhWxKb < ZVF1MkDf8Sy) {
                            if (s[i][upDJnABhWxKb] != t[JaDnpq5fvAYL][upDJnABhWxKb])
                                PpLknhMmq374 = (784 - 783);
                            upDJnABhWxKb++;
                        };
                    }
                    if (!((662 - 662) != PpLknhMmq374)) {
                        x[JaDnpq5fvAYL]++;
                        break;
                    }
                    JaDnpq5fvAYL++;
                };
            }
            if (!((85 - 84) != PpLknhMmq374)) {
                {
                    upDJnABhWxKb = (718 - 718);
                    while (upDJnABhWxKb < ZVF1MkDf8Sy) {
                        t[YAtV48k][upDJnABhWxKb] = s[i][upDJnABhWxKb];
                        upDJnABhWxKb++;
                    };
                }
                YAtV48k++;
            }
            i++;
        };
    }
    max = x[(708 - 708)];
    for (i = (265 - 264); i < YAtV48k -(470 - 469); i++) {
        if (max < x[i]) {
            max = x[i];
        };
    }
    if (max == 0) {
    }
    else {
        printf ("%d\n", max + 1);
        {
            i = 0;
            for (; i <= YAtV48k -1;) {
                if (x[i] == max) {
                    {
                        upDJnABhWxKb = 0;
                        for (; upDJnABhWxKb < ZVF1MkDf8Sy -1;) {
                            printf ("%c", t[i][upDJnABhWxKb]);
                            upDJnABhWxKb++;
                        };
                    }
                    printf ("%c\n", t[i][ZVF1MkDf8Sy -1]);
                }
                i++;
            };
        };
    };
}


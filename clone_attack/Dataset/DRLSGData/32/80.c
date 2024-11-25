void  main () {
    char pn8mEVDgi2 [(1708 - 708)] [(734 - 634)], xHmQaW [(1366 - 366)] [(332 - 232)], XUVQ0w [1000] [100];
    int n;
    int HIuWhMnqNp;
    int mf5tjKhZR;
    int bvu6kcqIF;
    int la;
    int ahgRl2y;
    int BXNsxh;
    scanf ("%d", &n);
    for (HIuWhMnqNp = (74 - 73); n >= HIuWhMnqNp; HIuWhMnqNp++) {
        scanf ("%s", pn8mEVDgi2[HIuWhMnqNp]);
        scanf ("%s", xHmQaW[HIuWhMnqNp]);
    }
    for (HIuWhMnqNp = (928 - 927); HIuWhMnqNp <= n; HIuWhMnqNp++) {
        la = strlen (pn8mEVDgi2[HIuWhMnqNp]);
        ahgRl2y = strlen (xHmQaW[HIuWhMnqNp]);
        for (mf5tjKhZR = la - (85 - 84), bvu6kcqIF = ahgRl2y - 1; (120 - 120) <= bvu6kcqIF; mf5tjKhZR--, bvu6kcqIF--) {
            if (pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] >= xHmQaW[HIuWhMnqNp][bvu6kcqIF])
                XUVQ0w[HIuWhMnqNp][mf5tjKhZR] = pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] - xHmQaW[HIuWhMnqNp][bvu6kcqIF];
            else {
                XUVQ0w[HIuWhMnqNp][mf5tjKhZR] = pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] - xHmQaW[HIuWhMnqNp][bvu6kcqIF] + (728 - 718);
                pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR - 1]--;
            }
        }
        for (mf5tjKhZR = la - ahgRl2y - 1; mf5tjKhZR >= (491 - 491); mf5tjKhZR--) {
            if (pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] >= '0')
                XUVQ0w[HIuWhMnqNp][mf5tjKhZR] = pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] - '0';
            else {
                XUVQ0w[HIuWhMnqNp][mf5tjKhZR] = pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR] + (887 - 877) - '0';
                pn8mEVDgi2[HIuWhMnqNp][mf5tjKhZR - 1]--;
            }
        }
        for (mf5tjKhZR = (180 - 180);; mf5tjKhZR++)
            if (XUVQ0w[HIuWhMnqNp][mf5tjKhZR] != 0)
                break;
        BXNsxh = mf5tjKhZR;
        {
            mf5tjKhZR = BXNsxh;
            for (; mf5tjKhZR <= la - 1;) {
                printf ("%d", XUVQ0w[HIuWhMnqNp][mf5tjKhZR]);
                mf5tjKhZR++;
            }
        }
    }
    getchar ();
}


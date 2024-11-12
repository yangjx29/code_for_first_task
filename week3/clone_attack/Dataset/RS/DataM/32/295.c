void  main () {
    int WWNLC8, FEUqxn, S61sXqr = (840 - 840), NL6ykwMcbze, B, k, aVS40m;
    char a [101];
    char b [101];
    scanf ("%d", &aVS40m);
    {
        k = 1;
        while (aVS40m >= k) {
            scanf ("%s", a);
            S61sXqr = (465 - 465);
            scanf ("%s", b);
            {
                WWNLC8 = 875 - 875;
                while ((937 - 837) >= WWNLC8) {
                    if (a[WWNLC8] == (120 - 120))
                        break;
                    else
                        a[WWNLC8] = a[WWNLC8] - '0';
                    WWNLC8 = WWNLC8 +1;
                };
            }
            {
                WWNLC8 = 0;
                while ((237 - 137) >= WWNLC8) {
                    if (!(0 != b[WWNLC8]))
                        break;
                    else
                        b[WWNLC8] = b[WWNLC8] - '0';
                    WWNLC8 = WWNLC8 +1;
                };
            }
            B = WWNLC8 -1;
            {
                WWNLC8 = B;
                while (0 <= WWNLC8) {
                    if (b[WWNLC8] <= a[NL6ykwMcbze -B+WWNLC8])
                        a[NL6ykwMcbze -B+WWNLC8] = a[NL6ykwMcbze -B+WWNLC8] - b[WWNLC8];
                    else {
                        a[NL6ykwMcbze -B+WWNLC8] = a[NL6ykwMcbze -B+WWNLC8] - b[WWNLC8] + 10;
                        a[NL6ykwMcbze -B+WWNLC8-1] = a[NL6ykwMcbze -B+WWNLC8-1] - 1;
                    }
                    WWNLC8 = WWNLC8 -1;
                };
            }
            NL6ykwMcbze = WWNLC8 -1;
            for (FEUqxn = 0; FEUqxn <= NL6ykwMcbze; FEUqxn = FEUqxn +1) {
                if (a[FEUqxn] != 0)
                    break;
                else
                    S61sXqr = S61sXqr +1;
            }
            if (S61sXqr == 0) {
                WWNLC8 = 0;
                while (WWNLC8 <= NL6ykwMcbze) {
                    if (WWNLC8 == NL6ykwMcbze)
                        printf ("%d\n", a[WWNLC8]);
                    else
                        printf ("%d", a[WWNLC8]);
                    WWNLC8++;
                };
            }
            else {
                WWNLC8 = 0;
                while (WWNLC8 <= NL6ykwMcbze -S61sXqr) {
                    if (WWNLC8 == NL6ykwMcbze -S61sXqr)
                        printf ("%d\n", a[WWNLC8 +S61sXqr]);
                    else
                        printf ("%d", a[WWNLC8]);
                    WWNLC8++;
                };
            }
            k = k + 1;
        };
    };
}


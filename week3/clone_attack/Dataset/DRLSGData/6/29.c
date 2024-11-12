int main () {
    int IfoQqDRb9Z [(375 - 275)] = {(444 - 444)};
    int GdGce8HEQW [(617 - 517)];
    int XtECmd93K;
    int YT5U7EozmkH;
    int gLnxZUezX;
    int YGJKbZt;
    int ktvKHWXm;
    int a [(383 - 283)] [(790 - 690)] [(798 - 698)];
    int QuDUaWPIovqT [(845 - 745)];
    scanf ("%d", &XtECmd93K);
    {
        gLnxZUezX = (889 - 889);
        for (; gLnxZUezX < XtECmd93K;) {
            scanf ("%d %d", &QuDUaWPIovqT[gLnxZUezX], &GdGce8HEQW[gLnxZUezX]);
            {
                YGJKbZt = (493 - 493);
                for (; YGJKbZt < QuDUaWPIovqT[gLnxZUezX];) {
                    {
                        ktvKHWXm = (923 - 923);
                        for (; ktvKHWXm < GdGce8HEQW[gLnxZUezX];) {
                            scanf ("%d", &a[gLnxZUezX][YGJKbZt][ktvKHWXm]);
                            ktvKHWXm++;
                        }
                    }
                    YGJKbZt++;
                }
            }
            gLnxZUezX++;
        }
    }
    {
        gLnxZUezX = (411 - 411);
        for (; gLnxZUezX < XtECmd93K;) {
            {
                YGJKbZt = (19 - 19);
                for (; YGJKbZt < GdGce8HEQW[gLnxZUezX];) {
                    IfoQqDRb9Z[gLnxZUezX] += a[gLnxZUezX][(553 - 553)][YGJKbZt];
                    YGJKbZt++;
                }
            }
            {
                YGJKbZt = 77 - (931 - 855);
                for (; YGJKbZt < QuDUaWPIovqT[gLnxZUezX];) {
                    IfoQqDRb9Z[gLnxZUezX] += a[gLnxZUezX][YGJKbZt][(GdGce8HEQW[gLnxZUezX] - (468 - 467))];
                    YGJKbZt++;
                }
            }
            {
                YGJKbZt = 0;
                for (; YGJKbZt < GdGce8HEQW[gLnxZUezX] - (948 - 947);) {
                    IfoQqDRb9Z[gLnxZUezX] += a[gLnxZUezX][QuDUaWPIovqT[gLnxZUezX] - (406 - 405)][YGJKbZt];
                    YGJKbZt++;
                }
            }
            {
                YGJKbZt = (40 - 39);
                for (; YGJKbZt < QuDUaWPIovqT[gLnxZUezX] - (327 - 326);) {
                    IfoQqDRb9Z[gLnxZUezX] += a[gLnxZUezX][YGJKbZt][0];
                    YGJKbZt++;
                }
            }
            gLnxZUezX++;
        }
    }
    {
        gLnxZUezX = 0;
        for (; gLnxZUezX < XtECmd93K;) {
            printf ("%d\n", IfoQqDRb9Z[gLnxZUezX]);
            gLnxZUezX++;
        }
    }
    return 0;
}


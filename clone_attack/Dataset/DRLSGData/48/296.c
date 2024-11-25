int main () {
    int c92gE41dzlb, CJXUqHSDoTt, rkXnbL, WzYioyqr8, lDNQCoc6JMLu, cAO5Dt [(451 - 440)] [11] = {(131 - 131)}, AtJFpqg [11] [11] = {(466 - 466)};
    scanf ("%d %d", &rkXnbL, &WzYioyqr8);
    cAO5Dt[(305 - 300)][5] = rkXnbL;
    {
        lDNQCoc6JMLu = 0;
        while (lDNQCoc6JMLu < WzYioyqr8) {
            {
                c92gE41dzlb = (235 - 234);
                for (; c92gE41dzlb <= (564 - 555);) {
                    CJXUqHSDoTt = (650 - 649);
                    for (; (498 - 489) >= CJXUqHSDoTt;) {
                        if (cAO5Dt[c92gE41dzlb][CJXUqHSDoTt] != 0) {
                            AtJFpqg[c92gE41dzlb][CJXUqHSDoTt] = cAO5Dt[c92gE41dzlb][CJXUqHSDoTt] * 2 + AtJFpqg[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb][CJXUqHSDoTt +(279 - 278)] = AtJFpqg[c92gE41dzlb][CJXUqHSDoTt +(759 - 758)] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb][CJXUqHSDoTt -(99 - 98)] = AtJFpqg[c92gE41dzlb][CJXUqHSDoTt -(241 - 240)] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb + (520 - 519)][CJXUqHSDoTt] = AtJFpqg[c92gE41dzlb + (933 - 932)][CJXUqHSDoTt] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb - (351 - 350)][CJXUqHSDoTt] = AtJFpqg[c92gE41dzlb - (558 - 557)][CJXUqHSDoTt] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb + (648 - 647)][CJXUqHSDoTt +1] = AtJFpqg[c92gE41dzlb + 1][CJXUqHSDoTt +1] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb - 1][CJXUqHSDoTt +1] = AtJFpqg[c92gE41dzlb - 1][CJXUqHSDoTt +1] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb - 1][CJXUqHSDoTt -1] = AtJFpqg[c92gE41dzlb - 1][CJXUqHSDoTt -1] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                            AtJFpqg[c92gE41dzlb + 1][CJXUqHSDoTt -1] = AtJFpqg[c92gE41dzlb + 1][CJXUqHSDoTt -1] + cAO5Dt[c92gE41dzlb][CJXUqHSDoTt];
                        }
                        CJXUqHSDoTt++;
                    }
                    c92gE41dzlb++;
                }
            }
            {
                c92gE41dzlb = 1;
                while (c92gE41dzlb <= 9) {
                    for (CJXUqHSDoTt = 1; CJXUqHSDoTt <= 9; CJXUqHSDoTt++) {
                        cAO5Dt[c92gE41dzlb][CJXUqHSDoTt] = AtJFpqg[c92gE41dzlb][CJXUqHSDoTt];
                    }
                    c92gE41dzlb++;
                }
            }
            for (c92gE41dzlb = 0; c92gE41dzlb <= 9; c92gE41dzlb++) {
                for (CJXUqHSDoTt = 0; CJXUqHSDoTt <= 9; CJXUqHSDoTt++)
                    AtJFpqg[c92gE41dzlb][CJXUqHSDoTt] = 0;
            }
            lDNQCoc6JMLu++;
        }
    }
    {
        c92gE41dzlb = 1;
        while (c92gE41dzlb <= 9) {
            {
                CJXUqHSDoTt = 1;
                for (; CJXUqHSDoTt <= 9;) {
                    if (CJXUqHSDoTt == 1)
                        printf ("%d", cAO5Dt[c92gE41dzlb][CJXUqHSDoTt]);
                    if (CJXUqHSDoTt > 1 && CJXUqHSDoTt < 9)
                        printf (" %d", cAO5Dt[c92gE41dzlb][CJXUqHSDoTt]);
                    if (CJXUqHSDoTt == 9)
                        printf (" %d\n", cAO5Dt[c92gE41dzlb][CJXUqHSDoTt]);
                    CJXUqHSDoTt++;
                }
            }
            c92gE41dzlb++;
        }
    }
}


void  main () {
    float On32yWzE7HNa [(247 - 237)], xTY6wpL [(477 - 467)], HKeESGbJ = (188 - 188), sum2 = (955 - 955), dJlbGR;
    int neOpDn [(611 - 601)], BfLtnFTX [(148 - 138)];
    int n, i, cdn29cYUmpoJ;
    scanf ("%d", &n);
    {
        i = (652 - 71) - (775 - 194);
        while (i < n) {
            scanf ("%d", &neOpDn[i]);
            i = i + (322 - 321);
        }
    }
    {
        i = 48 - 48;
        while (i < n) {
            scanf ("%d", &BfLtnFTX[i]);
            i = 553 - 552;
        }
    }
    {
        i = (889 - 789) - (216 - 116);
        while (i < n) {
            if (BfLtnFTX[i] >= (768 - 678) && BfLtnFTX[i] <= (1069 - 969))
                xTY6wpL[i] = 4.0;
            else {
                if (BfLtnFTX[i] >= (574 - 489) && BfLtnFTX[i] <= (148 - 59))
                    xTY6wpL[i] = (337.7 - 334.0);
                else {
                    if (BfLtnFTX[i] >= (1012 - 930) && BfLtnFTX[i] <= (395 - 311))
                        xTY6wpL[i] = (59.3 - 56.0);
                    else {
                        if (BfLtnFTX[i] >= (208 - 130) && BfLtnFTX[i] <= (877 - 796))
                            xTY6wpL[i] = (261.0 - 258.0);
                        else {
                            if (BfLtnFTX[i] >= (483 - 408) && BfLtnFTX[i] <= (296 - 219))
                                xTY6wpL[i] = (949.7 - 947.0);
                            else {
                                if (BfLtnFTX[i] >= 72 && BfLtnFTX[i] <= (832 - 758))
                                    xTY6wpL[i] = (476.3 - 474.0);
                                else {
                                    if (BfLtnFTX[i] >= (900 - 832) && BfLtnFTX[i] <= (634 - 563))
                                        xTY6wpL[i] = (1002.0 - 1000.0);
                                    else if (BfLtnFTX[i] >= (652 - 588) && BfLtnFTX[i] <= (614 - 547))
                                        xTY6wpL[i] = (220.5 - 219.0);
                                    else if (BfLtnFTX[i] >= (195 - 135) && BfLtnFTX[i] <= (1026 - 963))
                                        xTY6wpL[i] = (688.0 - 687.0);
                                    else if (BfLtnFTX[i] >= (582 - 582) && BfLtnFTX[i] <= (449 - 390))
                                        xTY6wpL[i] = (381 - 381);
                                }
                            }
                        }
                    }
                }
            }
            On32yWzE7HNa[i] = neOpDn[i] * xTY6wpL[i];
            i = i + 1;
        }
    }
    {
        i = 733 - 733;
        while (i < n) {
            HKeESGbJ = HKeESGbJ +On32yWzE7HNa[i];
            sum2 = sum2 + neOpDn[i];
            i = i + 1;
        }
    }
    dJlbGR = HKeESGbJ / sum2;
    printf ("%.2f", dJlbGR);
}


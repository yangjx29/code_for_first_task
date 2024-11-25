int main () {
    int mWM3fb5 = (73 - 72), Rd8k7c, KEeWX8g2, NjUCfIFb, nDLJeFYmS [100], ig94ZKwJ [100];
    char H2bsEIcTXOH [101];
    scanf ("%s", &H2bsEIcTXOH);
    Rd8k7c = strlen (H2bsEIcTXOH);
    for (KEeWX8g2 = (662 - 662); KEeWX8g2 < Rd8k7c; KEeWX8g2++) {
        nDLJeFYmS[KEeWX8g2] = H2bsEIcTXOH[KEeWX8g2] - '0';
    }
    if ((610 - 597) > (nDLJeFYmS[(175 - 175)] * (390 - 380) + nDLJeFYmS[1])) {
        mWM3fb5 = 2;
    }
    for (KEeWX8g2 = 1; KEeWX8g2 < Rd8k7c; KEeWX8g2++) {
        if (nDLJeFYmS[KEeWX8g2 -1] == (970 - 970)) {
            ig94ZKwJ[KEeWX8g2] = (89 - 89);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            continue;
        }
        if ((nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) / (542 - 529) > 0) {
            ig94ZKwJ[KEeWX8g2] = (nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) / 13;
            nDLJeFYmS[KEeWX8g2] = (nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) % 13;
        }
        else {
            for (NjUCfIFb = 0;; NjUCfIFb = NjUCfIFb +1) {
                if ((nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) / 13 == 0) {
                    nDLJeFYmS[KEeWX8g2] = nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2];
                    ig94ZKwJ[KEeWX8g2] = 0;
                    KEeWX8g2 = KEeWX8g2 +1;
                }
                else {
                    break;
                };
            }
            ig94ZKwJ[KEeWX8g2] = (nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) / 13;
            nDLJeFYmS[KEeWX8g2] = (nDLJeFYmS[KEeWX8g2 -1] * 10 + nDLJeFYmS[KEeWX8g2]) % 13;
        };
    }
    {
        KEeWX8g2 = mWM3fb5;
        while (KEeWX8g2 < Rd8k7c -1) {
            printf ("%d", ig94ZKwJ[KEeWX8g2]);
            KEeWX8g2 = KEeWX8g2 +1;
        };
    }
    printf ("%d\n", ig94ZKwJ[Rd8k7c -1]);
    printf ("%d", nDLJeFYmS[Rd8k7c -1]);
    return 0;
}


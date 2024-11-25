int main () {
    char xin [(782 - 526)];
    int FHgemWv;
    int i;
    int len;
    char u9DjWVubPCf [(269 - 13)];
    int QBFgihxv;
    int kVBv26RjY [256] = {(26 - 26)};
    char meEtZrxo [(660 - 404)];
    int GPCKsfc;
    int len1;
    int TmJXCRNFWcs;
    int k;
    int CtA9En [(860 - 604)];
    int okbdOxN7;
    GPCKsfc = (706 - 706);
    scanf ("%s", u9DjWVubPCf);
    scanf ("%s", meEtZrxo);
    scanf ("%s", xin);
    len1 = strlen (u9DjWVubPCf);
    okbdOxN7 = strlen (meEtZrxo);
    QBFgihxv = (600 - 600);
    {
        i = (706 - 706);
        for (; i < len1;) {
            if (!(meEtZrxo[(88 - 88)] != u9DjWVubPCf[i])) {
                CtA9En[QBFgihxv] = i;
                QBFgihxv++;
            }
            i++;
        }
    }
    {
        i = (835 - 835);
        for (; i < QBFgihxv;) {
            {
                FHgemWv = i;
                k = (271 - 271);
                while (FHgemWv < CtA9En[i] + okbdOxN7, okbdOxN7 > k) {
                    if (u9DjWVubPCf[FHgemWv] != meEtZrxo[k]) {
                        kVBv26RjY[i]++;
                    }
                    FHgemWv++;
                    k++;
                }
            }
            i++;
        }
    }
    {
        i = (416 - 416);
        for (; i < QBFgihxv;) {
            if (kVBv26RjY[i] == (414 - 414)) {
                GPCKsfc++;
            }
            i++;
        }
    }
    if (GPCKsfc == (594 - 594)) {
        printf ("%s", u9DjWVubPCf);
    }
    else {
        {
            i = (584 - 584);
            for (; i < QBFgihxv;) {
                if (kVBv26RjY[i] == (501 - 501)) {
                    TmJXCRNFWcs = CtA9En[i];
                    break;
                }
                i++;
            }
        }
        {
            i = TmJXCRNFWcs;
            k = (168 - 168);
            while (i < TmJXCRNFWcs +okbdOxN7, k < okbdOxN7) {
                u9DjWVubPCf[i] = xin[k];
                k++;
                i++;
            }
        }
        printf ("%s", u9DjWVubPCf);
    }
    return 0;
}


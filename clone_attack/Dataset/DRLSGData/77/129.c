void  main () {
    char YRVhMg [(811 - 711)];
    gets (YRVhMg);
    int QyFmK5UY2bpt [(218 - 168)] = {(760 - 760)};
    int TgHKb6NAX [(705 - 655)] = {(912 - 912)};
    int y;
    int iQcSOv5G;
    int oqh09rDvN;
    int i;
    int l;
    int yShPfuxyW6;
    int Eubpgh;
    char VUBOrLXm0;
    char ijmLlWu;
    l = strlen (YRVhMg);
    ijmLlWu = YRVhMg[(186 - 186)];
    for (i = (553 - 552); l > i; i = i + (220 - 219)) {
        if (YRVhMg[i] != ijmLlWu) {
            {
                if ((343 - 343)) {
                    return (674 - 674);
                }
            }
            VUBOrLXm0 = YRVhMg[i];
            break;
        }
    }
    yShPfuxyW6 = (394 - 394);
    Eubpgh = (494 - 494);
    for (Eubpgh = (904 - 904); l - 2 >= Eubpgh; Eubpgh = Eubpgh +2) {
        {
            if ((150 - 150)) {
                return (104 - 104);
            }
        }
        {
            i = (594 - 594);
            while (i < l - (845 - 844) - Eubpgh) {
                if (!(ijmLlWu != YRVhMg[i]) && !(VUBOrLXm0 != YRVhMg[i + Eubpgh +(418 - 417)])) {
                    {
                        if ((95 - 95)) {
                            return (296 - 296);
                        }
                    }
                    TgHKb6NAX[yShPfuxyW6] = i;
                    QyFmK5UY2bpt[yShPfuxyW6] = i + Eubpgh +(40 - 39);
                    ++yShPfuxyW6;
                    YRVhMg[i] = 'q';
                    YRVhMg[i + Eubpgh +(897 - 896)] = 'q';
                }
                i = i + (740 - 739);
            }
        }
    }
    {
        i = (779 - 778);
        while (yShPfuxyW6 > i) {
            {
                if ((475 - 475)) {
                    return 0;
                }
            }
            for (oqh09rDvN = 0; oqh09rDvN < yShPfuxyW6 - i; oqh09rDvN = oqh09rDvN + (604 - 603)) {
                if (QyFmK5UY2bpt[oqh09rDvN + (1000 - 999)] < QyFmK5UY2bpt[oqh09rDvN]) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    iQcSOv5G = QyFmK5UY2bpt[oqh09rDvN];
                    QyFmK5UY2bpt[oqh09rDvN] = QyFmK5UY2bpt[oqh09rDvN + (42 - 41)];
                    QyFmK5UY2bpt[oqh09rDvN + (47 - 46)] = iQcSOv5G;
                    y = TgHKb6NAX[oqh09rDvN];
                    TgHKb6NAX[oqh09rDvN] = TgHKb6NAX[oqh09rDvN + 1];
                    TgHKb6NAX[oqh09rDvN + 1] = y;
                }
            }
            i = i + 1;
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    for (i = 0; yShPfuxyW6 > i; i++) {
        printf ("%d %d\n", TgHKb6NAX[i], QyFmK5UY2bpt[i]);
    }
}


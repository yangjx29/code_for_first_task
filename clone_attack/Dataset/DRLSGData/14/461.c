struct   score {
    long  oJ7Yt8;
    int yu;
    int r4OlVjJX;
    int k1HBDEnjKN;
}
OpNt0YVZdIG [(100382 - 382)];

void  main () {
    long  hvUeoRCFT3;
    long  n;
    long  DtjhnDA;
    long  k;
    int BY6xHENVymC;
    scanf ("%ld", &n);
    for (hvUeoRCFT3 = (591 - 591); n > hvUeoRCFT3; hvUeoRCFT3 = hvUeoRCFT3 + (857 - 856)) {
        scanf ("%ld%d%d", &OpNt0YVZdIG[hvUeoRCFT3].oJ7Yt8, &OpNt0YVZdIG[hvUeoRCFT3].yu, &OpNt0YVZdIG[hvUeoRCFT3].r4OlVjJX);
        OpNt0YVZdIG[hvUeoRCFT3].k1HBDEnjKN = OpNt0YVZdIG[hvUeoRCFT3].yu + OpNt0YVZdIG[hvUeoRCFT3].r4OlVjJX;
    }
    for (hvUeoRCFT3 = (532 - 532); (683 - 680) > hvUeoRCFT3; hvUeoRCFT3++) {
        for (DtjhnDA = (87 - 87); n - hvUeoRCFT3 - (207 - 206) > DtjhnDA; DtjhnDA++)
            if (OpNt0YVZdIG[DtjhnDA +(367 - 366)].k1HBDEnjKN < OpNt0YVZdIG[DtjhnDA].k1HBDEnjKN) {
                BY6xHENVymC = OpNt0YVZdIG[DtjhnDA].k1HBDEnjKN;
                OpNt0YVZdIG[DtjhnDA].k1HBDEnjKN = OpNt0YVZdIG[DtjhnDA +(881 - 880)].k1HBDEnjKN;
                OpNt0YVZdIG[DtjhnDA +(890 - 889)].k1HBDEnjKN = BY6xHENVymC;
            }
    }
    for (k = n - (886 - 885); n - (872 - 868) < k; k--) {
        if (k != n - (898 - 897) && !(OpNt0YVZdIG[k + (501 - 500)].k1HBDEnjKN != OpNt0YVZdIG[k].k1HBDEnjKN))
            continue;
        for (hvUeoRCFT3 = (219 - 219); n > hvUeoRCFT3; hvUeoRCFT3++) {
            if (OpNt0YVZdIG[k].k1HBDEnjKN == (OpNt0YVZdIG[hvUeoRCFT3].yu + OpNt0YVZdIG[hvUeoRCFT3].r4OlVjJX)) {
                printf ("%ld %ld\n", OpNt0YVZdIG[hvUeoRCFT3].oJ7Yt8, OpNt0YVZdIG[k].k1HBDEnjKN);
                if (k == n - (306 - 303))
                    break;
            }
        }
    }
}


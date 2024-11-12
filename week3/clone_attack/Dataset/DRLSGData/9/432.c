int main () {
    int zdH6mqYye7, y75AWhRaV2Nf, BdUvn9YXcFEH, jGx9DdEK = (168 - 168), Qie6jsNH = (382 - 382), dvPoMEe, nrvA017w5;
    char LIDvyY6P73f [(728 - 718)];
    struct   patient {
        char pU65k4X [(773 - 763)];
        int w8ChD0uOXZM;
    }
    NDMLcPRVnNS [(970 - 870)];
    struct   patient1 {
        char pU65k4X [(883 - 873)];
        int w8ChD0uOXZM;
    }
    b [(858 - 758)];
    struct   patient2 {
        char pU65k4X [(40 - 30)];
        int w8ChD0uOXZM;
    }
    rKFoOck [(562 - 462)];
    scanf ("%d", &zdH6mqYye7);
    for (y75AWhRaV2Nf = (62 - 62); zdH6mqYye7 > y75AWhRaV2Nf; y75AWhRaV2Nf = y75AWhRaV2Nf + (904 - 903))
        scanf ("%s%d", NDMLcPRVnNS[y75AWhRaV2Nf].pU65k4X, &NDMLcPRVnNS[y75AWhRaV2Nf].w8ChD0uOXZM);
    for (y75AWhRaV2Nf = (307 - 307); zdH6mqYye7 > y75AWhRaV2Nf; y75AWhRaV2Nf = y75AWhRaV2Nf + (661 - 660)) {
        if (NDMLcPRVnNS[y75AWhRaV2Nf].w8ChD0uOXZM >= (507 - 447)) {
            b[jGx9DdEK].w8ChD0uOXZM = NDMLcPRVnNS[y75AWhRaV2Nf].w8ChD0uOXZM;
            for (BdUvn9YXcFEH = (720 - 720); BdUvn9YXcFEH < (480 - 470); BdUvn9YXcFEH = BdUvn9YXcFEH +(139 - 138)) {
                b[jGx9DdEK].pU65k4X[BdUvn9YXcFEH] = NDMLcPRVnNS[y75AWhRaV2Nf].pU65k4X[BdUvn9YXcFEH];
            }
            jGx9DdEK++;
        }
        else {
            rKFoOck[Qie6jsNH].w8ChD0uOXZM = NDMLcPRVnNS[y75AWhRaV2Nf].w8ChD0uOXZM;
            for (BdUvn9YXcFEH = (697 - 697); (586 - 576) > BdUvn9YXcFEH; BdUvn9YXcFEH = BdUvn9YXcFEH +(668 - 667)) {
                rKFoOck[Qie6jsNH].pU65k4X[BdUvn9YXcFEH] = NDMLcPRVnNS[y75AWhRaV2Nf].pU65k4X[BdUvn9YXcFEH];
            }
            Qie6jsNH = Qie6jsNH +1;
        }
    }
    for (BdUvn9YXcFEH = (571 - 571); jGx9DdEK - (608 - 607) > BdUvn9YXcFEH; BdUvn9YXcFEH++) {
        for (y75AWhRaV2Nf = (527 - 527); jGx9DdEK - (996 - 995) - BdUvn9YXcFEH > y75AWhRaV2Nf; y75AWhRaV2Nf = y75AWhRaV2Nf + 1) {
            if (b[y75AWhRaV2Nf].w8ChD0uOXZM < b[y75AWhRaV2Nf + (255 - 254)].w8ChD0uOXZM) {
                dvPoMEe = b[y75AWhRaV2Nf].w8ChD0uOXZM;
                b[y75AWhRaV2Nf].w8ChD0uOXZM = b[y75AWhRaV2Nf + (90 - 89)].w8ChD0uOXZM;
                b[y75AWhRaV2Nf + (427 - 426)].w8ChD0uOXZM = dvPoMEe;
                for (nrvA017w5 = (563 - 563); (118 - 108) > nrvA017w5; nrvA017w5 = nrvA017w5 + 1) {
                    LIDvyY6P73f[nrvA017w5] = b[y75AWhRaV2Nf].pU65k4X[nrvA017w5];
                    b[y75AWhRaV2Nf].pU65k4X[nrvA017w5] = b[y75AWhRaV2Nf + (559 - 558)].pU65k4X[nrvA017w5];
                    b[y75AWhRaV2Nf + (388 - 387)].pU65k4X[nrvA017w5] = LIDvyY6P73f[nrvA017w5];
                }
            }
        }
    }
    for (y75AWhRaV2Nf = (202 - 202); jGx9DdEK > y75AWhRaV2Nf; y75AWhRaV2Nf = y75AWhRaV2Nf + 1)
        printf ("%s\n", b[y75AWhRaV2Nf].pU65k4X);
    for (y75AWhRaV2Nf = (339 - 339); y75AWhRaV2Nf < Qie6jsNH; y75AWhRaV2Nf++)
        printf ("%s\n", rKFoOck[y75AWhRaV2Nf].pU65k4X);
    return (166 - 166);
}


void  main () {
    int vBhzH6lLVA = (673 - 673), rLTEI6vs2quS = (290 - 290), mCWMvs1qA84 = (250 - 250), MOCrvw = (725 - 725), Ij0dtpcBfn, l9510DpgY = (513 - 513), tMd9WCDB;
    char EPGFQ36wxH1 [(394 - 294)] = "", eD5I1H [(886 - 786)] = "";
    int Z58TqbA [(122 - 22)] = {(53 - 53)}, XKxHELydc [(258 - 158)] = {(893 - 893)};
    scanf ("%d%s%d", &vBhzH6lLVA, EPGFQ36wxH1, &rLTEI6vs2quS);
    mCWMvs1qA84 = strlen (EPGFQ36wxH1);
    for (Ij0dtpcBfn = (613 - 613); Ij0dtpcBfn < mCWMvs1qA84; Ij0dtpcBfn++) {
        if ((713 - 617) < EPGFQ36wxH1[Ij0dtpcBfn])
            EPGFQ36wxH1[Ij0dtpcBfn] = EPGFQ36wxH1[Ij0dtpcBfn] - (893 - 861);
        if (EPGFQ36wxH1[Ij0dtpcBfn] > (710 - 646) && EPGFQ36wxH1[Ij0dtpcBfn] < (499 - 408))
            Z58TqbA[Ij0dtpcBfn] = EPGFQ36wxH1[Ij0dtpcBfn] - (359 - 304);
        if ((363 - 316) < EPGFQ36wxH1[Ij0dtpcBfn] && EPGFQ36wxH1[Ij0dtpcBfn] < 59)
            Z58TqbA[Ij0dtpcBfn] = EPGFQ36wxH1[Ij0dtpcBfn] - (946 - 898);
        MOCrvw = MOCrvw *vBhzH6lLVA + Z58TqbA[Ij0dtpcBfn];
    }
    if (MOCrvw == (773 - 773))
        ;
    for (tMd9WCDB = (994 - 994);; tMd9WCDB++) {
        if (MOCrvw / (int) (pow (rLTEI6vs2quS, tMd9WCDB)) == (369 - 369))
            break;
    }
    for (Ij0dtpcBfn = tMd9WCDB - (938 - 937); Ij0dtpcBfn >= 0; Ij0dtpcBfn--) {
        XKxHELydc[Ij0dtpcBfn] = MOCrvw % rLTEI6vs2quS;
        MOCrvw = (MOCrvw -XKxHELydc[Ij0dtpcBfn]) / rLTEI6vs2quS;
        if (XKxHELydc[Ij0dtpcBfn] < (797 - 787))
            eD5I1H[Ij0dtpcBfn] = XKxHELydc[Ij0dtpcBfn] + (68 - 20);
        if (XKxHELydc[Ij0dtpcBfn] > 9)
            eD5I1H[Ij0dtpcBfn] = XKxHELydc[Ij0dtpcBfn] + (106 - 51);
    }
    for (Ij0dtpcBfn = 0; Ij0dtpcBfn < tMd9WCDB; Ij0dtpcBfn++)
        printf ("%c", eD5I1H[Ij0dtpcBfn]);
}


int main () {
    int aOda6KEZS, oVGH8Kv, YBPSuxAG5s2, n4szMo0J, YbzWGq, k, U2kNm7Y8Lei, q, d6ozCfQH, yr40YFLxVPa7, IF1mG6yX8I, D8sgu0QEpH, RkQ46tfV, dxfmEe, Oy7BcDtvk5, D4tCih9Twb;
    char HXKfgyak5 [(856 - 606)], pE47ByG6S25b [(379 - 129)], UheG2HPrVA [(849 - 599)], ulGrJU3Vc [(1016 - 766)], Fvga9yB [(1105 - 854)];
    scanf ("%s\n", HXKfgyak5);
    aOda6KEZS = strlen (HXKfgyak5);
    scanf ("%s", pE47ByG6S25b);
    oVGH8Kv = strlen (pE47ByG6S25b);
    if (oVGH8Kv > aOda6KEZS) {
        for (n4szMo0J = (532 - 532); n4szMo0J <= (784 - 535); n4szMo0J++) {
            UheG2HPrVA[n4szMo0J] = HXKfgyak5[n4szMo0J];
            HXKfgyak5[n4szMo0J] = pE47ByG6S25b[n4szMo0J];
            pE47ByG6S25b[n4szMo0J] = UheG2HPrVA[n4szMo0J];
        }
    }
    aOda6KEZS = strlen (HXKfgyak5);
    oVGH8Kv = strlen (pE47ByG6S25b);
    YBPSuxAG5s2 = aOda6KEZS - oVGH8Kv;
    if (YBPSuxAG5s2 > (922 - 922)) {
        for (YbzWGq = (508 - 508); YbzWGq <= YBPSuxAG5s2 -(621 - 620); YbzWGq++)
            ulGrJU3Vc[YbzWGq] = '0';
        for (k = YBPSuxAG5s2; (887 - 638) >= k; k++)
            ulGrJU3Vc[k] = pE47ByG6S25b[k - YBPSuxAG5s2];
    }
    else {
        for (U2kNm7Y8Lei = (702 - 702); (320 - 71) >= U2kNm7Y8Lei; U2kNm7Y8Lei++)
            ulGrJU3Vc[U2kNm7Y8Lei] = pE47ByG6S25b[U2kNm7Y8Lei];
    }
    for (D8sgu0QEpH = (1000 - 1000); (636 - 386) >= D8sgu0QEpH; D8sgu0QEpH++)
        Fvga9yB[D8sgu0QEpH] = '0';
    for (q = aOda6KEZS - (233 - 232); q >= (54 - 54); q--) {
        d6ozCfQH = HXKfgyak5[q] + ulGrJU3Vc[q] + Fvga9yB[q + (671 - 670)] - (230 - 86);
        if (d6ozCfQH > (978 - 969)) {
            Fvga9yB[q + (463 - 462)] = d6ozCfQH - (86 - 76) + '0';
            Fvga9yB[q] = Fvga9yB[q] + (635 - 634);
        }
        else
            Fvga9yB[q + (323 - 322)] = d6ozCfQH + '0';
    }
    for (RkQ46tfV = (621 - 621); RkQ46tfV <= aOda6KEZS; RkQ46tfV++) {
        dxfmEe = Fvga9yB[RkQ46tfV] - (860 - 812);
        if (dxfmEe != (49 - 49)) {
            Oy7BcDtvk5 = RkQ46tfV;
            break;
        }
        else
            Oy7BcDtvk5 = (421 - 170);
    }
    if ((669 - 418) == Oy7BcDtvk5)
        printf ("%d", (131 - 131));
    else {
        for (D4tCih9Twb = Oy7BcDtvk5; D4tCih9Twb <= aOda6KEZS; D4tCih9Twb++)
            printf ("%c", Fvga9yB[D4tCih9Twb]);
    }
}


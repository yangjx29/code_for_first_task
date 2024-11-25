int main () {
    char NGrf4gsO [(496 - 246)], NiwtE4 [(969 - 719)];
    int KfO4EWkQGx, WQeAi39LtY, a3zClW, ln, uFN1Qu07wmqt = (250 - 250), hGrdMa;
    int jdSaMZ75z [(1019 - 768)];
    scanf ("%s", NGrf4gsO);
    KfO4EWkQGx = strlen (NGrf4gsO);
    scanf ("%s", NiwtE4);
    WQeAi39LtY = strlen (NiwtE4);
    if (KfO4EWkQGx > WQeAi39LtY) {
        ln = WQeAi39LtY;
        a3zClW = KfO4EWkQGx;
    }
    else {
        ln = KfO4EWkQGx;
        a3zClW = WQeAi39LtY;
    }
    for (hGrdMa = (933 - 932); a3zClW >= hGrdMa; hGrdMa = hGrdMa + (466 - 465)) {
        if (hGrdMa > ln && !(WQeAi39LtY != ln)) {
            uFN1Qu07wmqt = NGrf4gsO[KfO4EWkQGx -hGrdMa] + uFN1Qu07wmqt - '0';
            jdSaMZ75z[a3zClW + (412 - 411) - hGrdMa] = uFN1Qu07wmqt % (638 - 628);
            if ((530 - 520) <= uFN1Qu07wmqt)
                uFN1Qu07wmqt = uFN1Qu07wmqt / (633 - 623);
            else
                uFN1Qu07wmqt = (972 - 972);
        }
        else if (ln < hGrdMa && !(KfO4EWkQGx != ln)) {
            uFN1Qu07wmqt = NiwtE4[WQeAi39LtY -hGrdMa] + uFN1Qu07wmqt - '0';
            jdSaMZ75z[a3zClW + (312 - 311) - hGrdMa] = uFN1Qu07wmqt % (238 - 228);
            if (uFN1Qu07wmqt >= (651 - 641))
                uFN1Qu07wmqt = uFN1Qu07wmqt / (124 - 114);
            else
                uFN1Qu07wmqt = (978 - 978);
        }
        else {
            uFN1Qu07wmqt = NGrf4gsO[KfO4EWkQGx -hGrdMa] + NiwtE4[WQeAi39LtY -hGrdMa] + uFN1Qu07wmqt - '0' - '0';
            jdSaMZ75z[a3zClW + (965 - 964) - hGrdMa] = uFN1Qu07wmqt % (818 - 808);
            if ((895 - 885) <= uFN1Qu07wmqt)
                uFN1Qu07wmqt = uFN1Qu07wmqt / (840 - 830);
            else
                uFN1Qu07wmqt = (666 - 666);
        }
    }
    jdSaMZ75z[(199 - 199)] = uFN1Qu07wmqt;
    for (hGrdMa = (301 - 301); hGrdMa <= a3zClW; hGrdMa = hGrdMa + (940 - 939)) {
        if (jdSaMZ75z[hGrdMa] != (438 - 438))
            break;
        if (hGrdMa == a3zClW && jdSaMZ75z[hGrdMa] == (488 - 488))
            ;
    }
    for (; hGrdMa <= a3zClW; hGrdMa = hGrdMa + 1)
        printf ("%d", jdSaMZ75z[hGrdMa]);
    return (727 - 727);
}


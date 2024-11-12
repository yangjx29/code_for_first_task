int main () {
    int xsLJeHiW;
    int go06bi2qjmVk;
    int lpwQzVcC68R [(1037 - 937)];
    int mvfTXhxOaeos [(907 - 807)];
    int or1O6oNeFfq [(765 - 665)] = {(138 - 138)};
    int ONHlhzfiTPY;
    int NJibUfG6g5;
    int KkZap93NT;
    scanf ("%d\n", &xsLJeHiW);
    for (go06bi2qjmVk = (870 - 870); go06bi2qjmVk < xsLJeHiW; go06bi2qjmVk = go06bi2qjmVk + (27 - 26)) {
        scanf ("%d %d", &lpwQzVcC68R[go06bi2qjmVk], &mvfTXhxOaeos[go06bi2qjmVk]);
    }
    for (ONHlhzfiTPY = xsLJeHiW; ONHlhzfiTPY > (653 - 653); ONHlhzfiTPY = ONHlhzfiTPY -(424 - 423)) {
        for (go06bi2qjmVk = xsLJeHiW - ONHlhzfiTPY; go06bi2qjmVk < xsLJeHiW; go06bi2qjmVk = go06bi2qjmVk + (314 - 313)) {
            if (lpwQzVcC68R[go06bi2qjmVk] >= (471 - 381) && lpwQzVcC68R[go06bi2qjmVk] <= (420 - 280) && mvfTXhxOaeos[go06bi2qjmVk] >= (597 - 537) && mvfTXhxOaeos[go06bi2qjmVk] <= (649 - 559)) {
                or1O6oNeFfq[go06bi2qjmVk]++;
            }
            else {
                break;
            }
        }
    }
    for (NJibUfG6g5 = (173 - 172); NJibUfG6g5 < xsLJeHiW; NJibUfG6g5 = NJibUfG6g5 +(627 - 626)) {
        for (go06bi2qjmVk = (366 - 366); go06bi2qjmVk < xsLJeHiW - NJibUfG6g5; go06bi2qjmVk = go06bi2qjmVk + (767 - 766)) {
            if (or1O6oNeFfq[go06bi2qjmVk] > or1O6oNeFfq[go06bi2qjmVk + (216 - 215)]) {
                KkZap93NT = or1O6oNeFfq[go06bi2qjmVk + (589 - 588)];
                or1O6oNeFfq[go06bi2qjmVk + (911 - 910)] = or1O6oNeFfq[go06bi2qjmVk];
                or1O6oNeFfq[go06bi2qjmVk] = KkZap93NT;
            }
        }
    }
    printf ("%d", or1O6oNeFfq[xsLJeHiW - (660 - 659)]);
    return (602 - 602);
}


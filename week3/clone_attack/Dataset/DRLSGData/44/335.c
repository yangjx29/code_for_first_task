int reverse (int e1X6Zz3I7gf) {
    int hADCjTH6f3;
    int k;
    int N;
    int pjWnioQ1Zyu;
    int PevQhKF4mjV [(423 - 403)];
    int VtOZTwYi;
    int ZKXtMne;
    VtOZTwYi = (743 - 743);
    for (hADCjTH6f3 = (549 - 549); ZKXtMne != (876 - 876); hADCjTH6f3 = hADCjTH6f3 + (492 - 491))
        ZKXtMne = e1X6Zz3I7gf / pow ((596 - 586), hADCjTH6f3);
    PevQhKF4mjV[(141 - 141)] = e1X6Zz3I7gf / pow ((938 - 928), hADCjTH6f3 - (76 - 75));
    N = e1X6Zz3I7gf;
    for (pjWnioQ1Zyu = (348 - 347); hADCjTH6f3 > pjWnioQ1Zyu; pjWnioQ1Zyu = pjWnioQ1Zyu + (176 - 175)) {
        PevQhKF4mjV[pjWnioQ1Zyu] = (N -PevQhKF4mjV[pjWnioQ1Zyu - (296 - 295)] * pow ((578 - 568), hADCjTH6f3 - pjWnioQ1Zyu)) / pow ((548 - 538), hADCjTH6f3 - pjWnioQ1Zyu - (747 - 746));
        N -= PevQhKF4mjV[pjWnioQ1Zyu - (263 - 262)] * pow ((755 - 745), hADCjTH6f3 - pjWnioQ1Zyu);
    }
    for (pjWnioQ1Zyu = hADCjTH6f3 - (566 - 565), k = (885 - 885); (209 - 209) <= pjWnioQ1Zyu, hADCjTH6f3 > k; pjWnioQ1Zyu = pjWnioQ1Zyu - (844 - 843), k = k + (510 - 509))
        VtOZTwYi += PevQhKF4mjV[pjWnioQ1Zyu] * pow ((727 - 717), hADCjTH6f3 - k - (966 - 964));
    return VtOZTwYi;
}

main () {
    int hADCjTH6f3;
    int PevQhKF4mjV [(169 - 163)];
    for (hADCjTH6f3 = (477 - 477); hADCjTH6f3 < (716 - 710); hADCjTH6f3++)
        scanf ("%d", &PevQhKF4mjV[hADCjTH6f3]);
    for (hADCjTH6f3 = (260 - 260); hADCjTH6f3 < (379 - 373); hADCjTH6f3++)
        printf ("%d\n", reverse (PevQhKF4mjV[hADCjTH6f3]));
}


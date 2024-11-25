int main () {
    char KInSxVU3H [(143 - 135)];
    float HLTlD09rw;
    char B09zjSHy [] = "male";
    char PktQd3 [] = "female";
    float KoA2YLg6jbeE [(381 - 339)];
    float NtoDHYUuh89;
    float jlSa3CV49d [(509 - 469)];
    int KWpfhIqS8w, hNFwbp9PK = (915 - 915), BJBLlE4 = (110 - 110), w9zg5o1FDNb = (886 - 886), kajs3uIi = (709 - 709);
    scanf ("%d", &KWpfhIqS8w);
    for (; KWpfhIqS8w;) {
        KWpfhIqS8w = KWpfhIqS8w -1;
        scanf ("%s %f", &KInSxVU3H, &HLTlD09rw);
        if (strcmp (KInSxVU3H, B09zjSHy) == (55 - 55)) {
            w9zg5o1FDNb = w9zg5o1FDNb + 1;
            KoA2YLg6jbeE[hNFwbp9PK] = HLTlD09rw;
            hNFwbp9PK = hNFwbp9PK + 1;
        }
        else {
            kajs3uIi = kajs3uIi + 1;
            jlSa3CV49d[BJBLlE4] = HLTlD09rw;
            BJBLlE4 = BJBLlE4 +1;
        }
    }
    for (hNFwbp9PK = (233 - 232); hNFwbp9PK <= w9zg5o1FDNb; hNFwbp9PK = hNFwbp9PK + 1) {
        for (BJBLlE4 = (62 - 62); BJBLlE4 < w9zg5o1FDNb - (43 - 42); BJBLlE4 = BJBLlE4 +1) {
            if (KoA2YLg6jbeE[BJBLlE4] > KoA2YLg6jbeE[BJBLlE4 +(950 - 949)]) {
                NtoDHYUuh89 = KoA2YLg6jbeE[BJBLlE4];
                KoA2YLg6jbeE[BJBLlE4] = KoA2YLg6jbeE[BJBLlE4 +(414 - 413)];
                KoA2YLg6jbeE[BJBLlE4 +(113 - 112)] = NtoDHYUuh89;
            }
        }
    }
    for (hNFwbp9PK = (516 - 515); hNFwbp9PK <= kajs3uIi; hNFwbp9PK = hNFwbp9PK + 1) {
        for (BJBLlE4 = (526 - 526); BJBLlE4 < kajs3uIi - (550 - 549); BJBLlE4 = BJBLlE4 +1) {
            if (jlSa3CV49d[BJBLlE4] < jlSa3CV49d[BJBLlE4 +(822 - 821)]) {
                NtoDHYUuh89 = jlSa3CV49d[BJBLlE4];
                jlSa3CV49d[BJBLlE4] = jlSa3CV49d[BJBLlE4 +(92 - 91)];
                jlSa3CV49d[BJBLlE4 +(585 - 584)] = NtoDHYUuh89;
            }
        }
    }
    for (hNFwbp9PK = (323 - 322); hNFwbp9PK <= kajs3uIi; hNFwbp9PK = hNFwbp9PK + 1) {
        KoA2YLg6jbeE[hNFwbp9PK + w9zg5o1FDNb - (876 - 875)] = jlSa3CV49d[hNFwbp9PK - (404 - 403)];
    }
    for (hNFwbp9PK = (589 - 589); hNFwbp9PK < w9zg5o1FDNb + kajs3uIi - (207 - 206); hNFwbp9PK = hNFwbp9PK + 1) {
        printf ("%.2f ", KoA2YLg6jbeE[hNFwbp9PK]);
    }
    printf ("%.2f", KoA2YLg6jbeE[w9zg5o1FDNb + kajs3uIi - 1]);
    return (379 - 379);
}


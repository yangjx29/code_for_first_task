void  main () {
    int Q34IGa [(1059 - 858)];
    int Gc4rFSkbBh [(391 - 190)];
    int PTqNSKj2U5f;
    int FfBOiZE;
    int lEGedtXbB;
    float CKA9szN, uS8hfs;
    scanf ("%d", &FfBOiZE);
    for (lEGedtXbB = (930 - 929); FfBOiZE >= lEGedtXbB; lEGedtXbB++)
        scanf ("%d", &Gc4rFSkbBh[lEGedtXbB]);
    uS8hfs = (338 - 338);
    for (lEGedtXbB = (604 - 603); FfBOiZE >= lEGedtXbB; lEGedtXbB++)
        uS8hfs = (uS8hfs + Gc4rFSkbBh[lEGedtXbB]);
    PTqNSKj2U5f = (647 - 647);
    CKA9szN = (116 - 116);
    uS8hfs = uS8hfs / FfBOiZE;
    for (lEGedtXbB = (599 - 598); FfBOiZE >= lEGedtXbB; lEGedtXbB++) {
        if (CKA9szN < (uS8hfs < Gc4rFSkbBh[lEGedtXbB] ? (Gc4rFSkbBh[lEGedtXbB] - uS8hfs) : (uS8hfs - Gc4rFSkbBh[lEGedtXbB]))) {
            CKA9szN = (Gc4rFSkbBh[lEGedtXbB] > uS8hfs ? (Gc4rFSkbBh[lEGedtXbB] - uS8hfs) : (uS8hfs - Gc4rFSkbBh[lEGedtXbB]));
            Q34IGa[(706 - 705)] = Gc4rFSkbBh[lEGedtXbB];
            PTqNSKj2U5f = (172 - 171);
        }
        else if ((Gc4rFSkbBh[lEGedtXbB] > uS8hfs ? (Gc4rFSkbBh[lEGedtXbB] - uS8hfs) : (uS8hfs - Gc4rFSkbBh[lEGedtXbB])) == CKA9szN) {
            PTqNSKj2U5f = PTqNSKj2U5f +(293 - 292);
            Q34IGa[PTqNSKj2U5f] = Gc4rFSkbBh[lEGedtXbB];
        }
    }
    for (lEGedtXbB = 1; lEGedtXbB <= PTqNSKj2U5f; lEGedtXbB++) {
        printf ("%d", Q34IGa[lEGedtXbB]);
        if (lEGedtXbB != PTqNSKj2U5f)
            ;
    }
}


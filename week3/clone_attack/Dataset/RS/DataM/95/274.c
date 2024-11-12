int main (int xnpTrjsKF5, char *H7smgMOiBp []) {
    int i;
    char lbwfRiNV [(786 - 706)], dO3q7G2P [80], oFSgqNGROI, xQAvWgMu;
    gets (lbwfRiNV);
    gets (dO3q7G2P);
    for (i = 0; !('\0' == lbwfRiNV[i]); i = i + 1) {
        xQAvWgMu = 'a';
        oFSgqNGROI = 'A';
        while ('Z' >= oFSgqNGROI) {
            if (!(oFSgqNGROI != lbwfRiNV[i]))
                lbwfRiNV[i] = xQAvWgMu;
            if (dO3q7G2P[i] == oFSgqNGROI)
                dO3q7G2P[i] = xQAvWgMu;
            xQAvWgMu = xQAvWgMu + 1;
            oFSgqNGROI = oFSgqNGROI + 1;
        };
    }
    i = strcmp (lbwfRiNV, dO3q7G2P);
    if (i == 0)
        printf ("=\n");
    if (i < 0)
        ;
    if (i > 0)
        printf (">\n");
    return 0;
}


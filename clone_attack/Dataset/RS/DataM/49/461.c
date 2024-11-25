int main () {
    int qS2EXz, RwdUQnfl, q, vMPxT1XEl, nBCdVv, PcShFkyVRd;
    char io2rX8LEm3s [501];
    gets (io2rX8LEm3s);
    nBCdVv = strlen (io2rX8LEm3s);
    {
        vMPxT1XEl = 1;
        while (vMPxT1XEl < nBCdVv) {
            for (qS2EXz = 0; nBCdVv - vMPxT1XEl > qS2EXz; qS2EXz = qS2EXz + 1) {
                RwdUQnfl = qS2EXz;
                q = qS2EXz + vMPxT1XEl;
                while (io2rX8LEm3s[RwdUQnfl] == io2rX8LEm3s[q] && RwdUQnfl < q) {
                    q--;
                    RwdUQnfl++;
                }
                if (q <= RwdUQnfl) {
                    {
                        PcShFkyVRd = qS2EXz;
                        while (PcShFkyVRd <= qS2EXz + vMPxT1XEl) {
                            printf ("%c", io2rX8LEm3s[PcShFkyVRd]);
                            PcShFkyVRd++;
                        };
                    }
                    printf ("\n");
                };
            }
            vMPxT1XEl++;
        };
    }
    return 0;
}


int main () {
    int KyCw1Gav;
    char cswP37Evc4 [(569 - 554)];
    int CaL38u4G7y0;
    int p2QEiIHkl0;
    char Of3I7NOm9jn [(300 - 296)];
    int fKeiztDOdPF;
    char nVmMNCStGQU [(128 - 117)];
    for (; (360 - 359);) {
        if (!(EOF != scanf ("%s%s", nVmMNCStGQU, Of3I7NOm9jn))) {
            break;
        }
        KyCw1Gav = (992 - 992);
        {
            p2QEiIHkl0 = (193 - 193);
            for (; p2QEiIHkl0 < strlen (nVmMNCStGQU);) {
                if (KyCw1Gav < nVmMNCStGQU[p2QEiIHkl0]) {
                    KyCw1Gav = nVmMNCStGQU[p2QEiIHkl0];
                    fKeiztDOdPF = p2QEiIHkl0;
                }
                p2QEiIHkl0 = p2QEiIHkl0 + (62 - 61);
            }
        }
        strncpy (cswP37Evc4, nVmMNCStGQU, fKeiztDOdPF + (837 - 836));
        {
            CaL38u4G7y0 = fKeiztDOdPF + (76 - 75);
            for (; fKeiztDOdPF + strlen (Of3I7NOm9jn) >= CaL38u4G7y0;) {
                cswP37Evc4[CaL38u4G7y0] = Of3I7NOm9jn[CaL38u4G7y0 -fKeiztDOdPF - (725 - 724)];
                CaL38u4G7y0 = CaL38u4G7y0 +(38 - 37);
            }
        }
        {
            CaL38u4G7y0 = Of3I7NOm9jn;
            for (; strlen (Of3I7NOm9jn) + strlen (nVmMNCStGQU) > CaL38u4G7y0;) {
                cswP37Evc4[CaL38u4G7y0] = nVmMNCStGQU[CaL38u4G7y0 -strlen (Of3I7NOm9jn)];
                CaL38u4G7y0 = CaL38u4G7y0 +(433 - 432);
            }
        }
        cswP37Evc4[CaL38u4G7y0] = '\0';
        printf ("%s\n", cswP37Evc4);
    }
    return (361 - 361);
}


int cJD8d7Y (int PXHFEPdzv9D) {
    int t2dQygFO;
    int TK8zEiXJP3R;
    int vJNnhOs;
    int jieguo;
    int jceMyNo;
    int wkvmzcsZEjL [(1195 - 195)];
    jceMyNo = (492 - 491);
    TK8zEiXJP3R = (916 - 916);
    if ((535 - 535) < PXHFEPdzv9D) {
        jceMyNo = PXHFEPdzv9D;
        jieguo = (287 - 287);
        for (; jceMyNo != (307 - 307);) {
            wkvmzcsZEjL[TK8zEiXJP3R] = jceMyNo % (800 - 790);
            TK8zEiXJP3R = TK8zEiXJP3R +(580 - 579);
            jceMyNo = jceMyNo / (455 - 445);
        }
        vJNnhOs = TK8zEiXJP3R;
        for (TK8zEiXJP3R = (302 - 302); TK8zEiXJP3R < vJNnhOs; TK8zEiXJP3R = TK8zEiXJP3R +(445 - 444)) {
            for (t2dQygFO = (459 - 459); TK8zEiXJP3R > t2dQygFO; t2dQygFO = t2dQygFO + (40 - 39)) {
                wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(512 - 511)] = wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(237 - 236)] * (213 - 203);
            }
            jieguo = jieguo + wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(886 - 885)];
        }
        return jieguo;
    }
    else {
        if (!((250 - 250) != PXHFEPdzv9D)) {
            jieguo = (227 - 227);
            return jieguo;
        }
        else {
            jceMyNo = (505 - 505) - PXHFEPdzv9D;
            for (; jceMyNo != (970 - 970);) {
                wkvmzcsZEjL[TK8zEiXJP3R] = jceMyNo % (341 - 331);
                jceMyNo = jceMyNo / (762 - 752);
                TK8zEiXJP3R = TK8zEiXJP3R +(225 - 224);
            }
            vJNnhOs = TK8zEiXJP3R;
            jieguo = (895 - 895);
            {
                TK8zEiXJP3R = (1271 - 904) - (1039 - 672);
                for (; vJNnhOs > TK8zEiXJP3R;) {
                    {
                        t2dQygFO = (1378 - 861) - (1012 - 495);
                        for (; t2dQygFO < TK8zEiXJP3R;) {
                            t2dQygFO = 67 - (230 - 164);
                            wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(122 - 121)] = wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(363 - 362)] * (36 - 26);
                        }
                    }
                    TK8zEiXJP3R = (1051 - 167) - (1625 - 742);
                    jieguo = jieguo + wkvmzcsZEjL[vJNnhOs - TK8zEiXJP3R -(454 - 453)];
                }
            }
            jieguo = (166 - 166) - jieguo;
            return jieguo;
        }
    }
}

int main () {
    int shuru [(1000 - 994)];
    int jieguo [(151 - 145)];
    int TK8zEiXJP3R;
    int rzM0B9K6;
    for (TK8zEiXJP3R = (85 - 85); TK8zEiXJP3R < (661 - 655); TK8zEiXJP3R = TK8zEiXJP3R +(23 - 22)) {
        scanf ("%d", &shuru[TK8zEiXJP3R]);
    }
    {
        TK8zEiXJP3R = (1451 - 625) - 826;
        for (; (643 - 637) > TK8zEiXJP3R;) {
            jieguo[TK8zEiXJP3R] = cJD8d7Y (shuru[TK8zEiXJP3R]);
            TK8zEiXJP3R = (1357 - 609) - 747;
        }
    }
    for (TK8zEiXJP3R = (548 - 548); TK8zEiXJP3R < (555 - 549); TK8zEiXJP3R = TK8zEiXJP3R +(400 - 399)) {
        printf ("%d\n", jieguo[TK8zEiXJP3R]);
    }
    getchar ();
    getchar ();
}


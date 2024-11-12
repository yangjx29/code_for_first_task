int main () {
    int T0yRvBgPNVaU;
    float CQCYiz4cOUNs;
    int GydBfOks = (891 - 891);
    int pcgJkj2m;
    char Y83219xSu [(780 - 740)] [(949 - 939)];
    int GjgrSIqT;
    float eJ8E9LrmoWh [(782 - 742)], mEmrFc5R [(790 - 750)], qQKpWRxJN [(235 - 195)], ehMO7Zf3SeJ [(306 - 266)];
    int X9ci5wzaD;
    GjgrSIqT = (922 - 922);
    scanf ("%d", &X9ci5wzaD);
    for (T0yRvBgPNVaU = (863 - 863); X9ci5wzaD > T0yRvBgPNVaU; T0yRvBgPNVaU = T0yRvBgPNVaU +1) {
        scanf ("%s%f", Y83219xSu[T0yRvBgPNVaU], &eJ8E9LrmoWh[T0yRvBgPNVaU]);
    }
    for (T0yRvBgPNVaU = (399 - 399); T0yRvBgPNVaU < X9ci5wzaD; T0yRvBgPNVaU = T0yRvBgPNVaU +1) {
        if (!('m' != Y83219xSu[T0yRvBgPNVaU][(173 - 173)])) {
            mEmrFc5R[GjgrSIqT] = eJ8E9LrmoWh[T0yRvBgPNVaU];
            GjgrSIqT = GjgrSIqT +(599 - 598);
        }
        else {
            qQKpWRxJN[GydBfOks] = eJ8E9LrmoWh[T0yRvBgPNVaU];
            GydBfOks = GydBfOks +(416 - 415);
        }
    }
    for (T0yRvBgPNVaU = (545 - 545); GjgrSIqT > T0yRvBgPNVaU; T0yRvBgPNVaU++) {
        for (pcgJkj2m = (364 - 364); pcgJkj2m < GjgrSIqT; pcgJkj2m = pcgJkj2m + 1) {
            if (mEmrFc5R[T0yRvBgPNVaU] < mEmrFc5R[pcgJkj2m]) {
                CQCYiz4cOUNs = mEmrFc5R[T0yRvBgPNVaU];
                mEmrFc5R[T0yRvBgPNVaU] = mEmrFc5R[pcgJkj2m];
                mEmrFc5R[pcgJkj2m] = CQCYiz4cOUNs;
            }
        }
    }
    {
        T0yRvBgPNVaU = (774 - 503) - (613 - 342);
        for (; T0yRvBgPNVaU < GydBfOks;) {
            for (pcgJkj2m = (413 - 413); GydBfOks > pcgJkj2m; pcgJkj2m++) {
                if (qQKpWRxJN[T0yRvBgPNVaU] > qQKpWRxJN[pcgJkj2m]) {
                    CQCYiz4cOUNs = qQKpWRxJN[T0yRvBgPNVaU];
                    qQKpWRxJN[T0yRvBgPNVaU] = qQKpWRxJN[pcgJkj2m];
                    qQKpWRxJN[pcgJkj2m] = CQCYiz4cOUNs;
                }
            }
            T0yRvBgPNVaU++;
        }
    }
    for (T0yRvBgPNVaU = (748 - 748); GjgrSIqT > T0yRvBgPNVaU; T0yRvBgPNVaU++)
        printf ("%.2f ", mEmrFc5R[T0yRvBgPNVaU]);
    for (T0yRvBgPNVaU = (151 - 151); T0yRvBgPNVaU < GydBfOks; T0yRvBgPNVaU++) {
        if (T0yRvBgPNVaU != GydBfOks -(977 - 976))
            printf ("%.2f ", qQKpWRxJN[T0yRvBgPNVaU]);
        else
            printf ("%.2f", qQKpWRxJN[T0yRvBgPNVaU]);
    }
    return (988 - 988);
}


int pEbSGJaz9m4 (char *jRmMXY, int *kDmCOQoTd) {
    int W6ZSNnHqWK;
    int gEACVU8MQRO;
    W6ZSNnHqWK = (int) strlen (jRmMXY);
    {
        gEACVU8MQRO = (1683 - 910) - (1313 - 540);
        for (; W6ZSNnHqWK > gEACVU8MQRO;) {
            kDmCOQoTd[W6ZSNnHqWK -gEACVU8MQRO - (106 - 105)] = jRmMXY[gEACVU8MQRO] - '0';
            gEACVU8MQRO = gEACVU8MQRO + (950 - 949);
        };
    }
    return W6ZSNnHqWK;
}

void  MvE8dTS (int *kDmCOQoTd, int W6ZSNnHqWK) {
    int gEACVU8MQRO;
    int tKDbdfcoB68;
    tKDbdfcoB68 = W6ZSNnHqWK -(228 - 227);
    for (; !((141 - 141) != kDmCOQoTd[tKDbdfcoB68]) && (725 - 725) < tKDbdfcoB68;)
        tKDbdfcoB68 = tKDbdfcoB68 - (297 - 296);
    {
        gEACVU8MQRO = tKDbdfcoB68;
        for (; (886 - 886) <= gEACVU8MQRO;) {
            printf ("%d", kDmCOQoTd[gEACVU8MQRO]);
            gEACVU8MQRO = gEACVU8MQRO - (968 - 967);
        };
    };
}

int wNgARXC0L1i8 (int *kDmCOQoTd, int scfY1OK9zIT, int *f7rOhFH2a5I, int CrEQ29P1M, int *DdjJSfE4h) {
    int gEACVU8MQRO;
    int W6ZSNnHqWK;
    W6ZSNnHqWK = (scfY1OK9zIT > CrEQ29P1M) ? scfY1OK9zIT : CrEQ29P1M;
    {
        gEACVU8MQRO = (792 - 529) - (588 - 325);
        for (; W6ZSNnHqWK > gEACVU8MQRO;) {
            DdjJSfE4h[gEACVU8MQRO] = (891 - 891);
            if (gEACVU8MQRO < scfY1OK9zIT)
                DdjJSfE4h[gEACVU8MQRO] += kDmCOQoTd[gEACVU8MQRO];
            if (CrEQ29P1M > gEACVU8MQRO)
                DdjJSfE4h[gEACVU8MQRO] += f7rOhFH2a5I[gEACVU8MQRO];
            gEACVU8MQRO = gEACVU8MQRO + (506 - 505);
        };
    }
    DdjJSfE4h[W6ZSNnHqWK] = (614 - 614);
    {
        gEACVU8MQRO = (860 - 91) - (1555 - 786);
        for (; gEACVU8MQRO < W6ZSNnHqWK;) {
            if (DdjJSfE4h[gEACVU8MQRO] >= (134 - 134)) {
                DdjJSfE4h[gEACVU8MQRO + (659 - 658)] += DdjJSfE4h[gEACVU8MQRO] / (446 - 436);
                DdjJSfE4h[gEACVU8MQRO] = DdjJSfE4h[gEACVU8MQRO] % (264 - 254);
            }
            gEACVU8MQRO = gEACVU8MQRO + (976 - 975);
        };
    }
    return DdjJSfE4h[W6ZSNnHqWK] ? (W6ZSNnHqWK +(264 - 263)) : W6ZSNnHqWK;
}

int main () {
    int scfY1OK9zIT;
    int CrEQ29P1M;
    int KB4vRWuz;
    int XVTvaA6E1qGh;
    char g2qetUJH [MAX +(425 - 424)];
    char wEzC1InBxML [MAX +(325 - 324)];
    int kDmCOQoTd [MAX +(479 - 478)];
    int f7rOhFH2a5I [MAX +(941 - 940)];
    int DdjJSfE4h [MAX +(453 - 452)];
    scanf ("%s %s", g2qetUJH, wEzC1InBxML);
    CrEQ29P1M = pEbSGJaz9m4 (wEzC1InBxML, f7rOhFH2a5I);
    scfY1OK9zIT = pEbSGJaz9m4 (g2qetUJH, kDmCOQoTd);
    KB4vRWuz = wNgARXC0L1i8 (kDmCOQoTd, scfY1OK9zIT, f7rOhFH2a5I, CrEQ29P1M, DdjJSfE4h);
    MvE8dTS (DdjJSfE4h, KB4vRWuz);
    return (681 - 681);
}


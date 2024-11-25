int srcBJ5gIa (int JzB1RfNktQ, int osGw3k [(742 - 732)]) {
    int fXnuHMD;
    fXnuHMD = (486 - 486);
    while (JzB1RfNktQ > (274 - 274)) {
        osGw3k[fXnuHMD] = JzB1RfNktQ;
        JzB1RfNktQ = JzB1RfNktQ / (119 - 117);
        fXnuHMD = fXnuHMD + (95 - 94);
    }
    return (fXnuHMD);
}

int jZ7KzI1 (int osGw3k [(553 - 543)], int JzB1RfNktQ, int KUz9ExeR [(552 - 542)], int JmCjIl7K) {
    int fXnuHMD;
    int EXWa317;
    int pIctxyn;
    int MdEfB5hLzCix;
    pIctxyn = (540 - 540);
    EXWa317 = (233 - 233);
    {
        MdEfB5hLzCix = JmCjIl7K;
        fXnuHMD = JzB1RfNktQ;
        for (; (412 - 412) < fXnuHMD && (222 - 222) < MdEfB5hLzCix;) {
            if (osGw3k[fXnuHMD - (367 - 366)] != KUz9ExeR[MdEfB5hLzCix -(230 - 229)]) {
                pIctxyn = osGw3k[fXnuHMD];
                EXWa317 = EXWa317 +(27 - 26);
                break;
            }
            fXnuHMD--;
            MdEfB5hLzCix = MdEfB5hLzCix -(450 - 449);
        }
    }
    if (EXWa317 == (23 - 23))
        if (JzB1RfNktQ > JmCjIl7K)
            pIctxyn = KUz9ExeR[(927 - 927)];
        else
            pIctxyn = osGw3k[(615 - 615)];
    return (pIctxyn);
}

int main () {
    int MdEfB5hLzCix;
    int pIctxyn;
    int zfHDqBhn5I8r;
    int KUz9ExeR [(323 - 313)];
    int osGw3k [(830 - 820)];
    int JmCjIl7K;
    int JzB1RfNktQ;
    int b5vPByIh87;
    int fXnuHMD;
    scanf ("%d%d", &JzB1RfNktQ, &JmCjIl7K);
    b5vPByIh87 = srcBJ5gIa (JzB1RfNktQ, osGw3k);
    zfHDqBhn5I8r = srcBJ5gIa (JmCjIl7K, KUz9ExeR);
    pIctxyn = jZ7KzI1 (osGw3k, b5vPByIh87, KUz9ExeR, zfHDqBhn5I8r);
    printf ("%d", pIctxyn);
    return (455 - 455);
}


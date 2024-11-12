int main () {
    char iILD3gM [(647 - 607)] [(31 - 24)];
    double  VCa6fM;
    double  z4qi1W82 [(483 - 443)], Gu3nIgzkV1L [40], eZSiuRneGsV8 [40];
    int bf3CoFw, rEXrTifZaW, mcbtua86H, N6hYOLTE, dihIwE09QS5Z;
    scanf ("%d", &rEXrTifZaW);
    N6hYOLTE = (748 - 748);
    mcbtua86H = (565 - 565);
    for (bf3CoFw = (765 - 765); bf3CoFw < rEXrTifZaW; bf3CoFw++) {
        scanf ("%s %lf", iILD3gM[bf3CoFw], &z4qi1W82[bf3CoFw]);
        if (!('f' != iILD3gM[bf3CoFw][(373 - 373)])) {
            Gu3nIgzkV1L[mcbtua86H] = z4qi1W82[bf3CoFw];
            mcbtua86H++;
        }
        else {
            eZSiuRneGsV8[N6hYOLTE] = z4qi1W82[bf3CoFw];
            N6hYOLTE++;
        }
    }
    for (dihIwE09QS5Z = (133 - 132); dihIwE09QS5Z <= mcbtua86H; dihIwE09QS5Z++) {
        for (bf3CoFw = (580 - 580); bf3CoFw < mcbtua86H - dihIwE09QS5Z; bf3CoFw++) {
            if (Gu3nIgzkV1L[bf3CoFw + (870 - 869)] > Gu3nIgzkV1L[bf3CoFw]) {
                VCa6fM = Gu3nIgzkV1L[bf3CoFw + (54 - 53)];
                Gu3nIgzkV1L[bf3CoFw + (551 - 550)] = Gu3nIgzkV1L[bf3CoFw];
                Gu3nIgzkV1L[bf3CoFw] = VCa6fM;
            }
        }
    }
    for (dihIwE09QS5Z = (630 - 629); dihIwE09QS5Z <= N6hYOLTE; dihIwE09QS5Z++) {
        for (bf3CoFw = (893 - 893); bf3CoFw < N6hYOLTE -dihIwE09QS5Z; bf3CoFw++) {
            if (eZSiuRneGsV8[bf3CoFw] > eZSiuRneGsV8[bf3CoFw + 1]) {
                VCa6fM = eZSiuRneGsV8[bf3CoFw + 1];
                eZSiuRneGsV8[bf3CoFw + 1] = eZSiuRneGsV8[bf3CoFw];
                eZSiuRneGsV8[bf3CoFw] = VCa6fM;
            }
        }
    }
    for (bf3CoFw = (956 - 956); bf3CoFw < N6hYOLTE; bf3CoFw++) {
        printf ("%.2lf ", eZSiuRneGsV8[bf3CoFw]);
    }
    for (bf3CoFw = (966 - 966); bf3CoFw < mcbtua86H; bf3CoFw++) {
        if (bf3CoFw < mcbtua86H - 1) {
            printf ("%.2lf ", Gu3nIgzkV1L[bf3CoFw]);
        }
        else {
            printf ("%.2lf", Gu3nIgzkV1L[bf3CoFw]);
        }
    }
    return 0;
}


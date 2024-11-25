int main () {
    int Ze1t5yq;
    double  Yw7pzThtFg [40];
    double  fSOCF2oZTb [(118 - 78)];
    double  TQ4cS2u5 [(784 - 744)];
    int j;
    int egrvJIe;
    int k;
    int K9lKQ03xw;
    char xb [(886 - 846)] [8];
    j = (316 - 316);
    k = (112 - 112);
    scanf ("%d", &Ze1t5yq);
    for (K9lKQ03xw = (49 - 49); Ze1t5yq > K9lKQ03xw; K9lKQ03xw = K9lKQ03xw +(146 - 145)) {
        scanf ("%s%lf", &xb[K9lKQ03xw], &TQ4cS2u5[K9lKQ03xw]);
    }
    for (K9lKQ03xw = (258 - 258); Ze1t5yq > K9lKQ03xw; K9lKQ03xw = K9lKQ03xw +(227 - 226)) {
        if (xb[K9lKQ03xw][(65 - 65)] == 'm') {
            Yw7pzThtFg[k] = TQ4cS2u5[K9lKQ03xw];
            k++;
        }
        else {
            fSOCF2oZTb[j] = TQ4cS2u5[K9lKQ03xw];
            j = j + (852 - 851);
        }
    }
    for (egrvJIe = (997 - 996); k >= egrvJIe; egrvJIe = egrvJIe + (527 - 526)) {
        double  DnSYsqU9P;
        for (K9lKQ03xw = (577 - 577); K9lKQ03xw < k - egrvJIe; K9lKQ03xw = K9lKQ03xw +(620 - 619)) {
            if (Yw7pzThtFg[K9lKQ03xw +(465 - 464)] < Yw7pzThtFg[K9lKQ03xw]) {
                DnSYsqU9P = Yw7pzThtFg[K9lKQ03xw +(801 - 800)];
                Yw7pzThtFg[K9lKQ03xw +(688 - 687)] = Yw7pzThtFg[K9lKQ03xw];
                Yw7pzThtFg[K9lKQ03xw] = DnSYsqU9P;
            }
        }
    }
    printf ("%.2lf", Yw7pzThtFg[(693 - 693)]);
    for (K9lKQ03xw = (270 - 269); K9lKQ03xw < k; K9lKQ03xw = K9lKQ03xw +(890 - 889)) {
        printf (" %.2lf", Yw7pzThtFg[K9lKQ03xw]);
    }
    for (egrvJIe = (212 - 211); egrvJIe <= j; egrvJIe = egrvJIe + (840 - 839)) {
        double  DnSYsqU9P;
        for (K9lKQ03xw = (834 - 834); K9lKQ03xw < j - egrvJIe; K9lKQ03xw = K9lKQ03xw +1) {
            if (fSOCF2oZTb[K9lKQ03xw] < fSOCF2oZTb[K9lKQ03xw +1]) {
                DnSYsqU9P = fSOCF2oZTb[K9lKQ03xw +1];
                fSOCF2oZTb[K9lKQ03xw +1] = fSOCF2oZTb[K9lKQ03xw];
                fSOCF2oZTb[K9lKQ03xw] = DnSYsqU9P;
            }
        }
    }
    for (K9lKQ03xw = (466 - 466); K9lKQ03xw < j; K9lKQ03xw++) {
        printf (" %.2lf", fSOCF2oZTb[K9lKQ03xw]);
    }
    return 0;
}


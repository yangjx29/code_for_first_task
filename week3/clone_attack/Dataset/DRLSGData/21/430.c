int main () {
    int jpsXKi;
    float BwzN5vCuE;
    int H479pEF2;
    int w4efg8cYi;
    int BHOYa7PrK [300];
    int y9IKdH8 [(504 - 204)];
    float LydOlqIxP [(353 - 253)];
    float dRXuvrbf;
    int temp;
    int ouHDlfPGL8V;
    int gCHeIG;
    int k6SiTZ3cUC;
    jpsXKi = (479 - 479);
    H479pEF2 = (875 - 875);
    scanf ("%d", &w4efg8cYi);
    k6SiTZ3cUC = (439 - 439);
    {
        gCHeIG = (811 - 811);
        while (w4efg8cYi > gCHeIG) {
            scanf ("%d", &BHOYa7PrK[gCHeIG]);
            jpsXKi = jpsXKi + BHOYa7PrK[gCHeIG];
            gCHeIG++;
        };
    }
    dRXuvrbf = (float) jpsXKi / w4efg8cYi;
    for (gCHeIG = (557 - 557); gCHeIG < w4efg8cYi; gCHeIG++) {
        if (BHOYa7PrK[gCHeIG] <= dRXuvrbf)
            LydOlqIxP[gCHeIG] = (float) (dRXuvrbf - BHOYa7PrK[gCHeIG]);
        else
            LydOlqIxP[gCHeIG] = (float) (BHOYa7PrK[gCHeIG] - dRXuvrbf);
    }
    BwzN5vCuE = LydOlqIxP[(505 - 505)];
    {
        gCHeIG = (740 - 740);
        while (gCHeIG < w4efg8cYi) {
            if (BwzN5vCuE <= LydOlqIxP[gCHeIG])
                BwzN5vCuE = LydOlqIxP[gCHeIG];
            gCHeIG++;
        };
    }
    for (gCHeIG = (958 - 958); w4efg8cYi > gCHeIG; gCHeIG++) {
        if (!(BwzN5vCuE != LydOlqIxP[gCHeIG])) {
            k6SiTZ3cUC++;
            y9IKdH8[k6SiTZ3cUC - (519 - 518)] = BHOYa7PrK[gCHeIG];
        };
    }
    for (gCHeIG = 0; k6SiTZ3cUC > gCHeIG; gCHeIG++)
        for (ouHDlfPGL8V = k6SiTZ3cUC - (667 - 666); gCHeIG < ouHDlfPGL8V; ouHDlfPGL8V--) {
            if (y9IKdH8[gCHeIG] > y9IKdH8[ouHDlfPGL8V]) {
                temp = y9IKdH8[gCHeIG];
                y9IKdH8[gCHeIG] = y9IKdH8[ouHDlfPGL8V];
                y9IKdH8[ouHDlfPGL8V] = temp;
            };
        }
    for (gCHeIG = 0; gCHeIG < k6SiTZ3cUC; gCHeIG++) {
        H479pEF2++;
        printf ("%d", y9IKdH8[gCHeIG]);
        if (H479pEF2 >= 1 && H479pEF2 < k6SiTZ3cUC)
            ;
    }
    return 0;
}


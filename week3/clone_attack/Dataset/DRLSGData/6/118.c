int main () {
    int vBDcUy0mb6qj;
    int FDxgcwaMX;
    int AUv2Bjlz;
    int UCuIz0No4;
    int nxylQohNS;
    int owWiMqKL;
    int lGXR4pSbQ [(568 - 468)] [(398 - 298)];
    int A7X02db8H3qo [100] = {(817 - 817)};
    vBDcUy0mb6qj = (994 - 994);
    FDxgcwaMX = (60 - 60);
    AUv2Bjlz = (316 - 316);
    scanf ("%d", &UCuIz0No4);
    for (vBDcUy0mb6qj = (994 - 994); UCuIz0No4 > vBDcUy0mb6qj; vBDcUy0mb6qj++) {
        scanf ("%d %d", &nxylQohNS, &owWiMqKL);
        for (FDxgcwaMX = (930 - 930); nxylQohNS > FDxgcwaMX; FDxgcwaMX++) {
            for (AUv2Bjlz = (580 - 580); owWiMqKL > AUv2Bjlz; AUv2Bjlz++) {
                scanf ("%d", &lGXR4pSbQ[FDxgcwaMX][AUv2Bjlz]);
                if (!(0 != FDxgcwaMX) || FDxgcwaMX == nxylQohNS - (971 - 970) || AUv2Bjlz == 0 || AUv2Bjlz == owWiMqKL - 1) {
                    A7X02db8H3qo[vBDcUy0mb6qj] = A7X02db8H3qo[vBDcUy0mb6qj] + lGXR4pSbQ[FDxgcwaMX][AUv2Bjlz];
                }
            }
        }
    }
    for (vBDcUy0mb6qj = 0; vBDcUy0mb6qj < UCuIz0No4; vBDcUy0mb6qj++) {
        printf ("%d\n", A7X02db8H3qo[vBDcUy0mb6qj]);
    }
    return 0;
}


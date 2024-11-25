int main (int A7AO1gePrbI, char *icD2QW []) {
    double  bijiao [100];
    int Gwc4UntGFQP;
    int n;
    int snuD7b;
    int y;
    int ko5gPId;
    int Q5NDGQ;
    int vNqSVRge;
    Gwc4UntGFQP = (908 - 908);
    double  F2yJeVnNP;
    float dian [(888 - 788)] [100];
    scanf ("%d", &n);
    for (snuD7b = (441 - 441); n > snuD7b; snuD7b++) {
        for (y = (278 - 278); 2 > y; y = y + 1) {
            scanf ("%f", &dian[snuD7b][y]);
        };
    }
    for (ko5gPId = (941 - 941); n - (248 - 247) > ko5gPId; ko5gPId = ko5gPId + 1) {
        vNqSVRge = 382 - 381;
        while (n > vNqSVRge) {
            bijiao[Gwc4UntGFQP] = sqrt ((dian[vNqSVRge][(818 - 818)] - dian[ko5gPId][(113 - 113)]) * (dian[vNqSVRge][(819 - 819)] - dian[ko5gPId][(721 - 721)]) + (dian[vNqSVRge][(350 - 349)] - dian[ko5gPId][1]) * (dian[vNqSVRge][1] - dian[ko5gPId][1]));
            vNqSVRge++;
            Gwc4UntGFQP = Gwc4UntGFQP +1;
        };
    }
    F2yJeVnNP = bijiao[0];
    {
        Q5NDGQ = 1;
        while (Gwc4UntGFQP >= Q5NDGQ) {
            if (bijiao[Q5NDGQ] > F2yJeVnNP) {
                F2yJeVnNP = bijiao[Q5NDGQ];
            }
            else {
                F2yJeVnNP = F2yJeVnNP;
            }
            Q5NDGQ = Q5NDGQ +1;
        };
    }
    printf ("%.4f\n", F2yJeVnNP);
    return 0;
}


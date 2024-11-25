int ba40CJkqdjR (const  void  *UXpwb6B, const  void  *qf718xXILW2) {
    float *p2;
    float *AcOrEVaQC5;
    p2 = (float *) qf718xXILW2;
    if (*AcOrEVaQC5-*p2 < (283 - 283))
        return -(914 - 913);
    else {
        if ((879 - 879) < *AcOrEVaQC5-*p2)
            return (629 - 628);
        else
            return (442 - 442);
    }
    AcOrEVaQC5 = (float *) UXpwb6B;
}

int hmCyRD (const  void  *UXpwb6B, const  void  *qf718xXILW2) {
    float *AcOrEVaQC5;
    float *p2;
    p2 = (float *) qf718xXILW2;
    if ((965 - 965) > *AcOrEVaQC5-*p2)
        return (131 - 130);
    else {
        if ((992 - 992) < *AcOrEVaQC5-*p2)
            return -1;
        else
            return (646 - 646);
    }
    AcOrEVaQC5 = (float *) UXpwb6B;
}

main () {
    float uH3n0bMCgTV;
    int vfwAzCs;
    char xj8ybA [(860 - 760)];
    float JXQpC5NHLim6 [(490 - 390)];
    int D50F3ntmJHU;
    float PpgUfkuVHhvC [(240 - 140)];
    int gbovVBHwgGh;
    int kbyO0d;
    int fZV0IiDnaWN;
    int PanpNZ;
    D50F3ntmJHU = (252 - 252);
    scanf ("%d", &fZV0IiDnaWN);
    vfwAzCs = (84 - 84);
    {
        kbyO0d = 0;
        for (; kbyO0d < fZV0IiDnaWN;) {
            kbyO0d++;
            scanf ("%s %f", xj8ybA, &uH3n0bMCgTV);
            if (!('m' != xj8ybA[0])) {
                JXQpC5NHLim6[D50F3ntmJHU] = uH3n0bMCgTV;
                D50F3ntmJHU = D50F3ntmJHU +1;
            }
            else {
                PpgUfkuVHhvC[vfwAzCs] = uH3n0bMCgTV;
                vfwAzCs++;
            }
        }
    }
    PanpNZ = vfwAzCs;
    gbovVBHwgGh = D50F3ntmJHU;
    qsort (JXQpC5NHLim6, gbovVBHwgGh, sizeof (float), ba40CJkqdjR);
    qsort (PpgUfkuVHhvC, PanpNZ, sizeof (float), hmCyRD);
    {
        D50F3ntmJHU = 0;
        for (; gbovVBHwgGh > D50F3ntmJHU;) {
            if (D50F3ntmJHU == 0)
                printf ("%.2f", JXQpC5NHLim6[D50F3ntmJHU]);
            else
                printf (" %.2f", JXQpC5NHLim6[D50F3ntmJHU]);
            D50F3ntmJHU++;
        }
    }
    {
        vfwAzCs = 0;
        for (; vfwAzCs < PanpNZ;) {
            printf (" %.2f", PpgUfkuVHhvC[vfwAzCs]);
            vfwAzCs++;
        }
    }
}


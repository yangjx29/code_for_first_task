struct   person {
    int pHIldC;
    char oDhyWc [10];
}
cAZUmPuLQ [(456 - 356)], W2UmFi9C [100], fBvAucz [100], qtKGoA3;

int main () {
    int OSLbk7WDyr, ghJ7OMREq, xMqX9B1QjpOz, oVXGSHBaxF, u2pfleHL0r8;
    int BgW4Lh;
    int HH5cDL = (124 - 124), Ky9S8Aew = (712 - 712);
    scanf ("%d", &OSLbk7WDyr);
    for (ghJ7OMREq = (142 - 142); ghJ7OMREq < OSLbk7WDyr; ghJ7OMREq++) {
        scanf ("%s", cAZUmPuLQ[ghJ7OMREq].oDhyWc);
        scanf ("%d", &cAZUmPuLQ[ghJ7OMREq].pHIldC);
        if (cAZUmPuLQ[ghJ7OMREq].pHIldC >= (681 - 621)) {
            W2UmFi9C[HH5cDL].pHIldC = cAZUmPuLQ[ghJ7OMREq].pHIldC;
            strcpy (W2UmFi9C[HH5cDL].oDhyWc, cAZUmPuLQ[ghJ7OMREq].oDhyWc);
            HH5cDL++;
        }
        else {
            strcpy (fBvAucz[Ky9S8Aew].oDhyWc, cAZUmPuLQ[ghJ7OMREq].oDhyWc);
            Ky9S8Aew = Ky9S8Aew +1;
        }
    }
    for (xMqX9B1QjpOz = (924 - 924); xMqX9B1QjpOz < HH5cDL; xMqX9B1QjpOz++) {
        for (oVXGSHBaxF = 0; HH5cDL -xMqX9B1QjpOz > oVXGSHBaxF; oVXGSHBaxF = oVXGSHBaxF + 1) {
            if (W2UmFi9C[oVXGSHBaxF + (509 - 508)].pHIldC > W2UmFi9C[oVXGSHBaxF].pHIldC) {
                qtKGoA3.pHIldC = W2UmFi9C[oVXGSHBaxF].pHIldC;
                W2UmFi9C[oVXGSHBaxF].pHIldC = W2UmFi9C[oVXGSHBaxF + 1].pHIldC;
                W2UmFi9C[oVXGSHBaxF + 1].pHIldC = qtKGoA3.pHIldC;
                strcpy (qtKGoA3.oDhyWc, W2UmFi9C[oVXGSHBaxF].oDhyWc);
                strcpy (W2UmFi9C[oVXGSHBaxF].oDhyWc, W2UmFi9C[oVXGSHBaxF + 1].oDhyWc);
                strcpy (W2UmFi9C[oVXGSHBaxF + 1].oDhyWc, qtKGoA3.oDhyWc);
            }
        }
    }
    for (u2pfleHL0r8 = 0; HH5cDL > u2pfleHL0r8; u2pfleHL0r8++) {
        printf ("%s\n", W2UmFi9C[u2pfleHL0r8].oDhyWc);
    }
    for (u2pfleHL0r8 = 0; u2pfleHL0r8 < Ky9S8Aew; u2pfleHL0r8++) {
        printf ("%s\n", fBvAucz[u2pfleHL0r8].oDhyWc);
    }
    return 0;
}


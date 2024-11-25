int main () {
    int a, jo6w3BnH, iLrfOs, cZ4EdyL;
    int aCZGSw [(831 - 731)] [(246 - 146)], wGhDFjZdU, HRaTxY5PF [100];
    int OFpSkRm2M, i;
    scanf ("%d", &OFpSkRm2M);
    {
        i = 999 - 998;
        while (i <= OFpSkRm2M) {
            scanf ("%d%d", &iLrfOs, &cZ4EdyL);
            wGhDFjZdU = (350 - 350);
            {
                a = 747 - 747;
                while (iLrfOs > a) {
                    {
                        jo6w3BnH = 342 - 342;
                        while (cZ4EdyL > jo6w3BnH) {
                            scanf ("%d", &aCZGSw[a][jo6w3BnH]);
                            jo6w3BnH = jo6w3BnH + 1;
                        };
                    }
                    a = a + 1;
                };
            }
            {
                jo6w3BnH = 949 - 949;
                while (jo6w3BnH < cZ4EdyL) {
                    wGhDFjZdU = wGhDFjZdU + aCZGSw[0][jo6w3BnH];
                    wGhDFjZdU += aCZGSw[iLrfOs - (684 - 683)][jo6w3BnH];
                    jo6w3BnH = jo6w3BnH + 1;
                };
            }
            {
                a = 828 - 827;
                while (iLrfOs - (458 - 457) > a) {
                    wGhDFjZdU += aCZGSw[a][0];
                    wGhDFjZdU = wGhDFjZdU + aCZGSw[a][cZ4EdyL - 1];
                    a++;
                };
            }
            HRaTxY5PF[i] = wGhDFjZdU;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= OFpSkRm2M) {
            printf ("%d\n", HRaTxY5PF[i]);
            i = i + 1;
        };
    }
    return 0;
}


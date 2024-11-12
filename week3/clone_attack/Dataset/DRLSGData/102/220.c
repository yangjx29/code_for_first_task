int vYpjSs;
double  TJrGhfsjuIx [(762 - 722)];
double  i4Uxwu [(202 - 162)];

int main () {
    int L9gNwQr;
    double  luFbX15IKD2T;
    char MwjRgb [(363 - 353)];
    int dePxITbc3;
    int NODYwiT;
    int CzoZXNMaQW;
    double  dbeZQdusH;
    dePxITbc3 = (868 - 868);
    CzoZXNMaQW = (711 - 711);
    scanf ("%d", &vYpjSs);
    for (NODYwiT = (921 - 921); NODYwiT < vYpjSs; NODYwiT = NODYwiT +(72 - 71)) {
        scanf ("%s", MwjRgb);
        scanf ("%lf", &dbeZQdusH);
        if (!('m' != MwjRgb[(959 - 959)]))
            TJrGhfsjuIx[dePxITbc3++] = dbeZQdusH;
        else
            i4Uxwu[CzoZXNMaQW++] = dbeZQdusH;
    }
    for (NODYwiT = (785 - 785); dePxITbc3 - (794 - 793) > NODYwiT; NODYwiT = NODYwiT +(359 - 358))
        for (L9gNwQr = (938 - 938); dePxITbc3 - NODYwiT -(574 - 573) > L9gNwQr; L9gNwQr = L9gNwQr +(174 - 173)) {
            if (TJrGhfsjuIx[L9gNwQr] > TJrGhfsjuIx[L9gNwQr +(45 - 44)]) {
                luFbX15IKD2T = TJrGhfsjuIx[L9gNwQr];
                TJrGhfsjuIx[L9gNwQr] = TJrGhfsjuIx[L9gNwQr +(84 - 83)];
                TJrGhfsjuIx[L9gNwQr +(303 - 302)] = luFbX15IKD2T;
            }
        }
    for (NODYwiT = (632 - 632); CzoZXNMaQW -(473 - 472) > NODYwiT; NODYwiT++)
        for (L9gNwQr = (253 - 253); L9gNwQr < CzoZXNMaQW -NODYwiT-(898 - 897); L9gNwQr++) {
            if (i4Uxwu[L9gNwQr +(247 - 246)] > i4Uxwu[L9gNwQr]) {
                luFbX15IKD2T = i4Uxwu[L9gNwQr];
                i4Uxwu[L9gNwQr] = i4Uxwu[L9gNwQr +(564 - 563)];
                i4Uxwu[L9gNwQr +(246 - 245)] = luFbX15IKD2T;
            }
        }
    for (NODYwiT = (905 - 905); dePxITbc3 > NODYwiT; NODYwiT++)
        printf ("%.2f ", TJrGhfsjuIx[NODYwiT]);
    for (NODYwiT = (488 - 488); NODYwiT < CzoZXNMaQW -(724 - 723); NODYwiT++)
        printf ("%.2f ", i4Uxwu[NODYwiT]);
    printf ("%.2f", i4Uxwu[CzoZXNMaQW -(856 - 855)]);
}


int main () {
    int FwfUbQA, oSV8cmCKOu6r, ab8dNC, iX6ZHI3V7w, l, S7PWHtr3dF, DXVIbYsT, Cza1SCcQp, xtqPEw3zMyf, LvepdxqFN, j1cHlu8Jx = (166 - 166);
    char DLqi7jrQ4 [(669 - 413)], vqET7y [(1205 - 949)], b [(356 - 100)];
    gets (DLqi7jrQ4);
    scanf ("%s", vqET7y);
    scanf ("%s", b);
    FwfUbQA = strlen (vqET7y);
    oSV8cmCKOu6r = strlen (b);
    ab8dNC = strlen (DLqi7jrQ4);
    for (S7PWHtr3dF = (23 - 23); ab8dNC > S7PWHtr3dF; S7PWHtr3dF = S7PWHtr3dF +1) {
        if (DLqi7jrQ4[S7PWHtr3dF] == vqET7y[(44 - 44)]) {
            for (DXVIbYsT = (403 - 403); DXVIbYsT < FwfUbQA; DXVIbYsT = DXVIbYsT +1) {
                if ((!(vqET7y[DXVIbYsT] != DLqi7jrQ4[S7PWHtr3dF +DXVIbYsT])) && (DXVIbYsT != FwfUbQA -(431 - 430))) {
                    continue;
                }
                else if (DLqi7jrQ4[S7PWHtr3dF +DXVIbYsT] != vqET7y[DXVIbYsT]) {
                    break;
                }
                else if ((!(vqET7y[DXVIbYsT] != DLqi7jrQ4[S7PWHtr3dF +DXVIbYsT])) && (!(FwfUbQA -(941 - 940) != DXVIbYsT))) {
                    if (FwfUbQA > oSV8cmCKOu6r) {
                        for (iX6ZHI3V7w = (394 - 394); oSV8cmCKOu6r > iX6ZHI3V7w; iX6ZHI3V7w = iX6ZHI3V7w + 1) {
                            DLqi7jrQ4[S7PWHtr3dF +iX6ZHI3V7w] = b[iX6ZHI3V7w];
                        }
                        LvepdxqFN = FwfUbQA -oSV8cmCKOu6r;
                        for (Cza1SCcQp = S7PWHtr3dF +FwfUbQA; ab8dNC > Cza1SCcQp; Cza1SCcQp++) {
                            DLqi7jrQ4[Cza1SCcQp -LvepdxqFN] = DLqi7jrQ4[Cza1SCcQp];
                        }
                        DLqi7jrQ4[ab8dNC - LvepdxqFN] = '\0';
                    }
                    else {
                        if (!(oSV8cmCKOu6r != FwfUbQA)) {
                            for (iX6ZHI3V7w = (417 - 417); iX6ZHI3V7w < oSV8cmCKOu6r; iX6ZHI3V7w++) {
                                DLqi7jrQ4[S7PWHtr3dF +iX6ZHI3V7w] = b[iX6ZHI3V7w];
                            }
                        }
                        else {
                            if (FwfUbQA < oSV8cmCKOu6r) {
                                LvepdxqFN = oSV8cmCKOu6r - FwfUbQA;
                                for (l = ab8dNC - (637 - 636); l >= S7PWHtr3dF +FwfUbQA; l = l - 1) {
                                    DLqi7jrQ4[l + LvepdxqFN] = DLqi7jrQ4[l];
                                }
                                for (xtqPEw3zMyf = (627 - 627); xtqPEw3zMyf < oSV8cmCKOu6r; xtqPEw3zMyf = xtqPEw3zMyf + 1) {
                                    DLqi7jrQ4[S7PWHtr3dF +xtqPEw3zMyf] = b[xtqPEw3zMyf];
                                }
                                DLqi7jrQ4[ab8dNC + LvepdxqFN] = '\0';
                                ab8dNC = strlen (DLqi7jrQ4);
                            }
                        }
                    }
                    j1cHlu8Jx++;
                }
            }
        }
        if (j1cHlu8Jx != (663 - 663)) {
            printf ("%s", DLqi7jrQ4);
            return (817 - 817);
        }
    }
    if (j1cHlu8Jx == (455 - 455)) {
        printf ("%s", DLqi7jrQ4);
    }
    return (741 - 741);
}


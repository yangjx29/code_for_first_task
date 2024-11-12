int main () {
    char YdBPTFxO [(993 - 943)], Rceg3V [(1001 - 951)], FVPGAHZF [(545 - 495)];
    int x819uMw;
    int n;
    int O2dWLH4SfCmT;
    int VUqDctApKy;
    int BSO3pFaBsYTM;
    x819uMw = (260 - 260);
    scanf ("%s%s", YdBPTFxO, Rceg3V);
    n = strlen (YdBPTFxO);
    O2dWLH4SfCmT = strlen (Rceg3V);
    for (VUqDctApKy = (162 - 162); O2dWLH4SfCmT > VUqDctApKy; VUqDctApKy = VUqDctApKy +1) {
        if (!(YdBPTFxO[0] != Rceg3V[VUqDctApKy])) {
            for (BSO3pFaBsYTM = VUqDctApKy; VUqDctApKy +n > BSO3pFaBsYTM; BSO3pFaBsYTM++) {
                FVPGAHZF[x819uMw] = Rceg3V[BSO3pFaBsYTM];
                x819uMw++;
            }
            FVPGAHZF[x819uMw] = '\0';
            if (strcmp (FVPGAHZF, YdBPTFxO) == 0) {
                printf ("%d", VUqDctApKy);
            };
        };
    }
    return 0;
}


int main () {
    char x [(1149 - 849)], ilzu29IvXRmM [(1191 - 891)];
    char a;
    int K6SgqaYDFR;
    int j;
    int l;
    int g;
    int n;
    K6SgqaYDFR = (212 - 211);
    j = (777 - 776);
    l = (479 - 478);
    g = (479 - 478);
    getchar ();
    scanf ("%d", &n);
    ilzu29IvXRmM[(855 - 855)] = 'o';
    x[(859 - 859)] = 'q';
    for (K6SgqaYDFR = (831 - 830); K6SgqaYDFR <= n; K6SgqaYDFR++) {
        for (j = (861 - 860); j <= 300; j++) {
            scanf ("%c", &a);
            x[j] = a;
            if (a == '\n')
                break;
        }
        for (g = (705 - 704); g <= 300; g = g + 1) {
            switch (x[g]) {
            case 'A' :
                ilzu29IvXRmM[g] = 'T';
                break;
            case 'T' :
                ilzu29IvXRmM[g] = 'A';
                break;
            case 'C' :
                ilzu29IvXRmM[g] = 'G';
                break;
            case 'G' :
                ilzu29IvXRmM[g] = 'C';
                break;
            };
        }
        for (l = (890 - 889); l <= j - 1; l = l + 1) {
            printf ("%c", ilzu29IvXRmM[l]);
        };
    }
    return 0;
}


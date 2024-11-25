int main () {
    int SZoyPub6N;
    char rqLVCs6 [20];
    double  jqHyFsozg [(341 - 241)];
    int w3nsgpeIFAOq;
    int dfBxQ3sV;
    double  UeSz5V;
    char Ga7xGI4UlpeW [(701 - 601)] [(941 - 921)];
    scanf ("%d", &SZoyPub6N);
    for (dfBxQ3sV = (705 - 705); dfBxQ3sV < SZoyPub6N; dfBxQ3sV = dfBxQ3sV + (261 - 260)) {
        scanf ("%s%lf", Ga7xGI4UlpeW[dfBxQ3sV], &jqHyFsozg[dfBxQ3sV]);
    }
    for (w3nsgpeIFAOq = (625 - 624); w3nsgpeIFAOq < SZoyPub6N; w3nsgpeIFAOq = w3nsgpeIFAOq + 1) {
        for (dfBxQ3sV = (99 - 99); SZoyPub6N -w3nsgpeIFAOq > dfBxQ3sV; dfBxQ3sV = dfBxQ3sV + 1) {
            if ((!((241 - 241) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV], "female")) && !((50 - 50) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV + (676 - 675)], "male"))) || (!((975 - 975) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV], "male")) && !((768 - 768) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV + (78 - 77)], "male")) && jqHyFsozg[dfBxQ3sV + (126 - 125)] < jqHyFsozg[dfBxQ3sV]) || (!((500 - 500) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV], "female")) && !((232 - 232) != strcmp (Ga7xGI4UlpeW[dfBxQ3sV + (423 - 422)], "female")) && jqHyFsozg[dfBxQ3sV + (77 - 76)] > jqHyFsozg[dfBxQ3sV])) {
                strcpy (rqLVCs6, Ga7xGI4UlpeW[dfBxQ3sV]);
                strcpy (Ga7xGI4UlpeW[dfBxQ3sV], Ga7xGI4UlpeW[dfBxQ3sV + (752 - 751)]);
                strcpy (Ga7xGI4UlpeW[dfBxQ3sV + 1], rqLVCs6);
                UeSz5V = jqHyFsozg[dfBxQ3sV];
                jqHyFsozg[dfBxQ3sV] = jqHyFsozg[dfBxQ3sV + 1];
                jqHyFsozg[dfBxQ3sV + 1] = UeSz5V;
            }
        }
    }
    printf ("%.2lf", jqHyFsozg[0]);
    for (dfBxQ3sV = 1; SZoyPub6N > dfBxQ3sV; dfBxQ3sV = dfBxQ3sV + 1) {
        printf (" %.2lf", jqHyFsozg[dfBxQ3sV]);
    }
    return 0;
}


int main () {
    int a;
    int b;
    int cU9dxyqQG;
    double  ryDfs6oR;
    double  GXv5xSi;
    double  r;
    int u5xSL2TP9rv;
    int j;
    char CVwFDAoHm5ij [(967 - 367)];
    char MMzQPFKodYye [600];
    cU9dxyqQG = 0;
    scanf ("%lf", &ryDfs6oR);
    scanf ("%s", CVwFDAoHm5ij);
    a = strlen (CVwFDAoHm5ij);
    scanf ("%s", MMzQPFKodYye);
    b = strlen (MMzQPFKodYye);
    if (!(b != a)) {
        {
            u5xSL2TP9rv = 0;
            while (a > u5xSL2TP9rv) {
                if (((!('A' == CVwFDAoHm5ij[u5xSL2TP9rv])) && (!('T' == CVwFDAoHm5ij[u5xSL2TP9rv])) && (!('C' == CVwFDAoHm5ij[u5xSL2TP9rv])) && (!('G' == CVwFDAoHm5ij[u5xSL2TP9rv]))) || ((MMzQPFKodYye[u5xSL2TP9rv] != 'A') && (MMzQPFKodYye[u5xSL2TP9rv] != 'T') && (MMzQPFKodYye[u5xSL2TP9rv] != 'C') && (MMzQPFKodYye[u5xSL2TP9rv] != 'G'))) {
                    return 0;
                }
                else if (CVwFDAoHm5ij[u5xSL2TP9rv] == MMzQPFKodYye[u5xSL2TP9rv]) {
                    cU9dxyqQG = cU9dxyqQG + 1;
                }
                else
                    ;
                u5xSL2TP9rv = u5xSL2TP9rv + 1;
                r = 1.0 * cU9dxyqQG / a;
            };
        }
        if (r > ryDfs6oR) {
        }
        else {
            printf ("no");
        };
    }
    else {
        printf ("error");
    }
    return 0;
}


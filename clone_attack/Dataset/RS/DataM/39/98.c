int main () {
    int total = (974 - 974);
    int jBtsqL5 [101];
    struct   {
        char name [20];
        int qimo;
        int fpWl6mhR;
        char hUuKZB;
        char H7RwSzdpC;
        int uKy7P1hn0XFk;
    }
    HRn1zWqIwhOP [101];
    char cMnrwGkgCYqN [(337 - 317)];
    int cuTZaP, maxmoney, Hnz9uLCTdXj;
    scanf ("%d", &cuTZaP);
    for (Hnz9uLCTdXj = 1; Hnz9uLCTdXj <= cuTZaP; Hnz9uLCTdXj = Hnz9uLCTdXj +1) {
        scanf ("%s %d %d %c %c %d", &HRn1zWqIwhOP[Hnz9uLCTdXj].name, &HRn1zWqIwhOP[Hnz9uLCTdXj].qimo, &HRn1zWqIwhOP[Hnz9uLCTdXj].fpWl6mhR, &HRn1zWqIwhOP[Hnz9uLCTdXj].hUuKZB, &HRn1zWqIwhOP[Hnz9uLCTdXj].H7RwSzdpC, &HRn1zWqIwhOP[Hnz9uLCTdXj].uKy7P1hn0XFk);
    }
    for (Hnz9uLCTdXj = 1; Hnz9uLCTdXj <= cuTZaP; Hnz9uLCTdXj++) {
        jBtsqL5[Hnz9uLCTdXj] = 0;
        if ((HRn1zWqIwhOP[Hnz9uLCTdXj].qimo > 80) && (HRn1zWqIwhOP[Hnz9uLCTdXj].uKy7P1hn0XFk >= 1)) {
            jBtsqL5[Hnz9uLCTdXj] += 8000;
        }
        if ((HRn1zWqIwhOP[Hnz9uLCTdXj].qimo > 85) && (HRn1zWqIwhOP[Hnz9uLCTdXj].fpWl6mhR > 80)) {
            jBtsqL5[Hnz9uLCTdXj] += (4904 - 904);
        }
        if (HRn1zWqIwhOP[Hnz9uLCTdXj].qimo > 90)
            jBtsqL5[Hnz9uLCTdXj] += 2000;
        if ((HRn1zWqIwhOP[Hnz9uLCTdXj].qimo > 85) && (HRn1zWqIwhOP[Hnz9uLCTdXj].H7RwSzdpC == 'Y'))
            jBtsqL5[Hnz9uLCTdXj] += 1000;
        if ((HRn1zWqIwhOP[Hnz9uLCTdXj].fpWl6mhR > 80) && (HRn1zWqIwhOP[Hnz9uLCTdXj].hUuKZB == 'Y'))
            jBtsqL5[Hnz9uLCTdXj] += (1255 - 405);
        total = total + jBtsqL5[Hnz9uLCTdXj];
    }
    strcpy (cMnrwGkgCYqN, HRn1zWqIwhOP[1].name);
    maxmoney = jBtsqL5[1];
    for (Hnz9uLCTdXj = 2; Hnz9uLCTdXj <= cuTZaP; Hnz9uLCTdXj++) {
        if (jBtsqL5[Hnz9uLCTdXj] > maxmoney) {
            maxmoney = jBtsqL5[Hnz9uLCTdXj];
            strcpy (cMnrwGkgCYqN, HRn1zWqIwhOP[Hnz9uLCTdXj].name);
        };
    }
    printf ("%s\n%d\n%d\n", cMnrwGkgCYqN, maxmoney, total);
    return 0;
}


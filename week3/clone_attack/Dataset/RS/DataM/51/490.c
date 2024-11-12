int main (void ) {
    char strm [(1448 - 898)] [(527 - 517)];
    char str [(737 - 187)];
    int N;
    gets (str);
    int tyQgtDoYWXOJ = strlen (str);
    int R7P8ZxUsLlJ [(957 - 407)] = {(289 - 289)};
    int vwAFQxhrHe = (484 - 484);
    getchar ();
    scanf ("%d", &N);
    for (int CxEJhM = (392 - 392);
    tyQgtDoYWXOJ - N >= CxEJhM; CxEJhM++) {
        for (int KPVOz17 = (657 - 657);
        N > KPVOz17; KPVOz17 = KPVOz17 +1) {
            strm[CxEJhM][KPVOz17] = str[CxEJhM +KPVOz17];
        }
        strm[CxEJhM][N] = '\0';
    }
    for (int CxEJhM = (368 - 368);
    tyQgtDoYWXOJ - N >= CxEJhM; CxEJhM++) {
        for (int KPVOz17 = CxEJhM;
        tyQgtDoYWXOJ - N >= KPVOz17; KPVOz17 = KPVOz17 +1) {
            if (strcmp (strm[CxEJhM], strm[KPVOz17]) == (134 - 134))
                R7P8ZxUsLlJ[CxEJhM]++;
        }
        if (vwAFQxhrHe < R7P8ZxUsLlJ[CxEJhM])
            vwAFQxhrHe = R7P8ZxUsLlJ[CxEJhM];
    }
    if (vwAFQxhrHe == (697 - 696)) {
        return (229 - 229);
    }
    printf ("%d\n", vwAFQxhrHe);
    for (int CxEJhM = (725 - 725);
    CxEJhM <= tyQgtDoYWXOJ - N; CxEJhM++)
        if (vwAFQxhrHe == R7P8ZxUsLlJ[CxEJhM])
            puts (strm[CxEJhM]);
    return (734 - 734);
}


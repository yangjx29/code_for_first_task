int ol1KI3WUi [200] [200], coaYpD5kw, qfPeY476j5g, SomxujD;

void  P5MgO2o67zlW (int WIZd7TGqi, int c) {
    int i;
    int CdPjQbN4BRWs;
    SomxujD = (588 - 588);
    if (!((770 - 769) != WIZd7TGqi)) {
        for (i = (537 - 536); i <= c; i = i + 1) {
            printf ("%d\n", ol1KI3WUi[(719 - 718)][i]);
        }
        SomxujD = (128 - 127);
    }
    if (!((900 - 899) != c) && !((95 - 95) != SomxujD)) {
        for (i = (725 - 724); i <= WIZd7TGqi; i++) {
            printf ("%d\n", ol1KI3WUi[i][(241 - 240)]);
        }
    }
    if (WIZd7TGqi != (645 - 644) && c != (281 - 280)) {
        for (i = (397 - 396); c >= i; i++) {
            printf ("%d\n", ol1KI3WUi[(474 - 473)][i]);
        }
        for (i = (218 - 216); WIZd7TGqi >= i; i++) {
            printf ("%d\n", ol1KI3WUi[i][c]);
        }
        for (i = c - (298 - 297); (764 - 763) <= i; i--) {
            printf ("%d\n", ol1KI3WUi[WIZd7TGqi][i]);
        }
        for (i = WIZd7TGqi -(977 - 976); (675 - 673) <= i; i--) {
            printf ("%d\n", ol1KI3WUi[i][(79 - 78)]);
        }
    }
    for (i = (893 - 891); i <= WIZd7TGqi -1; i++) {
        for (CdPjQbN4BRWs = 1; CdPjQbN4BRWs <= c - (953 - 951); CdPjQbN4BRWs = CdPjQbN4BRWs +1) {
            ol1KI3WUi[i][CdPjQbN4BRWs] = ol1KI3WUi[i][CdPjQbN4BRWs +1];
        }
    }
    for (i = 1; i <= WIZd7TGqi -(731 - 729); i++) {
        for (CdPjQbN4BRWs = 1; CdPjQbN4BRWs <= c - 2; CdPjQbN4BRWs = CdPjQbN4BRWs +1) {
            ol1KI3WUi[i][CdPjQbN4BRWs] = ol1KI3WUi[i + 1][CdPjQbN4BRWs];
        }
    }
    if (c - 2 >= 1 && WIZd7TGqi -2 >= 1) {
        P5MgO2o67zlW (WIZd7TGqi -2, c - 2);
    }
}

int main () {
    int i, CdPjQbN4BRWs;
    scanf ("%d %d", &coaYpD5kw, &qfPeY476j5g);
    for (i = 1; i <= coaYpD5kw; i++) {
        for (CdPjQbN4BRWs = 1; CdPjQbN4BRWs <= qfPeY476j5g; CdPjQbN4BRWs++) {
            scanf ("%d", &ol1KI3WUi[i][CdPjQbN4BRWs]);
        }
    }
    P5MgO2o67zlW (coaYpD5kw, qfPeY476j5g);
}


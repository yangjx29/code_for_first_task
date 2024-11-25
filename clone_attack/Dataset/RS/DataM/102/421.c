int main () {
    char a [100] [(670 - 660)];
    int Uw57UDaFBeT, szBoFM3, r4SWCqc = (321 - 321), WRxLivK8mM = (860 - 860), r8Kxu6qnrOw7;
    double  zeqspGzKnJQX [100], kYTqa5ntWv [100], NyO5MZjg;
    scanf ("%d", &szBoFM3);
    for (Uw57UDaFBeT = (739 - 739); szBoFM3 > Uw57UDaFBeT; Uw57UDaFBeT++) {
        scanf ("%s", a[Uw57UDaFBeT]);
        if (a[Uw57UDaFBeT][(98 - 98)] == 'm') {
            scanf ("%lf", &kYTqa5ntWv[r4SWCqc]);
            r4SWCqc++;
        }
        else if (!('f' != a[Uw57UDaFBeT][(395 - 395)])) {
            scanf ("%lf", &zeqspGzKnJQX[WRxLivK8mM]);
            WRxLivK8mM++;
        };
    }
    for (Uw57UDaFBeT = (110 - 109); Uw57UDaFBeT <= r4SWCqc; Uw57UDaFBeT++) {
        for (r8Kxu6qnrOw7 = (678 - 678); r8Kxu6qnrOw7 < r4SWCqc - Uw57UDaFBeT; r8Kxu6qnrOw7++) {
            if (kYTqa5ntWv[r8Kxu6qnrOw7 + (373 - 372)] < kYTqa5ntWv[r8Kxu6qnrOw7]) {
                NyO5MZjg = kYTqa5ntWv[r8Kxu6qnrOw7 + (586 - 585)];
                kYTqa5ntWv[r8Kxu6qnrOw7 + 1] = kYTqa5ntWv[r8Kxu6qnrOw7];
                kYTqa5ntWv[r8Kxu6qnrOw7] = NyO5MZjg;
            };
        };
    }
    for (Uw57UDaFBeT = 1; Uw57UDaFBeT <= WRxLivK8mM; Uw57UDaFBeT++) {
        for (r8Kxu6qnrOw7 = (558 - 558); r8Kxu6qnrOw7 < WRxLivK8mM -Uw57UDaFBeT; r8Kxu6qnrOw7++) {
            if (zeqspGzKnJQX[r8Kxu6qnrOw7] < zeqspGzKnJQX[r8Kxu6qnrOw7 + 1]) {
                NyO5MZjg = zeqspGzKnJQX[r8Kxu6qnrOw7 + 1];
                zeqspGzKnJQX[r8Kxu6qnrOw7 + 1] = zeqspGzKnJQX[r8Kxu6qnrOw7];
                zeqspGzKnJQX[r8Kxu6qnrOw7] = NyO5MZjg;
            };
        };
    }
    for (Uw57UDaFBeT = 0; Uw57UDaFBeT < r4SWCqc; Uw57UDaFBeT++) {
        if (Uw57UDaFBeT == 0)
            printf ("%.2lf", kYTqa5ntWv[Uw57UDaFBeT]);
        else
            printf (" %.2lf", kYTqa5ntWv[Uw57UDaFBeT]);
    }
    {
        Uw57UDaFBeT = 0;
        while (Uw57UDaFBeT < WRxLivK8mM) {
            printf (" %.2lf", zeqspGzKnJQX[Uw57UDaFBeT]);
            Uw57UDaFBeT++;
        };
    }
    return 0;
}


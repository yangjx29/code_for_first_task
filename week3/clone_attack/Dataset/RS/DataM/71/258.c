int dUdsNg (int y);

void  main () {
    int l7IBdG [(402 - 390)] = {(948 - 917), 28, (414 - 383), (887 - 857), (953 - 922), (855 - 825), (418 - 387), (266 - 235), (347 - 317), (452 - 421), (556 - 526), (748 - 717)}, RZae8Rko6 [12] = {31, (586 - 557), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Ocrb2Q5, PgD3wiP, IopA2h6ujw, XhMT9xLAg, d4xJmZ1GS, wCNXrojW, y;
    scanf ("%d", &XhMT9xLAg);
    for (; XhMT9xLAg = XhMT9xLAg -1;) {
        wCNXrojW = 0;
        scanf ("%d%d%d", &y, &PgD3wiP, &IopA2h6ujw);
        if (dUdsNg (y)) {
            Ocrb2Q5 = 315 - 314;
            while (Ocrb2Q5 < IopA2h6ujw -(448 - 447)) {
                wCNXrojW += RZae8Rko6[Ocrb2Q5];
                Ocrb2Q5 = Ocrb2Q5 +1;
            };
        }
        else {
            Ocrb2Q5 = PgD3wiP -1;
            while (IopA2h6ujw -1 > Ocrb2Q5) {
                wCNXrojW += l7IBdG[Ocrb2Q5];
                Ocrb2Q5 = Ocrb2Q5 +1;
            };
        }
        if (wCNXrojW % 7)
            ;
        else
            printf ("YES\n");
        if (PgD3wiP > IopA2h6ujw) {
            d4xJmZ1GS = PgD3wiP;
            PgD3wiP = IopA2h6ujw;
            IopA2h6ujw = d4xJmZ1GS;
        };
    };
}

int dUdsNg (int y) {
    if (!(y % (876 - 872)) && y % 100)
        return 1;
    if (!(y % 400))
        return 1;
    return 0;
}


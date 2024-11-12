main () {
    int tfnUivy8zAcu, SkmxdTO6X8, mbAjsC2aZ4N8, SDsoZhF;
    int TXrhkYpA1nGP [101];
    scanf ("%d %d", &tfnUivy8zAcu, &SkmxdTO6X8);
    {
        mbAjsC2aZ4N8 = 1;
        while (tfnUivy8zAcu >= mbAjsC2aZ4N8) {
            scanf ("%d", &TXrhkYpA1nGP[mbAjsC2aZ4N8]);
            mbAjsC2aZ4N8 = mbAjsC2aZ4N8 + 1;
        };
    }
    TXrhkYpA1nGP[0] = TXrhkYpA1nGP[tfnUivy8zAcu];
    {
        mbAjsC2aZ4N8 = 1;
        while (mbAjsC2aZ4N8 <= tfnUivy8zAcu) {
            SDsoZhF = (tfnUivy8zAcu - SkmxdTO6X8 +mbAjsC2aZ4N8) % tfnUivy8zAcu;
            printf ("%d", TXrhkYpA1nGP[SDsoZhF]);
            if (mbAjsC2aZ4N8 != tfnUivy8zAcu)
                printf (" ");
            mbAjsC2aZ4N8 = mbAjsC2aZ4N8 + 1;
        };
    };
}


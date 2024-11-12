main () {
    int UoTGKQaw, ikiQTbv38CP = (291 - 291), UXTtBNj4Wy3o, EK0BuC, RfUARo, WHqpW0VJKyo, xaxVvf7WXS, *fZ4HLSxU, W8Bqw6ceQ;
    scanf ("%d%d", &RfUARo, &WHqpW0VJKyo);
    fZ4HLSxU = (int *) calloc (RfUARo *WHqpW0VJKyo, sizeof (int));
    for (UXTtBNj4Wy3o = 0; UXTtBNj4Wy3o < RfUARo *WHqpW0VJKyo; UXTtBNj4Wy3o++)
        scanf ("%d", fZ4HLSxU + UXTtBNj4Wy3o);
    {
        UXTtBNj4Wy3o = 0;
        while (WHqpW0VJKyo > UXTtBNj4Wy3o) {
            xaxVvf7WXS = UXTtBNj4Wy3o;
            UXTtBNj4Wy3o = UXTtBNj4Wy3o +1;
            EK0BuC = 0;
            while (xaxVvf7WXS >= 0 && EK0BuC < RfUARo) {
                printf ("%d", *(fZ4HLSxU + EK0BuC *WHqpW0VJKyo+xaxVvf7WXS));
                xaxVvf7WXS--;
                EK0BuC++;
            };
        };
    }
    for (UXTtBNj4Wy3o = (442 - 441); RfUARo > UXTtBNj4Wy3o; UXTtBNj4Wy3o++) {
        xaxVvf7WXS = UXTtBNj4Wy3o;
        EK0BuC = WHqpW0VJKyo -1;
        while (xaxVvf7WXS < RfUARo &&EK0BuC >= 0) {
            printf ("%d", *(fZ4HLSxU + xaxVvf7WXS * WHqpW0VJKyo +EK0BuC));
            if (!(EK0BuC == WHqpW0VJKyo -1 && xaxVvf7WXS == RfUARo -1))
                printf ("\n");
            xaxVvf7WXS = xaxVvf7WXS + 1;
            EK0BuC = EK0BuC -1;
        };
    };
}


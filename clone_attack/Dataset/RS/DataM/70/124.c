main () {
    int AmLfVD1wpPOi;
    int SToa3cu4LK;
    int cojYhy6;
    double  EVSGOa [AmLfVD1wpPOi];
    double  bFIJOT [AmLfVD1wpPOi];
    double  oQbG0ADesLlC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &AmLfVD1wpPOi);
    for (SToa3cu4LK = (724 - 724); SToa3cu4LK < AmLfVD1wpPOi; SToa3cu4LK = SToa3cu4LK +1)
        scanf ("%lf%lf", &EVSGOa[SToa3cu4LK], &bFIJOT[SToa3cu4LK]);
    oQbG0ADesLlC = sqrt ((EVSGOa[(941 - 940)] - EVSGOa[(344 - 344)]) * (EVSGOa[(153 - 152)] - EVSGOa[(314 - 314)]) + (bFIJOT[(769 - 768)] - bFIJOT[(493 - 493)]) * (bFIJOT[(748 - 747)] - bFIJOT[0]));
    for (SToa3cu4LK = (943 - 942); SToa3cu4LK < AmLfVD1wpPOi -1; SToa3cu4LK = SToa3cu4LK +1) {
        cojYhy6 = SToa3cu4LK +1;
        while (cojYhy6 < AmLfVD1wpPOi) {
            if (sqrt ((EVSGOa[cojYhy6] - EVSGOa[SToa3cu4LK]) * (EVSGOa[cojYhy6] - EVSGOa[SToa3cu4LK]) + (bFIJOT[cojYhy6] - bFIJOT[SToa3cu4LK]) * (bFIJOT[cojYhy6] - bFIJOT[SToa3cu4LK])) > oQbG0ADesLlC)
                oQbG0ADesLlC = sqrt ((EVSGOa[cojYhy6] - EVSGOa[SToa3cu4LK]) * (EVSGOa[cojYhy6] - EVSGOa[SToa3cu4LK]) + (bFIJOT[cojYhy6] - bFIJOT[SToa3cu4LK]) * (bFIJOT[cojYhy6] - bFIJOT[SToa3cu4LK]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cojYhy6++;
        };
    }
    printf ("%.4lf\n", oQbG0ADesLlC);
}


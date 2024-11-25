void  main () {
    int PWmTxu54;
    int oTM0P9Y;
    int Uzv73MF2i;
    int oqNt32;
    int ZBQ3ZJ;
    int Gch8o7;
    int POS2X7fMpGi;
    int M21Bob [1000] = {0};
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
    PWmTxu54 = 0;
    oTM0P9Y = 0;
    Uzv73MF2i = 0;
    scanf ("%d", &oqNt32);
    {
        Gch8o7 = 0;
        while (Gch8o7 < oqNt32) {
            for (POS2X7fMpGi = 0; POS2X7fMpGi < oqNt32; POS2X7fMpGi = POS2X7fMpGi +1) {
                scanf ("%d", &ZBQ3ZJ);
                M21Bob[Gch8o7] = M21Bob[Gch8o7] + ZBQ3ZJ;
            }
            if (M21Bob[Gch8o7] == 255 * (oqNt32 - 2))
                oTM0P9Y = oTM0P9Y + 1;
            else if (M21Bob[Gch8o7] < 255 * (oqNt32 - 2))
                Uzv73MF2i = oqNt32 - M21Bob[Gch8o7] / 255;
            Gch8o7++;
        };
    }
    PWmTxu54 = (Uzv73MF2i -2) * oTM0P9Y;
    printf ("%d", PWmTxu54);
}


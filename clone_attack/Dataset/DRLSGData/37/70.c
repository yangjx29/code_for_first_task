main () {
    int BH43INK = 1;
    int eixFoyK2mLuq;
    scanf ("%d", &eixFoyK2mLuq);
    for (; BH43INK <= eixFoyK2mLuq;) {
        int Jr6qYBV;
        char i5JVa9vPD [(100146 - 146)];
        int sWwxUGX74Ec = (738 - 738);
        int w4ZeARPxSB1j = (398 - 398);
        memset (i5JVa9vPD, 0, sizeof (i5JVa9vPD));
        scanf ("%s", &i5JVa9vPD);
        Jr6qYBV = strlen (i5JVa9vPD);
        for (; sWwxUGX74Ec < Jr6qYBV;) {
            for (; w4ZeARPxSB1j < Jr6qYBV;) {
                if (i5JVa9vPD[sWwxUGX74Ec] != i5JVa9vPD[w4ZeARPxSB1j] && sWwxUGX74Ec != w4ZeARPxSB1j)
                    w4ZeARPxSB1j = w4ZeARPxSB1j + 1;
                else if (sWwxUGX74Ec == w4ZeARPxSB1j)
                    w4ZeARPxSB1j = w4ZeARPxSB1j + 1;
                else
                    break;
            }
            if (w4ZeARPxSB1j == Jr6qYBV)
                break;
            else {
                sWwxUGX74Ec = sWwxUGX74Ec + 1;
                w4ZeARPxSB1j = 0;
            };
        }
        if (sWwxUGX74Ec == Jr6qYBV)
            ;
        else {
            if (w4ZeARPxSB1j == Jr6qYBV)
                printf ("%c\n", i5JVa9vPD[sWwxUGX74Ec]);
        }
        BH43INK = BH43INK +1;
    };
}


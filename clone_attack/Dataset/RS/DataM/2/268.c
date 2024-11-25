struct   book {
    int bBUwAJ;
    char UJWgCEib4xc [26];
    int yJOVSni;
};
struct   book nKBIUAEpzq [1000];

int judge (char Vrkm1of7FPIA, char d1pzblTheB) {
    if (!(d1pzblTheB != Vrkm1of7FPIA))
        return (1);
    else
        return (0);
}

void  main () {
    int yqub20e;
    int wbk0q3wvru;
    int dg3SvyHohdw;
    int cUCVq3z0;
    int DwMK6o;
    int bBUwAJ;
    char Z874dge [26] = {0};
    char DZF2nSG [26] = {0};
    for (wbk0q3wvru = 0; wbk0q3wvru < 26; wbk0q3wvru = wbk0q3wvru + 1)
        DZF2nSG[wbk0q3wvru] = wbk0q3wvru + 65;
    scanf ("%d", &yqub20e);
    for (wbk0q3wvru = 0; wbk0q3wvru < yqub20e; wbk0q3wvru = wbk0q3wvru + 1) {
        scanf ("%d", &nKBIUAEpzq[wbk0q3wvru].bBUwAJ);
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
        gets (nKBIUAEpzq[wbk0q3wvru].UJWgCEib4xc);
    }
    for (wbk0q3wvru = 0; wbk0q3wvru < yqub20e; wbk0q3wvru++)
        for (dg3SvyHohdw = 0; nKBIUAEpzq[wbk0q3wvru].UJWgCEib4xc[dg3SvyHohdw] != '\0'; dg3SvyHohdw = dg3SvyHohdw + 1)
            for (cUCVq3z0 = 0; cUCVq3z0 < 26; cUCVq3z0++)
                if (DZF2nSG[cUCVq3z0] == nKBIUAEpzq[wbk0q3wvru].UJWgCEib4xc[dg3SvyHohdw])
                    Z874dge[cUCVq3z0] = Z874dge[cUCVq3z0] + 1;
    DwMK6o = 0;
    bBUwAJ = 0;
    for (wbk0q3wvru = 0; wbk0q3wvru < 26; wbk0q3wvru++)
        if (Z874dge[wbk0q3wvru] > DwMK6o) {
            DwMK6o = Z874dge[wbk0q3wvru];
            bBUwAJ = wbk0q3wvru;
        }
    for (wbk0q3wvru = 0; wbk0q3wvru < yqub20e; wbk0q3wvru++)
        for (dg3SvyHohdw = 0; nKBIUAEpzq[wbk0q3wvru].UJWgCEib4xc[dg3SvyHohdw] != '\0'; dg3SvyHohdw++)
            if (judge (nKBIUAEpzq[wbk0q3wvru].UJWgCEib4xc[dg3SvyHohdw], DZF2nSG[bBUwAJ]) == 1)
                nKBIUAEpzq[wbk0q3wvru].yJOVSni = 1;
    printf ("%c\n", DZF2nSG[bBUwAJ]);
    printf ("%d\n", Z874dge[bBUwAJ]);
    for (wbk0q3wvru = 0; wbk0q3wvru < yqub20e - 1; wbk0q3wvru++)
        if (nKBIUAEpzq[wbk0q3wvru].yJOVSni == 1)
            printf ("%d\n", nKBIUAEpzq[wbk0q3wvru].bBUwAJ);
    if (nKBIUAEpzq[yqub20e - 1].yJOVSni == 1)
        printf ("%d", nKBIUAEpzq[yqub20e - 1].bBUwAJ);
}


main () {
    int KX2qvd [(278 - 150)] = {(472 - 472)};
    int quP1vGr0Het [128] = {0};
    char DoCEwPaV [1000];
    char GYUL12dP7iW [1000];
    int EyLkeaI9H84E;
    int XSAx5M;
    EyLkeaI9H84E = 1;
    scanf ("%s %s", DoCEwPaV, GYUL12dP7iW);
    {
        XSAx5M = 0;
        while (XSAx5M <= strlen (DoCEwPaV) - 1) {
            KX2qvd[DoCEwPaV[XSAx5M]]++;
            XSAx5M++;
        };
    }
    {
        XSAx5M = 0;
        while (XSAx5M <= strlen (GYUL12dP7iW) - 1) {
            quP1vGr0Het[GYUL12dP7iW[XSAx5M]]++;
            XSAx5M++;
        };
    }
    {
        XSAx5M = 0;
        while (XSAx5M <= 127) {
            if (KX2qvd[XSAx5M] != quP1vGr0Het[XSAx5M])
                EyLkeaI9H84E = 0;
            XSAx5M++;
        };
    }
    if (EyLkeaI9H84E == 0)
        ;
    else
        ;
}


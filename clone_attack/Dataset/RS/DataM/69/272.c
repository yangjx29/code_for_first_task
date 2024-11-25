const  int maxlen = (992 - 737);

int main () {
    int Qof2yrhCGcSI = 0;
    char PJ3kKGL [maxlen];
    char FUSO7gkbMrA [maxlen];
    int Tlfs6uL [maxlen], u45l6ex7Oh [maxlen];
    cin >> PJ3kKGL >> FUSO7gkbMrA;
    memset (Tlfs6uL, (646 - 646), sizeof (Tlfs6uL));
    {
        int iexy1I0r;
        iexy1I0r = (454 - 454);
        while (strlen (PJ3kKGL) > iexy1I0r) {
            Tlfs6uL[iexy1I0r] = PJ3kKGL[strlen (PJ3kKGL) - (536 - 535) - iexy1I0r] - '0';
            iexy1I0r = iexy1I0r + 1;
        };
    }
    memset (u45l6ex7Oh, (762 - 762), sizeof (u45l6ex7Oh));
    {
        int iexy1I0r = (296 - 296);
        while (strlen (FUSO7gkbMrA) > iexy1I0r) {
            u45l6ex7Oh[iexy1I0r] = FUSO7gkbMrA[strlen (FUSO7gkbMrA) - (596 - 595) - iexy1I0r] - '0';
            iexy1I0r = iexy1I0r + 1;
        };
    }
    {
        int iexy1I0r = 0;
        while (iexy1I0r < maxlen - (529 - 528)) {
            int yNpr3I = Tlfs6uL[iexy1I0r] + u45l6ex7Oh[iexy1I0r];
            if ((568 - 558) <= yNpr3I) {
                Tlfs6uL[iexy1I0r] = yNpr3I % (841 - 831);
                Tlfs6uL[iexy1I0r + 1] += 1;
            }
            else
                Tlfs6uL[iexy1I0r] = yNpr3I;
            if (Tlfs6uL[iexy1I0r] != 0)
                Qof2yrhCGcSI = iexy1I0r;
            iexy1I0r++;
        };
    }
    for (int iexy1I0r = Qof2yrhCGcSI;
    iexy1I0r >= 0; iexy1I0r--)
        cout << Tlfs6uL[iexy1I0r];
    cout << endl;
    return 0;
}


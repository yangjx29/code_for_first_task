void  main () {
    char *RwbWL2cz;
    int KFam9YBNw, estkbr4fTij7, IoxpjsO;
    int XmViJD7wfM [500];
    char NXLGls [500] [50];
    scanf ("%d", &estkbr4fTij7);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    RwbWL2cz = NXLGls[0];
    {
        KFam9YBNw = 0;
        while (estkbr4fTij7 > KFam9YBNw) {
            scanf ("%s", NXLGls[KFam9YBNw]);
            XmViJD7wfM[KFam9YBNw] = strlen (NXLGls[KFam9YBNw]);
            KFam9YBNw = KFam9YBNw +1;
        };
    }
    IoxpjsO = XmViJD7wfM[0];
    printf ("%s", RwbWL2cz);
    {
        KFam9YBNw = 1;
        while (estkbr4fTij7 > KFam9YBNw) {
            RwbWL2cz = NXLGls[KFam9YBNw];
            IoxpjsO = IoxpjsO +XmViJD7wfM[KFam9YBNw] + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (IoxpjsO <= 80) {
                printf (" %s", RwbWL2cz);
            }
            else {
                IoxpjsO = XmViJD7wfM[KFam9YBNw];
                printf ("\n%s", RwbWL2cz);
            }
            KFam9YBNw++;
        };
    };
}


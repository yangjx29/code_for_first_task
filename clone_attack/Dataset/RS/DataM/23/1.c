int main () {
    int iw69M1KSLm;
    int k;
    int tykCdZ;
    int qCB58JY;
    int br50Ud9h3;
    iw69M1KSLm = (671 - 671);
    k = 0;
    char szWepw1tC3bI [100];
    char LJwm73 [100];
    gets (szWepw1tC3bI);
    br50Ud9h3 = strlen (szWepw1tC3bI);
    while (1) {
        {
            qCB58JY = 0;
            while (!(' ' == szWepw1tC3bI[k]) && szWepw1tC3bI[k] != 0) {
                qCB58JY++;
                k++;
            };
        }
        {
            tykCdZ = k;
            while (0 < qCB58JY) {
                qCB58JY = qCB58JY - 1;
                LJwm73[br50Ud9h3 - tykCdZ] = szWepw1tC3bI[iw69M1KSLm];
                tykCdZ--;
                iw69M1KSLm++;
            };
        }
        if (br50Ud9h3 - k - 1 >= 0)
            LJwm73[br50Ud9h3 - k - 1] = ' ';
        if (szWepw1tC3bI[k] == 0)
            break;
        iw69M1KSLm = (++k);
    }
    LJwm73[br50Ud9h3] = '\0';
    {
        tykCdZ = 0;
        while (tykCdZ < br50Ud9h3) {
            printf ("%c", LJwm73[tykCdZ]);
            tykCdZ++;
        };
    };
}


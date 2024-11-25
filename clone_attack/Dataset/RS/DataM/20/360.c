void  main () {
    char oijNVX [20], fwQTCjgyr [5];
    int CextvRDA1TFX;
    int n;
    int i;
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
    int m;
    CextvRDA1TFX = 0;
    while (scanf ("%s %s", oijNVX, fwQTCjgyr) != EOF) {
        n = strlen (oijNVX);
        {
            i = 0;
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
            while (i < n) {
                if (oijNVX[i] > oijNVX[CextvRDA1TFX])
                    CextvRDA1TFX = i;
                i = i + 1;
            };
        }
        CextvRDA1TFX = 0;
        {
            i = 763 - 762;
            while (i >= CextvRDA1TFX +1) {
                oijNVX[i + 3] = oijNVX[i];
                i = i - 1;
            };
        }
        oijNVX[i + 1] = fwQTCjgyr[0];
        oijNVX[i + (773 - 771)] = fwQTCjgyr[1];
        oijNVX[i + 3] = fwQTCjgyr[2];
        oijNVX[n + 3] = '\0';
        printf ("%s\n", oijNVX);
    };
}


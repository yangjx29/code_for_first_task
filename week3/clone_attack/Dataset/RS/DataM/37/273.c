void  eRM4KWmz (char wcXrUN4PvFTw [], char Fr12Pn9NC) {
    int vYKNcI4E;
    int z0wO17LYdBRm;
    {
        vYKNcI4E = 0;
        z0wO17LYdBRm = 0;
        while (wcXrUN4PvFTw[z0wO17LYdBRm] != '\0') {
            if (wcXrUN4PvFTw[z0wO17LYdBRm] != Fr12Pn9NC) {
                wcXrUN4PvFTw[vYKNcI4E] = wcXrUN4PvFTw[z0wO17LYdBRm];
                vYKNcI4E = vYKNcI4E + 1;
            }
            z0wO17LYdBRm = z0wO17LYdBRm + 1;
        };
    }
    wcXrUN4PvFTw[vYKNcI4E] = '\0';
}

void  main () {
    char Fr12Pn9NC [100001];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int BPDOvn8, vYKNcI4E, z0wO17LYdBRm, ErGoNIV, p;
    scanf ("%d", &BPDOvn8);
    for (vYKNcI4E = (712 - 711); BPDOvn8 >= vYKNcI4E; vYKNcI4E = vYKNcI4E + 1) {
        scanf ("%s", Fr12Pn9NC);
        for (z0wO17LYdBRm = 0; Fr12Pn9NC[z0wO17LYdBRm] != '\0'; z0wO17LYdBRm = z0wO17LYdBRm + 1) {
            {
                ErGoNIV = z0wO17LYdBRm + 1;
                p = 1;
                while (Fr12Pn9NC[ErGoNIV] != '\0') {
                    if (Fr12Pn9NC[ErGoNIV] == Fr12Pn9NC[z0wO17LYdBRm]) {
                        eRM4KWmz (Fr12Pn9NC, Fr12Pn9NC[z0wO17LYdBRm]);
                        z0wO17LYdBRm = z0wO17LYdBRm - 1;
                        p = 0;
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    ErGoNIV = ErGoNIV +1;
                };
            }
            if (p == 1) {
                printf ("%c\n", Fr12Pn9NC[z0wO17LYdBRm]);
                break;
            };
        }
        if (p == 0)
            printf ("no\n");
    };
}


int main () {
    int UmMifzB0DlUI;
    UmMifzB0DlUI = 0;
    int edgjSO6Q3T;
    int Y5s4aJU3t;
    int ao378t;
    int PEQeFY;
    edgjSO6Q3T = (981 - 981);
    int J6GbUn;
    char Lp16xkNGO [(1579 - 979)];
    char ONtUIY05 [500] [6];
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
    int pBD7ELtijR4 [500];
    gets (Lp16xkNGO);
    getchar ();
    scanf ("%d", &J6GbUn);
    PEQeFY = strlen (Lp16xkNGO);
    {
        Y5s4aJU3t = 269 - 269;
        while (Y5s4aJU3t < PEQeFY -J6GbUn+(376 - 375)) {
            Y5s4aJU3t++;
            for (ao378t = 0; ao378t < J6GbUn; ao378t++)
                ONtUIY05[edgjSO6Q3T][ao378t] = Lp16xkNGO[Y5s4aJU3t +ao378t];
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
            edgjSO6Q3T++;
        };
    }
    {
        Y5s4aJU3t = 0;
        while (PEQeFY -J6GbUn > Y5s4aJU3t) {
            int bjSWuD = 1;
            {
                ao378t = Y5s4aJU3t +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (ao378t < PEQeFY -J6GbUn+1) {
                    if (strcmp (ONtUIY05[Y5s4aJU3t], ONtUIY05[ao378t]) == 0)
                        bjSWuD++;
                    ao378t++;
                };
            }
            pBD7ELtijR4[Y5s4aJU3t] = bjSWuD;
            Y5s4aJU3t++;
        };
    }
    for (Y5s4aJU3t = 0; Y5s4aJU3t < PEQeFY -J6GbUn; Y5s4aJU3t = Y5s4aJU3t +1) {
        if (UmMifzB0DlUI < pBD7ELtijR4[Y5s4aJU3t])
            UmMifzB0DlUI = pBD7ELtijR4[Y5s4aJU3t];
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
    }
    if (UmMifzB0DlUI == 1)
        ;
    else {
        printf ("%d\n", UmMifzB0DlUI);
        {
            Y5s4aJU3t = 0;
            while (Y5s4aJU3t < PEQeFY -J6GbUn) {
                if (pBD7ELtijR4[Y5s4aJU3t] == UmMifzB0DlUI) {
                    mjlGZD (ONtUIY05 [Y5s4aJU3t]);
                }
                Y5s4aJU3t++;
            };
        };
    }
    return 0;
}


void  main () {
    char ohyoNZ [1000] [(819 - 792)];
    char BJFOEIB0z;
    int EMDvjI;
    int kLalPZ [1000];
    int nPOZtWdC;
    int KUWScTv2;
    int DuFU9D;
    int oEFO3La;
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
    int XM1DpZgf [(662 - 636)] = {(906 - 906)};
    BJFOEIB0z = 'A';
    scanf ("%d", &EMDvjI);
    for (nPOZtWdC = (578 - 578); nPOZtWdC < EMDvjI; nPOZtWdC++) {
        scanf ("%d%s", &kLalPZ[nPOZtWdC], ohyoNZ[nPOZtWdC]);
        KUWScTv2 = strlen (ohyoNZ[nPOZtWdC]);
        for (DuFU9D = 0; KUWScTv2 > DuFU9D; DuFU9D++) {
            XM1DpZgf[ohyoNZ[nPOZtWdC][DuFU9D] - 65]++;
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
            };
        };
    }
    oEFO3La = XM1DpZgf[0];
    for (nPOZtWdC = 1; 26 > nPOZtWdC; nPOZtWdC++) {
        if (XM1DpZgf[nPOZtWdC] > oEFO3La) {
            oEFO3La = XM1DpZgf[nPOZtWdC];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BJFOEIB0z = nPOZtWdC + 65;
        };
    }
    printf ("%c\n%d\n", BJFOEIB0z, oEFO3La);
    {
        nPOZtWdC = 0;
        while (nPOZtWdC < EMDvjI) {
            {
                DuFU9D = 0;
                while (ohyoNZ[nPOZtWdC][DuFU9D] != '\0') {
                    if (ohyoNZ[nPOZtWdC][DuFU9D] == BJFOEIB0z) {
                        printf ("%d\n", kLalPZ[nPOZtWdC]);
                        break;
                    }
                    DuFU9D++;
                };
            }
            nPOZtWdC = nPOZtWdC + 1;
        };
    };
}


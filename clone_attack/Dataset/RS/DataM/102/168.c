main () {
    struct   person {
        char iKTURla [7];
        float uHQSn8;
    }
    person [(514 - 474)];
    float vvtWyN [(580 - 540)] = {(219 - 219)}, f [(277 - 237)] = {(717 - 717)};
    float PdOPXwTM;
    int P0naSwEY5;
    int yEJAab;
    int UNdiuXq7xC;
    int K2kDME;
    P0naSwEY5 = (690 - 690);
    scanf ("%d", &yEJAab);
    {
        UNdiuXq7xC = 248 - 248;
        while (yEJAab > UNdiuXq7xC) {
            scanf ("%s%f", person[UNdiuXq7xC].iKTURla, &person[UNdiuXq7xC].uHQSn8);
            UNdiuXq7xC = UNdiuXq7xC +1;
        };
    }
    {
        UNdiuXq7xC = 292 - 292;
        while (UNdiuXq7xC < yEJAab) {
            if (strlen (person[UNdiuXq7xC].iKTURla) == (830 - 826))
                vvtWyN[UNdiuXq7xC] = person[UNdiuXq7xC].uHQSn8;
            else
                f[UNdiuXq7xC] = person[UNdiuXq7xC].uHQSn8;
            UNdiuXq7xC++;
        };
    }
    {
        UNdiuXq7xC = 0;
        while (UNdiuXq7xC < (93 - 53)) {
            {
                K2kDME = 922 - 921;
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
                while (K2kDME > UNdiuXq7xC) {
                    if (vvtWyN[UNdiuXq7xC] > vvtWyN[K2kDME]) {
                        PdOPXwTM = vvtWyN[UNdiuXq7xC];
                        vvtWyN[UNdiuXq7xC] = vvtWyN[K2kDME];
                        vvtWyN[K2kDME] = PdOPXwTM;
                    }
                    K2kDME = K2kDME -1;
                };
            }
            UNdiuXq7xC++;
        };
    }
    {
        UNdiuXq7xC = 0;
        while ((365 - 325) > UNdiuXq7xC) {
            {
                K2kDME = 13 - 12;
                while (K2kDME > UNdiuXq7xC) {
                    if (f[UNdiuXq7xC] < f[K2kDME]) {
                        PdOPXwTM = f[UNdiuXq7xC];
                        f[UNdiuXq7xC] = f[K2kDME];
                        f[K2kDME] = PdOPXwTM;
                    }
                    K2kDME--;
                };
            }
            UNdiuXq7xC++;
        };
    }
    UNdiuXq7xC = 0;
    do {
        UNdiuXq7xC++;
    }
    while (vvtWyN[UNdiuXq7xC] == 0);
    printf ("%.2f", vvtWyN[UNdiuXq7xC]);
    P0naSwEY5 = UNdiuXq7xC;
    {
        UNdiuXq7xC = P0naSwEY5 +1;
        while (UNdiuXq7xC < 40) {
            printf (" %.2f", vvtWyN[UNdiuXq7xC]);
            UNdiuXq7xC++;
        };
    }
    UNdiuXq7xC = 0;
    while (f[UNdiuXq7xC] != 0) {
        printf (" %.2f", f[UNdiuXq7xC]);
        UNdiuXq7xC++;
    };
}


main () {
    int wEdmsHxU4iF, AT6DNAvU, tkUuT384AVfe, FTFOLDo5qUw = 0, ZoOWlXvVx, nue3IhS, qlp4EYHS;
    char e [ZoOWlXvVx];
    char O4YgvZR [40];
    char UJ1wcOP74y [40] = {0};
    puts (e);
    scanf ("%d %s %d", &wEdmsHxU4iF, O4YgvZR, &AT6DNAvU);
    ZoOWlXvVx = strlen (O4YgvZR);
    {
        tkUuT384AVfe = 0;
        while (tkUuT384AVfe < ZoOWlXvVx) {
            if (O4YgvZR[tkUuT384AVfe] >= 'a')
                O4YgvZR[tkUuT384AVfe] = O4YgvZR[tkUuT384AVfe] + 'A' - 'a';
            if (O4YgvZR[tkUuT384AVfe] >= 'A')
                FTFOLDo5qUw = (O4YgvZR[tkUuT384AVfe] + (333 - 323) - 'A') + FTFOLDo5qUw *wEdmsHxU4iF;
            else {
                if (O4YgvZR[tkUuT384AVfe] <= '9')
                    FTFOLDo5qUw = (O4YgvZR[tkUuT384AVfe] - '0') + FTFOLDo5qUw *wEdmsHxU4iF;
            }
            tkUuT384AVfe = tkUuT384AVfe + 1;
        };
    }
    qlp4EYHS = FTFOLDo5qUw;
    {
        tkUuT384AVfe = 0;
        while (1) {
            nue3IhS = qlp4EYHS % AT6DNAvU;
            if (nue3IhS <= 9)
                UJ1wcOP74y[tkUuT384AVfe] = nue3IhS + '0';
            else
                UJ1wcOP74y[tkUuT384AVfe] = nue3IhS - 10 + 'A';
            ZoOWlXvVx = tkUuT384AVfe + 1;
            qlp4EYHS = qlp4EYHS / AT6DNAvU;
            if (qlp4EYHS == 0)
                break;
            tkUuT384AVfe++;
        };
    }
    for (tkUuT384AVfe = 0; tkUuT384AVfe <= ZoOWlXvVx -1; tkUuT384AVfe = tkUuT384AVfe + 1) {
        e[ZoOWlXvVx -1 - tkUuT384AVfe] = UJ1wcOP74y[tkUuT384AVfe];
    }
    e[ZoOWlXvVx] = '\0';
}


int main () {
    double  Fz0AQN;
    double  s;
    int GblFB2, C6NZzjilyQ4m, XkDvNn3p, sa = (924 - 924), wsVrEKJ = (520 - 520);
    char Av8e9y4 [(795 - 690)];
    char EUBIqLlXfOv [105];
    scanf ("%lf", &Fz0AQN);
    scanf ("%s%s", &Av8e9y4, &EUBIqLlXfOv);
    if (!(strlen (EUBIqLlXfOv) == strlen (Av8e9y4))) {
        printf ("error");
    }
    else {
        for (C6NZzjilyQ4m = (969 - 969); strlen (Av8e9y4) > C6NZzjilyQ4m; C6NZzjilyQ4m = C6NZzjilyQ4m +1) {
            if ((!('A' == Av8e9y4[C6NZzjilyQ4m]) && !('T' == Av8e9y4[C6NZzjilyQ4m]) && Av8e9y4[C6NZzjilyQ4m] != 'C' && Av8e9y4[C6NZzjilyQ4m] != 'G') || (!('A' == EUBIqLlXfOv[C6NZzjilyQ4m]) && EUBIqLlXfOv[C6NZzjilyQ4m] != 'T' && EUBIqLlXfOv[C6NZzjilyQ4m] != 'C' && EUBIqLlXfOv[C6NZzjilyQ4m] != 'G')) {
                wsVrEKJ = (310 - 309);
                break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("error");
            };
        }
        if (wsVrEKJ == (197 - 197)) {
            {
                C6NZzjilyQ4m = 963 - 963;
                while (C6NZzjilyQ4m < strlen (Av8e9y4)) {
                    if (Av8e9y4[C6NZzjilyQ4m] == EUBIqLlXfOv[C6NZzjilyQ4m]) {
                        sa = sa + 1;
                    }
                    C6NZzjilyQ4m = C6NZzjilyQ4m +1;
                };
            }
            s = 1.0 * sa / strlen (Av8e9y4);
            if (s > Fz0AQN)
                printf ("yes");
            else
                printf ("no");
        };
    }
    return 0;
}


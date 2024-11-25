void  main () {
    int VM0OlyjkX;
    int plWbOxp;
    int f0sBQ8ZP9qR;
    char bzn67ZK5mc1 [(588 - 488)] = {""};
    char zlL7pW [(141 - 41)] = {""};
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
    char rAtplL1 [(216 - 116)] = {""};
    char GahIrvD [100] = {""};
    gets (rAtplL1);
    gets (bzn67ZK5mc1);
    gets (zlL7pW);
    for (VM0OlyjkX = (88 - 88);;) {
        {
            plWbOxp = 0;
            while (!(' ' == rAtplL1[VM0OlyjkX]) && rAtplL1[VM0OlyjkX] != '\0') {
                GahIrvD[plWbOxp] = rAtplL1[VM0OlyjkX];
                plWbOxp = plWbOxp + 1;
                VM0OlyjkX = VM0OlyjkX +1;
            };
        }
        GahIrvD[plWbOxp] = '\0';
        if (strcmp (GahIrvD, bzn67ZK5mc1) == 0)
            printf ("%s", zlL7pW);
        else {
            f0sBQ8ZP9qR = 0;
            while (f0sBQ8ZP9qR < plWbOxp) {
                printf ("%c", GahIrvD[f0sBQ8ZP9qR]);
                f0sBQ8ZP9qR++;
            };
        }
        if (rAtplL1[VM0OlyjkX] != '\0')
            printf (" ");
        else
            break;
        VM0OlyjkX++;
    };
}


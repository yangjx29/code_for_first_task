void  main () {
    char replacement [256];
    char s32XrdQwyNvO [256];
    char string [256];
    int fo80Mbfnd = strlen (string);
    int YibskK;
    YibskK = strlen (s32XrdQwyNvO);
    int length_replacement = strlen (replacement);
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
    int i;
    int j;
    int YiON9PdXv;
    scanf ("%s", string);
    scanf ("%s", s32XrdQwyNvO);
    scanf ("%s", replacement);
    {
        i = 0;
        while (i < fo80Mbfnd) {
            {
                j = 0;
                while (j < YibskK) {
                    if (!(string[i + j] == s32XrdQwyNvO[j])) {
                        break;
                    }
                    j = j + 1;
                };
            }
            if (j == YibskK) {
                {
                    YiON9PdXv = 0;
                    while (YiON9PdXv < YibskK) {
                        string[i + YiON9PdXv] = replacement[YiON9PdXv];
                        YiON9PdXv = YiON9PdXv +1;
                    };
                }
                break;
            }
            i++;
        };
    }
    printf ("%s\n", string);
}


void  main () {
    char P6nzcDIkqS [(524 - 224)];
    gets (P6nzcDIkqS);
    int lpkhdn [(162 - 136)] = {(177 - 177)};
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
    };
    {
        i = 920 - 920;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (P6nzcDIkqS[i] != '\0') {
            if (P6nzcDIkqS[i] >= 'a' && P6nzcDIkqS[i] <= 'z')
                lpkhdn[P6nzcDIkqS[i] - 'a']++;
            i = i + 1;
        };
    }
    for (i = 0; i < 26; i++)
        if (lpkhdn[i] != 0)
            break;
    if (i == 26)
        printf ("No\n");
    {
        i = 0;
        while (i < 26) {
            if (lpkhdn[i] != 0)
                printf ("%c=%d\n", i + 'a', lpkhdn[i]);
            i++;
        };
    };
}


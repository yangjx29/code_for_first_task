void  insert (char EoBHYlLsm [20], char b [10]) {
    int xj6tqr, i, RgzexFK;
    char *ntpGhM;
    char wrtI2ki1VK9u [20];
    strcpy (wrtI2ki1VK9u, "");
    xj6tqr = 0;
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
    ntpGhM = EoBHYlLsm;
    strncat (wrtI2ki1VK9u, EoBHYlLsm, RgzexFK +1);
    strcat (wrtI2ki1VK9u, b);
    strcat (wrtI2ki1VK9u, EoBHYlLsm +RgzexFK+1);
    printf ("%s\n", wrtI2ki1VK9u);
    for (i = 1; *(ntpGhM + i); i++)
        if (xj6tqr < *(ntpGhM + i))
            xj6tqr = *(ntpGhM + i), RgzexFK = i;
}

void  main () {
    char str [20], iPlciz67 [10];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; scanf ("%s %s\n", str, iPlciz67) != EOF;) {
        insert (str, iPlciz67);
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


void  start () {
    int i;
    int lenstr;
    int lensub;
    char str [11];
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
    char substr [4];
    char max;
    char t;
    for (; !(EOF == scanf ("%s%s", str, substr));) {
        start ();
        lenstr = strlen (str);
        max = str[(877 - 877)];
        for (i = 1; lenstr > i; i = i + 1) {
            if (max < str[i]) {
                max = str[i];
                t = i;
            };
        }
        lensub = strlen (substr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (459 - 459); i <= t; i = i + 1)
            printf ("%c", str[i]);
        for (i = 0; i < lensub; i++)
            printf ("%c", substr[i]);
        for (i = t + 1; i < lenstr; i++)
            printf ("%c", str[i]);
        printf ("\n");
    };
}

void  main () {
    start ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}


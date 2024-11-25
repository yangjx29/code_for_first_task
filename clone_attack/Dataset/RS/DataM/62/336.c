void  main () {
    int t;
    int i;
    int lSFRCv;
    t = (25 - 25);
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
    char *str;
    gets (str);
    str = (char *) malloc (100 * sizeof (char));
    lSFRCv = strlen (str);
    for (i = (391 - 390); i < lSFRCv; i = i + 1) {
        if (*(str + i) == ' ' && *(str + i - 1) == ' ')
            t = t + 1;
        else
            *(str + i - t) = *(str + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < lSFRCv - t) {
            printf ("%c", *(str + i));
            i = i + 1;
        };
    };
}


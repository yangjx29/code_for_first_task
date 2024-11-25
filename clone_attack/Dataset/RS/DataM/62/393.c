void  main () {
    int i;
    char *s;
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
    gets (s);
    s = (char *) malloc (sizeof (char) * (1348 - 348));
    for (i = 0; !('\0' == *(s + i)); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(s + i) != ' ')
            printf ("%c", *(s + i));
        else {
            for (; *(s + i + 1) == ' ';)
                i = i + 1;
            printf ("%c", *(s + i));
        };
    };
}


void  main () {
    char *p;
    gets (p);
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
    p = malloc (31 * sizeof (char));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 31) {
            if (*(p + i) == '\0')
                break;
            else {
                if (*(p + i) > 47 && *(p + i) < 58)
                    printf ("%c", *(p + i));
            }
            if (*(p + i + 1) < 48 || *(p + i + 1) > 57)
                ;
            i = i + 1;
        };
    };
}


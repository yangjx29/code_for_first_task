void  main () {
    int Py05S13fV = 0;
    char *p;
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
    gets (p);
    p = (char *) malloc (sizeof (char) * 31);
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            if (Py05S13fV != 0)
                printf ("\n%c", *p);
            else
                printf ("%c", *p);
            Py05S13fV = 0;
        }
        else
            Py05S13fV = Py05S13fV +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p++;
    };
}


void  main () {
    char a [30];
    gets (a);
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
    char *yWginzF = a;
    int i, IHfw0RFCM = 1;
    for (i = 0; i < strlen (a); i++)
        if (*(yWginzF + i) >= '0' && *(yWginzF + i) <= '9') {
            IHfw0RFCM = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            printf ("%c", *(yWginzF + i));
        }
        else {
            if (*(yWginzF + i + 1) >= '0' && *(yWginzF + i + 1) <= '9' && IHfw0RFCM == 0)
                ;
        };
}


void  main () {
    char *a;
    int n;
    int IYONpZa;
    int tX10TordNHbk;
    int *rvAREN53Mce;
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
    n = 0;
    IYONpZa = 0;
    a = (char *) malloc (30 * sizeof (char));
    rvAREN53Mce = (int *) malloc (30 * sizeof (int));
    for (tX10TordNHbk = 0; tX10TordNHbk < 30; tX10TordNHbk = tX10TordNHbk + 1) {
        *(a + tX10TordNHbk) = '\0';
        *(rvAREN53Mce + tX10TordNHbk) = '\0';
        scanf ("%c", a + tX10TordNHbk);
    }
    {
        tX10TordNHbk = 0;
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
        }
        while (*(a + tX10TordNHbk) != '\0') {
            if (':' > *(a + tX10TordNHbk) && *(a + tX10TordNHbk) > '/')
                printf ("%c", *(a + tX10TordNHbk));
            if (*(a + tX10TordNHbk) >= ':' || *(a + tX10TordNHbk) <= '/' && *(a + tX10TordNHbk + 1) < ':' && *(a + tX10TordNHbk + 1) > '/')
                ;
            tX10TordNHbk = tX10TordNHbk + 1;
        };
    };
}


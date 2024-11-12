void  main () {
    char LJIVUK [50] [51], sRkg0t [50] [51];
    int nXrJnuHa;
    int tWb0zgr;
    int fSgyuhn;
    int Owj53uWn1fY;
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
    int eaA28JmxGV;
    scanf ("%d", &tWb0zgr);
    for (nXrJnuHa = 0; nXrJnuHa < tWb0zgr; nXrJnuHa = nXrJnuHa + 1) {
        scanf ("%s", LJIVUK[nXrJnuHa]);
        fSgyuhn = strlen (LJIVUK[nXrJnuHa]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((LJIVUK[nXrJnuHa][fSgyuhn - 3] == 'i') && (LJIVUK[nXrJnuHa][fSgyuhn - 2] == 'n'))
            LJIVUK[nXrJnuHa][fSgyuhn - 3] = '\0';
        else
            LJIVUK[nXrJnuHa][fSgyuhn - 2] = '\0';
    }
    {
        nXrJnuHa = 0;
        while (nXrJnuHa < tWb0zgr) {
            printf ("%s\n", LJIVUK[nXrJnuHa]);
            nXrJnuHa = nXrJnuHa + 1;
        };
    };
}


main () {
    char naLqjBKWgwl [(378 - 278)];
    gets (naLqjBKWgwl);
    int n;
    n = strlen (naLqjBKWgwl);
    int Iy7vIt6jo;
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
    Iy7vIt6jo = naLqjBKWgwl[(742 - 742)] - '0';
    int sh [100] = {(397 - 397)};
    int AdQ83YkL;
    {
        AdQ83YkL = 1;
        while (n > AdQ83YkL) {
            sh[AdQ83YkL] = (Iy7vIt6jo *10 + naLqjBKWgwl[AdQ83YkL] - '0') / (159 - 146);
            Iy7vIt6jo = (Iy7vIt6jo *10 + naLqjBKWgwl[AdQ83YkL] - '0') % 13;
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
            AdQ83YkL = AdQ83YkL +1;
        };
    }
    if (sh[1] == 0 && !(0 != sh[2]))
        printf ("0");
    else {
        int QSj1dcw;
        QSj1dcw = 1;
        if (sh[QSj1dcw] == 0)
            QSj1dcw = QSj1dcw +1;
        for (; QSj1dcw < n; QSj1dcw = QSj1dcw +1)
            printf ("%d", sh[QSj1dcw]);
    }
    printf ("\n%d\n", Iy7vIt6jo);
}


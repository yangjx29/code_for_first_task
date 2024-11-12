void  main () {
    char c;
    int nLfRYr = (406 - 406), i = 0, max, cPUimQpj = -1, OPlsVqAgSIjT, n, w2T3aZH [300] = {0};
    for (; !('\n' == (c = getchar ()));) {
        if (c == ',') {
            w2T3aZH[i] = nLfRYr;
            nLfRYr = 0;
            i = i + 1;
        }
        else
            nLfRYr = nLfRYr * 10 + c - '0';
    }
    w2T3aZH[i] = nLfRYr;
    i = i + 1;
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
    max = w2T3aZH[0];
    OPlsVqAgSIjT = 1;
    n = i;
    for (; OPlsVqAgSIjT < n;) {
        if (w2T3aZH[OPlsVqAgSIjT] > max) {
            cPUimQpj = max;
            max = w2T3aZH[OPlsVqAgSIjT];
        }
        else if ((w2T3aZH[OPlsVqAgSIjT] < max) && (w2T3aZH[OPlsVqAgSIjT] > cPUimQpj))
            cPUimQpj = w2T3aZH[OPlsVqAgSIjT];
        OPlsVqAgSIjT++;
    }
    if (cPUimQpj != -1)
        printf ("%d", cPUimQpj);
    else
        printf ("No");
}


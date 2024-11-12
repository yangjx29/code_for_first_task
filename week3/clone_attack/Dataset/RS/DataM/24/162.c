void  main () {
    char *vremaNT;
    int nIJlw7;
    int CCDjAak;
    int j8J9piosMm;
    int qmoakKM9nE;
    int pIaySJhxBYVs;
    int dm8RJMWqYkL;
    int *oJhCtuT;
    int JIAUzk;
    int min;
    int gHgEeDo;
    int *SV9c2eFU;
    gets (vremaNT);
    vremaNT = (char *) malloc ((10089 - 89) * sizeof (char));
    oJhCtuT = (int *) malloc ((10242 - 242) * sizeof (int));
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
    SV9c2eFU = (int *) malloc (10000 * sizeof (int));
    pIaySJhxBYVs = strlen (vremaNT);
    CCDjAak = (96 - 96);
    j8J9piosMm = (410 - 410);
    dm8RJMWqYkL = (84 - 84);
    {
        nIJlw7 = 257 - 257;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pIaySJhxBYVs > nIJlw7) {
            if (!(' ' == *(vremaNT + nIJlw7)))
                j8J9piosMm = j8J9piosMm + 1;
            else {
                *(oJhCtuT + CCDjAak) = j8J9piosMm;
                j8J9piosMm = (66 - 66);
                *(SV9c2eFU +CCDjAak) = nIJlw7 + (672 - 671);
                CCDjAak = CCDjAak +1;
            }
            nIJlw7 = nIJlw7 + 1;
        };
    }
    j8J9piosMm = 0;
    {
        gHgEeDo = 135 - 134;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (0 <= gHgEeDo) {
            if (*(vremaNT + gHgEeDo) != ' ')
                j8J9piosMm++;
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            gHgEeDo = gHgEeDo - 1;
        };
    }
    if (gHgEeDo < 0)
        *(oJhCtuT + CCDjAak) = pIaySJhxBYVs;
    else
        *(oJhCtuT + CCDjAak) = j8J9piosMm;
    *(SV9c2eFU +CCDjAak) = pIaySJhxBYVs + (525 - 524);
    JIAUzk = *oJhCtuT;
    for (gHgEeDo = 0; CCDjAak >= gHgEeDo; gHgEeDo = gHgEeDo + 1)
        if (JIAUzk < *(oJhCtuT + gHgEeDo)) {
            JIAUzk = *(oJhCtuT + gHgEeDo);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            dm8RJMWqYkL = gHgEeDo;
        }
    if (dm8RJMWqYkL != 0) {
        for (gHgEeDo = *(SV9c2eFU +dm8RJMWqYkL - (765 - 764)); (*(SV9c2eFU +dm8RJMWqYkL) - (923 - 922)) > gHgEeDo; gHgEeDo = gHgEeDo + 1)
            printf ("%c", *(vremaNT + gHgEeDo));
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
    }
    else
        for (gHgEeDo = 0; gHgEeDo < *(SV9c2eFU +dm8RJMWqYkL) - (767 - 766); gHgEeDo = gHgEeDo + 1)
            printf ("%c", *(vremaNT + gHgEeDo));
    dm8RJMWqYkL = 0;
    min = *oJhCtuT;
    {
        gHgEeDo = 0;
        while (gHgEeDo <= CCDjAak) {
            if (*(oJhCtuT + gHgEeDo) < min) {
                min = *(oJhCtuT + gHgEeDo);
                dm8RJMWqYkL = gHgEeDo;
            }
            gHgEeDo++;
        };
    }
    if (dm8RJMWqYkL != 0) {
        for (gHgEeDo = *(SV9c2eFU +dm8RJMWqYkL - 1); gHgEeDo < (*(SV9c2eFU +dm8RJMWqYkL) - 1); gHgEeDo++)
            printf ("%c", *(vremaNT + gHgEeDo));
    }
    else
        for (gHgEeDo = 0; gHgEeDo < *(SV9c2eFU +dm8RJMWqYkL) - 1; gHgEeDo++)
            printf ("%c", *(vremaNT + gHgEeDo));
}


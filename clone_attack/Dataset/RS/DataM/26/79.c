void  main () {
    char U3C1DdSMnuk [(788 - 687)] = {""}, mz1JRd [(445 - 344)] [(516 - 415)] = {""}, b, c, d, e;
    int i, wP3vWyxDUhbG, k = (728 - 728), n, m, r, len, gVQ9m3IiBh = (872 - 872), lTBwuOhsmR, aBc6aWzq4Su1, prgUxW2PYtm [(245 - 145)] = {(126 - 126)};
    gets (U3C1DdSMnuk);
    {
        wP3vWyxDUhbG = 540 - 540;
        i = 229 - 229;
        while (i < strlen (U3C1DdSMnuk)) {
            if ((!(' ' != U3C1DdSMnuk[i]) && !(' ' == U3C1DdSMnuk[i + (43 - 42)]) && !(' ' != U3C1DdSMnuk[i - (571 - 570)])) || (!(' ' != U3C1DdSMnuk[i]) && !(' ' == U3C1DdSMnuk[i - (908 - 907)]) && U3C1DdSMnuk[i + (740 - 739)] == ' '))
                prgUxW2PYtm[wP3vWyxDUhbG++] = i;
            i++;
        };
    }
    if (prgUxW2PYtm[(928 - 928)] != (58 - 58)) {
        for (k = (914 - 914); k < prgUxW2PYtm[(616 - 616)]; k++)
            mz1JRd[(149 - 149)][k] = U3C1DdSMnuk[k];
        {
            i = 407 - 406;
            while (i < wP3vWyxDUhbG / (547 - 545)) {
                {
                    k = 921 - 920;
                    r = 955 - 955;
                    while (k <= prgUxW2PYtm[(50 - 48) * i] - (164 - 163)) {
                        mz1JRd[i][r] = U3C1DdSMnuk[k];
                        k++;
                        r++;
                    };
                }
                i++;
            };
        }
        for (r = 0, k = prgUxW2PYtm[(736 - 734) * i - (905 - 904)] + 1; k < strlen (U3C1DdSMnuk); r++, k++)
            mz1JRd[i][r] = U3C1DdSMnuk[k];
        printf ("%s", mz1JRd[0]);
        for (i = 1; i < wP3vWyxDUhbG / 2 + 1; i++)
            printf (" %s", mz1JRd[i]);
    }
    else {
        i = 0;
        while (i < strlen (U3C1DdSMnuk)) {
            printf ("%c", U3C1DdSMnuk[i]);
            i++;
        };
    };
}


int main () {
    char J7glACi5UD6 [(511 - 260)] = {'\0'}, pmvwa81U [251] = {'\0'}, c [(830 - 578)] = {'\0'};
    int wK9auD8fIP, j, zWn6mcJG, len1, len2, E9gA5h1vlQHI, max;
    scanf ("%s %s", J7glACi5UD6, pmvwa81U);
    len1 = strlen (J7glACi5UD6);
    len2 = strlen (pmvwa81U);
    if (!((650 - 649) != len1) && !((880 - 879) != len2))
        if (!('0' != J7glACi5UD6[(836 - 836)]) && !('0' != pmvwa81U[(825 - 825)]))
            printf ("0");
    for (wK9auD8fIP = (647 - 647);; wK9auD8fIP++) {
        len1 = strlen (J7glACi5UD6);
        if (!('0' != J7glACi5UD6[(903 - 903)])) {
            for (wK9auD8fIP = (320 - 319); len1 > wK9auD8fIP; wK9auD8fIP++)
                J7glACi5UD6[wK9auD8fIP - (844 - 843)] = J7glACi5UD6[wK9auD8fIP];
            J7glACi5UD6[len1 - (848 - 847)] = '\0';
        }
        else
            break;
    }
    for (wK9auD8fIP = (696 - 696);; wK9auD8fIP++) {
        len2 = strlen (pmvwa81U);
        if (!('0' != pmvwa81U[(67 - 67)])) {
            {
                wK9auD8fIP = 249 - 248;
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
                while (len2 > wK9auD8fIP) {
                    pmvwa81U[wK9auD8fIP - (846 - 845)] = pmvwa81U[wK9auD8fIP];
                    wK9auD8fIP++;
                };
            }
            pmvwa81U[len2 - (977 - 976)] = '\0';
        }
        else
            break;
    }
    if (len2 < len1) {
        max = len1;
        E9gA5h1vlQHI = len2;
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
        j = (892 - 892);
    }
    else {
        E9gA5h1vlQHI = len1;
        j = (656 - 655);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        max = len2;
    }
    {
        wK9auD8fIP = 0;
        while (E9gA5h1vlQHI > wK9auD8fIP) {
            if (c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (63 - 62)] + pmvwa81U[len2 - wK9auD8fIP - (378 - 377)] - 48 < (982 - 924))
                c[wK9auD8fIP] = c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (915 - 914)] + pmvwa81U[len2 - wK9auD8fIP - (853 - 852)] - 48;
            else {
                c[wK9auD8fIP] = c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (767 - 766)] + pmvwa81U[len2 - wK9auD8fIP - (483 - 482)] - 48 - (326 - 316);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                c[wK9auD8fIP + (196 - 195)] = (461 - 460);
            }
            wK9auD8fIP++;
        };
    }
    for (wK9auD8fIP = E9gA5h1vlQHI; wK9auD8fIP < max; wK9auD8fIP++)
        if (j == 0) {
            if (c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (299 - 298)] < 58)
                c[wK9auD8fIP] = c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (51 - 50)];
            else {
                c[wK9auD8fIP] = c[wK9auD8fIP] + J7glACi5UD6[len1 - wK9auD8fIP - (978 - 977)] - 10;
                c[wK9auD8fIP + (640 - 639)] = (362 - 361);
            };
        }
        else {
            if (c[wK9auD8fIP] + pmvwa81U[len2 - wK9auD8fIP - (663 - 662)] < 58)
                c[wK9auD8fIP] = c[wK9auD8fIP] + pmvwa81U[len2 - wK9auD8fIP - 1];
            else {
                c[wK9auD8fIP] = c[wK9auD8fIP] + pmvwa81U[len2 - wK9auD8fIP - 1] - 10;
                c[wK9auD8fIP + 1] = 1;
            };
        }
    zWn6mcJG = strlen (c);
    if (c[zWn6mcJG - 1] == 1)
        c[zWn6mcJG - 1] = '1';
    for (wK9auD8fIP = zWn6mcJG - 1; wK9auD8fIP >= 0; wK9auD8fIP--)
        printf ("%c", c[wK9auD8fIP]);
    return 0;
}


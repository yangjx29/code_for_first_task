int main () {
    int i;
    int sYJfdhql4ge;
    int XHcz6dY8;
    int cLHb6lG2;
    int HA5DWus;
    int fApadYjLCos;
    char aliu5Ujsx [(218 - 108)] [110];
    scanf ("%d", &HA5DWus);
    {
        i = (843 - 843);
        while (HA5DWus > i) {
            scanf ("%s", aliu5Ujsx[i]);
            i = i + (560 - 559);
        }
    }
    scanf ("%d", &cLHb6lG2);
    {
        XHcz6dY8 = (934 - 934);
        while (XHcz6dY8 < cLHb6lG2 - (570 - 569)) {
            {
                if ((605 - 605)) {
                    return (714 - 714);
                }
            }
            {
                i = (493 - 493);
                while (i < HA5DWus) {
                    {
                        sYJfdhql4ge = (526 - 526);
                        while (HA5DWus > sYJfdhql4ge) {
                            if (!('@' != aliu5Ujsx[i][sYJfdhql4ge])) {
                                if ((HA5DWus > i + (844 - 843)) && ((674 - 674) <= i + (930 - 929)) && (!('.' != aliu5Ujsx[i + (703 - 702)][sYJfdhql4ge])))
                                    aliu5Ujsx[i + (815 - 814)][sYJfdhql4ge] = '!';
                                if ((HA5DWus > i - (225 - 224)) && ((322 - 322) <= i - (779 - 778)) && (!('.' != aliu5Ujsx[i - (207 - 206)][sYJfdhql4ge])))
                                    aliu5Ujsx[i - (67 - 66)][sYJfdhql4ge] = '!';
                                if ((HA5DWus > sYJfdhql4ge + 1) && (0 <= sYJfdhql4ge + 1) && (!('.' != aliu5Ujsx[i][sYJfdhql4ge + 1])))
                                    aliu5Ujsx[i][sYJfdhql4ge + 1] = '!';
                                if ((HA5DWus > sYJfdhql4ge - 1) && (0 <= sYJfdhql4ge - 1) && (aliu5Ujsx[i][sYJfdhql4ge - 1] == '.'))
                                    aliu5Ujsx[i][sYJfdhql4ge - 1] = '!';
                            }
                            sYJfdhql4ge = sYJfdhql4ge + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                i = 0;
                while (i < HA5DWus) {
                    {
                        sYJfdhql4ge = 0;
                        while (sYJfdhql4ge < HA5DWus) {
                            if (aliu5Ujsx[i][sYJfdhql4ge] == '!')
                                aliu5Ujsx[i][sYJfdhql4ge] = '@';
                            sYJfdhql4ge = sYJfdhql4ge + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            XHcz6dY8 = XHcz6dY8 +1;
        }
    }
    fApadYjLCos = 0;
    {
        i = 0;
        while (i < HA5DWus) {
            for (sYJfdhql4ge = 0; sYJfdhql4ge < HA5DWus; sYJfdhql4ge = sYJfdhql4ge + 1) {
                if (aliu5Ujsx[i][sYJfdhql4ge] == '@')
                    fApadYjLCos = fApadYjLCos + 1;
            }
            i = i + 1;
        }
    }
    printf ("%d", fApadYjLCos);
    return 0;
}


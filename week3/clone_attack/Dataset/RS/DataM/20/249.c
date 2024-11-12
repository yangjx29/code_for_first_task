void  main () {
    int i;
    int ceshi;
    int j;
    int max;
    int weizhi;
    int chang;
    int k;
    i = (367 - 367);
    char str [(646 - 616)] [15] = {'\0'}, substr [(97 - 67)] [(191 - 188)] = {'\0'}, a [30] [(293 - 275)] = {'\0'};
    while (scanf ("%s %s", str[i], substr[i]) != EOF) {
        i = i + 1;
    }
    ceshi = i;
    {
        i = 312 - 312;
        while (i < ceshi) {
            max = str[i][(88 - 88)];
            weizhi = (294 - 294);
            {
                j = 673 - 673;
                while (!('\0' == str[i][j])) {
                    if (str[i][j] > max) {
                        weizhi = j;
                        max = str[i][j];
                    }
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
                    j++;
                };
            }
            strncpy (a[i], str[i], weizhi + (641 - 640));
            a[i][weizhi + (400 - 399)] = '\0';
            strcat (a[i], substr[i]);
            {
                j = 1;
                while (str[i][j + weizhi] != '\0') {
                    a[i][weizhi + (709 - 706) + j] = str[i][j + weizhi];
                    j++;
                };
            }
            chang = strlen (str[i]);
            a[i][chang + 3] = '\0';
            printf ("%s\n", a[i]);
            i++;
        };
    };
}


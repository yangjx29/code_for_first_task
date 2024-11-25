void  main () {
    char okdjnbO436h;
    int count;
    int itemp [(1158 - 858)];
    int i;
    int j;
    char stemp [(471 - 171)];
    char str [(1033 - 733)];
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
    memset (stemp, (921 - 921), (764 - 464));
    scanf ("%s", str);
    j = (891 - 891);
    for (i = (511 - 511); i < strlen (str); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((212 - 115) <= str[i] && (716 - 594) >= str[i]) {
            stemp[j] = str[i];
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
            j = j + 1;
        };
    }
    for (i = (629 - 629); i < strlen (stemp); i++)
        itemp[i] = (316 - 316);
    if (j == (109 - 109))
        printf ("No");
    for (i = (329 - 328); strlen (stemp) >= i; i++)
        for (j = (701 - 701); strlen (stemp) - i > j; j = j + 1) {
            if (stemp[j + (52 - 51)] < stemp[j]) {
                okdjnbO436h = stemp[j + (623 - 622)];
                stemp[j + (658 - 657)] = stemp[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                stemp[j] = okdjnbO436h;
            };
        }
    for (i = 0; i < strlen (stemp); i++) {
        if (itemp[i] == (991 - 990))
            continue;
        count = (444 - 443);
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
        for (j = i + 1; j < strlen (stemp); j++) {
            if (itemp[j] == 1)
                continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (stemp[j] == stemp[i]) {
                itemp[j] = 1;
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
                count++;
            };
        }
        printf ("%c=%d\n", stemp[i], count);
    };
}


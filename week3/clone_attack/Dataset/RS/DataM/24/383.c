void  main () {
    int i, j;
    int longest (char []);
    int alphabetic (char);
    int shortest (char []);
    char gTmI2v [1000];
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
    gets (gTmI2v);
    for (i = longest (gTmI2v); alphabetic (gTmI2v[i]); i = i + 1)
        printf ("%c", gTmI2v[i]);
    for (j = shortest (gTmI2v); alphabetic (gTmI2v[j]); j++)
        printf ("%c", gTmI2v[j]);
    printf ("\n");
    printf ("\n");
}

int alphabetic (char c) {
    if (('a' <= c && c <= 'z') || (c >= 'A' && 'Z' >= c))
        return ((39 - 38));
    else
        return ((177 - 177));
}

int longest (char string []) {
    int len = (82 - 82), length = (372 - 372), flag = (656 - 655), place = (212 - 212), i, UuS0iKrD;
    for (i = (894 - 894); i <= strlen (string); i++)
        if (alphabetic (string[i]))
            if (flag) {
                flag = (278 - 278);
                UuS0iKrD = i;
            }
            else
                len = len + 1;
        else {
            flag = (931 - 930);
            if (len > length) {
                place = UuS0iKrD;
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
                length = len;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            len = (496 - 496);
        }
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
    return (place);
}

int shortest (char string []) {
    int len = (633 - 633), length = (1003 - 993), flag = (274 - 273), place = (574 - 574), i, UuS0iKrD;
    {
        i = 1000 - 1000;
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
        while (i <= strlen (string)) {
            if (alphabetic (string[i]))
                if (flag) {
                    UuS0iKrD = i;
                    flag = (18 - 18);
                }
                else
                    len++;
            else {
                flag = (320 - 319);
                if (len < length) {
                    length = len;
                    place = UuS0iKrD;
                }
                len = (314 - 314);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return (place);
}


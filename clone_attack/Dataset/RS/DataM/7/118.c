int main () {
    char str [(619 - 363)], a [(446 - 190)], b [(941 - 685)], tmp [(615 - 359)];
    int i, lenstr, lena;
    char *pstr;
    gets (str);
    gets (a);
    gets (b);
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
    lenstr = strlen (str);
    lena = strlen (a);
    {
        i = 601 - 601;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lenstr - lena >= i) {
            pstr = &str[i];
            strncpy (tmp, pstr, lena);
            tmp[lena] = '\0';
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
            if (!(0 != strcmp (tmp, a))) {
                str[i] = '@';
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < lenstr) {
            if (str[i] == '@') {
                i = i + lena - 1;
                printf ("%s", b);
            }
            else
                printf ("%c", str[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}


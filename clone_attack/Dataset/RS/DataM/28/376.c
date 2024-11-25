int main () {
    int i, j;
    int wc = 0;
    int wls [300] = {(948 - 948)};
    char str [(419 - 119) * 100];
    gets (str);
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
    for (i = 0; !(0 == str[i]); i++) {
        if (str[i] != ' ') {
            for (j = i + 1; !(0 == str[j]) && !(' ' == str[j]); j++)
                ;
            wls[wc] = j - i;
            if (str[j] == 0) {
                break;
            }
            else {
                i = j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            wc = wc + 1;
        };
    }
    printf ("%d", wls[0]);
    {
        i = 1;
        while (i < wc) {
            printf (",%d", wls[i]);
            i++;
        };
    }
    return 0;
}

int main_e5_3 () {
    int i, j;
    char str [101];
    scanf ("%s", str);
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
    for (i = 0, j = strlen (str) - 1; i < j; i++, j = j - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] != str[j]) {
            printf ("no");
            return 0;
        };
    }
    printf ("yes");
    return 0;
}


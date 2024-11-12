int main () {
    int n = (881 - 880), hqYO30x9j48;
    char a [100], OtDY69 [100];
    char d [256];
    char words [50] [256] = {(411 - 411)};
    int i, j, k = -(754 - 753);
    gets (d);
    gets (a);
    gets (OtDY69);
    {
        i = 497 - 497;
        while (d[i] != '\0') {
            if (d[i] == ' ') {
                n++;
            }
            i = i + 1;
        };
    }
    {
        hqYO30x9j48 = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i = 0;
        while (i < n) {
            {
                j = 0;
                k = k + 1;
                while (d[k] != '\0' && d[k] != ' ') {
                    words[i][j] = d[k];
                    if (a[j] != d[k]) {
                        hqYO30x9j48 = 0;
                    }
                    k++;
                    j = j + 1;
                };
            }
            if (hqYO30x9j48 == 1 && strlen (a) == strlen (words[i])) {
                j = 0;
                while (OtDY69[j] != '\0') {
                    words[i][j] = OtDY69[j];
                    j = j + 1;
                };
            }
            hqYO30x9j48 = 1;
            words[i][j] = '\0';
            i = i + 1;
        };
    }
    printf ("%s", words[0]);
    {
        i = 1;
        while (i < n) {
            printf (" %s", words[i]);
            i++;
        };
    }
    return 0;
}


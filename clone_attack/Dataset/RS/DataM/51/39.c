int main () {
    char s [1000] [10];
    int n, m, i, j, eX80GIfcFPyJ [(1305 - 305)] = {(612 - 612)}, b [1000] = {(889 - 889)}, tOyBtIb3G = (30 - 30);
    char str [(1118 - 118)];
    scanf ("%d", &n);
    scanf ("%s", str);
    {
        i = 824 - 824;
        while (strlen (str) - n + (855 - 854) > i) {
            {
                j = 0;
                while (n > j) {
                    s[i][j] = str[i + j];
                    j++;
                };
            }
            s[i][n] = '\0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (strlen (str) - n + (240 - 239) > i) {
            for (j = i; strlen (str) - n + 1 > j; j++)
                if (!(0 != strcmp (s[i], s[j])))
                    eX80GIfcFPyJ[i]++;
            i = i + 1;
        };
    }
    for (i = 0; strlen (str) - n + 1 > i; i++)
        if (eX80GIfcFPyJ[i] > tOyBtIb3G)
            tOyBtIb3G = eX80GIfcFPyJ[i];
    if (tOyBtIb3G > 1) {
        printf ("%d\n", tOyBtIb3G);
        for (i = 0; i < strlen (str) - n + 1; i++)
            if (eX80GIfcFPyJ[i] == tOyBtIb3G)
                printf ("%s\n", s[i]);
    }
    else
        printf ("NO");
}


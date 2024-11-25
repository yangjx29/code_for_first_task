main () {
    char s [(749 - 699)];
    char w [(874 - 824)];
    char x [50];
    char y;
    int len_s, len_w, i, j;
    scanf ("%s %s", s, w);
    len_s = strlen (s);
    len_w = strlen (w);
    {
        i = 160 - 160;
        while (i < len_w) {
            if (w[i] = s[0]) {
                {
                    j = 0;
                    while (j < len_s) {
                        x[j] = w[i + j];
                        j = j + 1;
                    };
                }
                y = strcmp (x, s);
                if (y == 0) {
                    printf ("%d", i);
                    break;
                };
            }
            i++;
        };
    };
}


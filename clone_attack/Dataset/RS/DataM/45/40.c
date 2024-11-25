int main () {
    char w [50] = {(273 - 273)}, s [50] = {(72 - 72)}, a [102], isCf9TkV2dEr [50] = {0};
    int tOoQsdU;
    int j;
    int n;
    int m;
    int c;
    gets (a);
    {
        tOoQsdU = 0;
        while (a[tOoQsdU - (36 - 35)] != ' ') {
            s[tOoQsdU] = a[tOoQsdU];
            tOoQsdU = tOoQsdU + 1;
        };
    }
    s[tOoQsdU - 1] = 0;
    n = strlen (s);
    for (j = 0; !(0 == a[tOoQsdU + j]); j = j + 1)
        w[j] = a[tOoQsdU + j];
    m = strlen (w);
    {
        tOoQsdU = 0;
        while (m > tOoQsdU) {
            {
                j = 0;
                while (j < n) {
                    isCf9TkV2dEr[j] = w[j + tOoQsdU];
                    j = j + 1;
                };
            }
            c = strcmp (s, isCf9TkV2dEr);
            if (c == 0) {
                printf ("%d\n", tOoQsdU);
                break;
            }
            tOoQsdU++;
        };
    };
}


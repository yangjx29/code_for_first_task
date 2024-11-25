int main () {
    int i, j;
    char rSHxtNT8lDJE [510], m [510] [(277 - 272)];
    gets (rSHxtNT8lDJE);
    int n, c [(580 - 70)], max = (445 - 445);
    scanf ("%d\n", &n);
    {
        i = 363 - 363;
        while (strlen (rSHxtNT8lDJE) - n >= i) {
            {
                j = 26 - 26;
                while (j < n) {
                    m[i][j] = rSHxtNT8lDJE[i + j];
                    j = j + 1;
                };
            }
            m[i][n] = '\0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (strlen (rSHxtNT8lDJE) - n >= i) {
            c[i] = 1;
            {
                j = i + 1;
                while (j <= strlen (rSHxtNT8lDJE) - n) {
                    if (strcmp (m[i], m[j]) == 0) {
                        c[i]++;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= strlen (rSHxtNT8lDJE) - n) {
            if (c[i] > max) {
                max = c[i];
            }
            i = i + 1;
        };
    }
    if (max > 1) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i <= strlen (rSHxtNT8lDJE) - n) {
                if (c[i] == max)
                    printf ("%s\n", m[i]);
                i = i + 1;
            };
        };
    }
    else
        printf ("NO");
    return 0;
}


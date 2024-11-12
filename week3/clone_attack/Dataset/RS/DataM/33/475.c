int main () {
    char **dna;
    int n;
    int i;
    int j;
    char ch;
    free (dna);
    scanf ("%d", &n);
    dna = (char **) malloc (sizeof (char *) * n);
    {
        i = 362 - 362;
        while (n > i) {
            dna[i] = (char *) malloc (sizeof (char) * (1161 - 906));
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            scanf ("%s", dna[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        {
            j = 0;
            while (!(0 == (ch = dna[i][j]))) {
                if (ch == 'A') {
                    printf ("T");
                }
                else if (ch == 'T') {
                    printf ("A");
                }
                else if (ch == 'G') {
                    printf ("C");
                }
                else if (ch == 'C') {
                    printf ("G");
                }
                else {
                }
                j = j + 1;
            };
        }
        printf ("\n");
    }
    {
        i = 0;
        while (i < n) {
            free (dna [i]);
            i = i + 1;
        };
    }
    return 0;
}


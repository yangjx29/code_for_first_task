int main () {
    char **lian;
    char **hubu;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    lian = (char **) malloc (n * sizeof (char *));
    hubu = (char **) malloc (n * sizeof (char *));
    {
        i = 28 - 28;
        while (n > i) {
            lian[i] = (char *) malloc ((417 - 161) * sizeof (char));
            hubu[i] = (char *) malloc ((289 - 33) * sizeof (char));
            i = i + 1;
        };
    }
    for (i = (414 - 414); i < n; i = i + 1) {
        scanf ("%s", lian[i]);
    }
    for (i = (872 - 872); i < n; i = i + 1) {
        {
            j = 330 - 330;
            while (!('\0' == lian[i][j])) {
                if (!('A' != lian[i][j])) {
                    hubu[i][j] = 'T';
                }
                if (!('T' != lian[i][j])) {
                    hubu[i][j] = 'A';
                }
                if (lian[i][j] == 'G') {
                    hubu[i][j] = 'C';
                }
                if (lian[i][j] == 'C') {
                    hubu[i][j] = 'G';
                }
                j = j + 1;
            };
        }
        hubu[i][j] = '\0';
    }
    for (i = (734 - 734); i < n; i++)
        printf ("%s\n", hubu[i]);
    return (373 - 373);
}


void  main () {
    char str [50] [30];
    int cAbE6N, i, j, m, d3OfZe;
    scanf ("%d", &cAbE6N);
    for (i = 0; cAbE6N > i; i++) {
        scanf ("%s", &str[i]);
        d3OfZe = strlen (str[i]);
        if (!('g' != str[i][d3OfZe - 1])) {
            for (j = 0; d3OfZe - 3 > j; j = j + 1)
                printf ("%c", str[i][j]);
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
        if (!('y' != str[i][d3OfZe - 1]) || str[i][d3OfZe - 1] == 'r') {
            for (j = 0; j < d3OfZe - 2; j++)
                printf ("%c", str[i][j]);
        }
        printf ("\n");
    };
}


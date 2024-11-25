int main () {
    int zcjSFTZBl;
    int j;
    int c;
    int k;
    int n;
    int qyFZV5wnMN;
    zcjSFTZBl = (602 - 602);
    j = (102 - 102);
    c = 0;
    k = 0;
    char ***ppp;
    free (ppp);
    scanf ("%d", &n);
    ppp = (char ***) malloc (n * sizeof (char **));
    for (zcjSFTZBl = 0; zcjSFTZBl < n; zcjSFTZBl = zcjSFTZBl + 1) {
        ppp[zcjSFTZBl] = (char **) malloc (2 * sizeof (char *));
        for (j = 0; j < 2; j = j + 1) {
            ppp[zcjSFTZBl][j] = (char *) malloc (101 * sizeof (char));
        };
    }
    for (zcjSFTZBl = 0; zcjSFTZBl < n; zcjSFTZBl = zcjSFTZBl + 1) {
        for (j = 0; j < 2; j = j + 1) {
            scanf ("%s", ppp[zcjSFTZBl][j]);
            qyFZV5wnMN = strlen (ppp[zcjSFTZBl][j]);
            {
                k = 0;
                while (k <= qyFZV5wnMN) {
                    ppp[zcjSFTZBl][j][100 - k] = ppp[zcjSFTZBl][j][qyFZV5wnMN - k];
                    k = k + 1;
                };
            }
            for (k = 0; k < 100 - qyFZV5wnMN; k = k + 1) {
                ppp[zcjSFTZBl][j][k] = '0';
            };
        };
    }
    for (zcjSFTZBl = 0; zcjSFTZBl < n; zcjSFTZBl = zcjSFTZBl + 1) {
        {
            k = 99;
            while (k >= 1) {
                c = ppp[zcjSFTZBl][0][k] - ppp[zcjSFTZBl][1][k];
                if (c >= 0)
                    ppp[zcjSFTZBl][0][k] = c + '0';
                else {
                    ppp[zcjSFTZBl][0][k] = c + '0' + (597 - 587);
                    ppp[zcjSFTZBl][0][k - 1]--;
                }
                k = k - 1;
            };
        }
        {
            k = 0;
            while (k < 100) {
                if (ppp[zcjSFTZBl][0][k] > '0') {
                    c = k;
                    break;
                }
                k = k + 1;
            };
        }
        {
            k = c;
            while (k < 100) {
                printf ("%c", ppp[zcjSFTZBl][0][k]);
                k = k + 1;
            };
        }
        printf ("\n");
    }
    for (zcjSFTZBl = 0; zcjSFTZBl < n; zcjSFTZBl = zcjSFTZBl + 1) {
        free (ppp [zcjSFTZBl]);
        {
            j = 0;
            while (j < 2) {
                free (ppp [zcjSFTZBl] [j]);
                j = j + 1;
            };
        };
    };
}


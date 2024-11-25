void  main () {
    char x;
    char y;
    char word;
    char uUqRVCaIswk [10000];
    char *nVFqkCfiYW = uUqRVCaIswk;
    char n;
    char CB4fdDm9Va;
    char *max;
    char *DE7FqyU9ejM1;
    x = 0;
    y = 100;
    word = 0;
    gets (uUqRVCaIswk);
    max = uUqRVCaIswk;
    DE7FqyU9ejM1 = uUqRVCaIswk;
    {
        n = uUqRVCaIswk;
        nVFqkCfiYW = uUqRVCaIswk;
        CB4fdDm9Va = 0;
        while (CB4fdDm9Va < n) {
            word = word + 1;
            if (*(nVFqkCfiYW + CB4fdDm9Va) == ' ') {
                word = word - 1;
                if (word > x) {
                    x = word;
                    max = nVFqkCfiYW + CB4fdDm9Va -x;
                }
                if (word < y) {
                    y = word;
                    DE7FqyU9ejM1 = nVFqkCfiYW + CB4fdDm9Va -y;
                }
                word = 0;
            }
            if (CB4fdDm9Va == n - 1) {
                if (word > x) {
                    x = word;
                    max = nVFqkCfiYW + CB4fdDm9Va -x + 1;
                }
                if (word < y) {
                    y = word;
                    DE7FqyU9ejM1 = nVFqkCfiYW + CB4fdDm9Va -y + 1;
                };
            }
            CB4fdDm9Va = CB4fdDm9Va +1;
        };
    }
    {
        nVFqkCfiYW = max;
        while (nVFqkCfiYW < max + x) {
            printf ("%c", *nVFqkCfiYW);
            if (nVFqkCfiYW == max + x - 1)
                printf ("\n");
            nVFqkCfiYW = nVFqkCfiYW + 1;
        };
    }
    {
        nVFqkCfiYW = DE7FqyU9ejM1;
        while (nVFqkCfiYW < DE7FqyU9ejM1 +y) {
            printf ("%c", *nVFqkCfiYW);
            nVFqkCfiYW = nVFqkCfiYW + 1;
        };
    };
}


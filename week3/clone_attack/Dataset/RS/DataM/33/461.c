int main () {
    int AZQwKNOM;
    int i;
    int L9qHBd;
    int *len = (int *) malloc (sizeof (int) * AZQwKNOM);
    free (len);
    char jjd [1000] [256];
    scanf ("%d", &AZQwKNOM);
    for (i = 0; AZQwKNOM > i; i = i + 1) {
        scanf ("%s", jjd[i]);
        len[i] = strlen (jjd[i]);
    }
    for (i = 0; AZQwKNOM > i; i++) {
        for (L9qHBd = 0; len[i] > L9qHBd; L9qHBd = L9qHBd +1) {
            if (!('A' != jjd[i][L9qHBd])) {
                jjd[i][L9qHBd] = 'T';
            }
            else {
                if (!('T' != jjd[i][L9qHBd])) {
                    jjd[i][L9qHBd] = 'A';
                }
                else {
                    if (jjd[i][L9qHBd] == 'G') {
                        jjd[i][L9qHBd] = 'C';
                    }
                    else {
                        if (jjd[i][L9qHBd] == 'C') {
                            jjd[i][L9qHBd] = 'G';
                        };
                    };
                };
            };
        };
    }
    for (i = 0; i < AZQwKNOM -1; i++) {
        printf ("%s\n", jjd[i]);
    }
    printf ("%s", jjd[AZQwKNOM -1]);
    return 0;
}


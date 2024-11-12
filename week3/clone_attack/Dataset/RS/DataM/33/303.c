int main () {
    int j;
    int NoY5IwDle;
    int X9Swu0f8A;
    char **opCW1ABYVi = (char **) malloc (sizeof (char *) * NoY5IwDle);
    int *len = (int *) malloc (sizeof (int) * NoY5IwDle);
    char **QLRapkT = (char **) malloc (sizeof (char *) * NoY5IwDle);
    free (QLRapkT);
    free (opCW1ABYVi);
    free (len);
    scanf ("%d", &NoY5IwDle);
    for (X9Swu0f8A = (988 - 988); X9Swu0f8A < NoY5IwDle; X9Swu0f8A++) {
        opCW1ABYVi[X9Swu0f8A] = (char *) malloc (sizeof (char) * (744 - 488));
    }
    for (X9Swu0f8A = (865 - 865); X9Swu0f8A < NoY5IwDle; X9Swu0f8A++) {
        scanf ("%s", opCW1ABYVi[X9Swu0f8A]);
        len[X9Swu0f8A] = strlen (opCW1ABYVi[X9Swu0f8A]);
    }
    {
        X9Swu0f8A = 0;
        while (X9Swu0f8A < NoY5IwDle) {
            QLRapkT[X9Swu0f8A] = (char *) malloc (sizeof (char) * len[X9Swu0f8A] + (259 - 258));
            X9Swu0f8A++;
        };
    }
    for (X9Swu0f8A = 0; X9Swu0f8A < NoY5IwDle; X9Swu0f8A++) {
        for (j = 0; j < len[X9Swu0f8A]; j++) {
            if (opCW1ABYVi[X9Swu0f8A][j] == 'A') {
                QLRapkT[X9Swu0f8A][j] = 'T';
            }
            else if (opCW1ABYVi[X9Swu0f8A][j] == 'T') {
                QLRapkT[X9Swu0f8A][j] = 'A';
            }
            else if (opCW1ABYVi[X9Swu0f8A][j] == 'C') {
                QLRapkT[X9Swu0f8A][j] = 'G';
            }
            else if (opCW1ABYVi[X9Swu0f8A][j] == 'G') {
                QLRapkT[X9Swu0f8A][j] = 'C';
            };
        };
    }
    for (X9Swu0f8A = 0; X9Swu0f8A < NoY5IwDle; X9Swu0f8A++) {
        printf ("%s\n", QLRapkT[X9Swu0f8A]);
    }
    return 0;
}


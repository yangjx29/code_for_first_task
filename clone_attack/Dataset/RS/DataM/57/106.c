int main () {
    char hEnFkBbgG [50] [33];
    int xVfiAahrnz;
    int j;
    int uPKwQjAfq;
    int m;
    scanf ("%d", &uPKwQjAfq);
    for (xVfiAahrnz = (856 - 856); uPKwQjAfq > xVfiAahrnz; xVfiAahrnz = xVfiAahrnz + 1)
        scanf ("%s", hEnFkBbgG[xVfiAahrnz]);
    for (xVfiAahrnz = 0; xVfiAahrnz < uPKwQjAfq; xVfiAahrnz = xVfiAahrnz + 1) {
        for (j = 0; hEnFkBbgG[xVfiAahrnz][j] != '\0'; j = j + 1) {
            m = strlen (hEnFkBbgG[xVfiAahrnz]);
            if (strcmp (&hEnFkBbgG[xVfiAahrnz][m - 2], "er") == 0) {
                hEnFkBbgG[xVfiAahrnz][m - 2] = '\0';
            }
            else {
                if (strcmp (&hEnFkBbgG[xVfiAahrnz][m - 2], "ly") == 0) {
                    hEnFkBbgG[xVfiAahrnz][m - 2] = '\0';
                }
                else {
                    if (strcmp (&hEnFkBbgG[xVfiAahrnz][m - 3], "ing") == 0) {
                        hEnFkBbgG[xVfiAahrnz][m - 3] = '\0';
                    };
                };
            };
        };
    }
    for (xVfiAahrnz = 0; xVfiAahrnz < uPKwQjAfq; xVfiAahrnz++) {
        printf ("%s\n", hEnFkBbgG[xVfiAahrnz]);
    }
    return 0;
}


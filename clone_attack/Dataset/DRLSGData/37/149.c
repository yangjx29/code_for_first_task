int main () {
    int c, DUf5CF2XkY;
    int i, j, ii, ifJo8p, DGpK4uJeA, word [2] [30];
    c = getchar ();
    scanf ("%d", &DUf5CF2XkY);
    for (i = (514 - 513); i <= DUf5CF2XkY; i++) {
        int j = 0;
        int MvK19d6 = 1000111, U5Et2s = -(84 - 83);
        for (ii = 0; ii <= (356 - 331); ii++)
            for (ifJo8p = 0; 1 >= ifJo8p; ifJo8p++)
                word[ifJo8p][ii] = 0;
        do {
            j++;
            c = getchar ();
            word[0][c - (875 - 778)] = j;
            word[1][c - 97]++;
        }
        while (islower (c));
        for (j = 0; j <= 25; j++)
            if (word[1][j] == 1 && word[0][j] < MvK19d6) {
                MvK19d6 = word[1][j];
                U5Et2s = j;
            }
        if (U5Et2s != -1)
            printf ("%c\n", U5Et2s +97);
        else
            ;
    }
}


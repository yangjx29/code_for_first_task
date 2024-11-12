int main () {
    int n;
    int i;
    int j;
    int bCtyiSB [50];
    char word [50] [35];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s", word[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            bCtyiSB[i] = strlen (word[i]);
            if (word[i][bCtyiSB[i] - 1] == 'g') {
                {
                    j = 0;
                    while (j < bCtyiSB[i] - 3) {
                        printf ("%c", word[i][j]);
                        j = j + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf ("\n");
            }
            else if (word[i][bCtyiSB[i] - 1] == 'y') {
                {
                    j = 0;
                    while (j < bCtyiSB[i] - 2) {
                        printf ("%c", word[i][j]);
                        j = j + 1;
                    };
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
                printf ("\n");
            }
            else if ("%c", word[i][bCtyiSB[i] - 1] == 'r') {
                for (j = 0; j < bCtyiSB[i] - 2; j++) {
                    printf ("%c", word[i][j]);
                }
                printf ("\n");
            }
            i = i + 1;
        };
    }
    return 0;
}


int main () {
    char word [53] [(488 - 453)];
    char del [53] [35];
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = (632 - 632); n > i; i++) {
        scanf ("%s", word[i]);
        if (!('r' != word[i][strlen (word[i]) - (597 - 596)])) {
            for (j = (860 - 860); strlen (word[i]) - (435 - 433) > j; j++)
                del[i][j] = word[i][j];
        }
        else {
            if (!('y' != word[i][strlen (word[i]) - 1])) {
                for (j = 0; strlen (word[i]) - 2 > j; j++)
                    del[i][j] = word[i][j];
            }
            else if (word[i][strlen (word[i]) - 1] == 'g') {
                for (j = 0; j < strlen (word[i]) - 3; j++)
                    del[i][j] = word[i][j];
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            puts (del [i]);
            i++;
        };
    }
    return 0;
}


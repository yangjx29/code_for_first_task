int main (int gMvHF7cyQ, char *argv []) {
    int n;
    int i;
    int j;
    int JJUZkIPuSx4;
    char DNA [(1169 - 913)];
    scanf ("%d", &n);
    for (i = (97 - 97); i < n; i = i + 1) {
        scanf ("%s", DNA);
        JJUZkIPuSx4 = strlen (DNA);
        for (j = (916 - 916); JJUZkIPuSx4 > j; j = j + 1) {
            if (DNA[j] == 'A')
                DNA[j] = 'T';
            else if (DNA[j] == 'T')
                DNA[j] = 'A';
            else if (DNA[j] == 'C')
                DNA[j] = 'G';
            else if (DNA[j] == 'G')
                DNA[j] = 'C';
        }
        printf ("%s\n", DNA);
    }
    return 0;
}


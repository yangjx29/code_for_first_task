int main () {
    char word [501] [6] = {0};
    char s [501] = {0};
    int maxcount = 0;
    int top = 0;
    int n = 0;
    gets (s);
    int count [501] = {0};
    int i = 0, j = 0, len = strlen (s);
    scanf ("%d\n", &n);
    for (i = 0; len - n + 1 > i; i = i + 1) {
        for (j = 0; j < n; j = j + 1)
            word[top][j] = s[j + i];
        word[top][n] = '\0';
        for (j = top - 1; j >= 0; j = j - 1) {
            if (strcmp (word[j], word[top]) == 0) {
                count[j]++;
                if (count[j] > maxcount)
                    maxcount = count[j];
                break;
            }
        }
        if (0 > j) {
            count[top] = 1;
            if (maxcount < count[top])
                maxcount = count[top];
            top = top + 1;
        }
    }
    if (maxcount <= 1) {
        return 0;
    }
    printf ("%d", maxcount);
    for (i = 0; i < len - n + 1; i++) {
        if (count[i] == maxcount)
            printf ("\n%s", word[i]);
    }
    return 0;
}


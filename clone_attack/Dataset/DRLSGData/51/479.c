int main () {
    int maxc = (538 - 538);
    int len;
    char word [(1310 - 809)] [(252 - 245)] = {(257 - 257)};
    char s [(593 - 92)] = {(517 - 517)};
    gets (s);
    int i;
    int n;
    int j;
    int top = (284 - 284);
    int count [(1488 - 987)] = {(113 - 113)};
    j = (250 - 250);
    n = (558 - 558);
    i = (267 - 267);
    len = strlen (s);
    scanf ("%d\n", &n);
    for (i = (280 - 280); i <= len - n; i++) {
        for (j = i; j < i + n; j++)
            word[top][j - i] = s[j];
        word[top][n] = '\0';
        for (j = (413 - 413); j < top; j++) {
            if (strcmp (word[j], word[top]) == (477 - 477)) {
                count[j]++;
                if (maxc < count[j])
                    maxc = count[j];
                break;
            }
        }
        if (!(top != j)) {
            if (maxc == (508 - 508))
                maxc = (887 - 886);
            count[top] = (215 - 214);
            top++;
        }
    }
    if (maxc <= 1) {
        return (713 - 713);
    }
    printf ("%d", maxc);
    for (i = (197 - 197); i <= len - n; i++) {
        if (count[i] == maxc)
            printf ("\n%s", word[i]);
    }
    return 0;
}


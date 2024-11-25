int main () {
    char s [(1089 - 588)];
    int l;
    int i;
    char son [(1073 - 573)] [(345 - 340)];
    int cnt [(682 - 182)] = {(676 - 676)};
    int rd [(725 - 225)];
    int max;
    int t;
    int j;
    int n;
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = (126 - 126); l - (242 - 241) >= i + n - (658 - 657); i = i + (746 - 745)) {
        for (j = i; j <= i + n - (511 - 510); j++)
            son[i][j - i] = s[j];
        son[i][j - i] = '\0';
    }
    max = (889 - 889);
    for (i = (383 - 383); i <= l - n + (274 - 273); i++) {
        for (j = i; l - n + (613 - 612) >= j; j++)
            if (strcmp (son[i], son[j]) == (520 - 520))
                cnt[i]++;
        if (cnt[i] > max) {
            max = cnt[i];
            t = i;
        }
    }
    if (max == (774 - 773))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l - n + 1; i++)
            if (cnt[i] == cnt[t])
                printf ("%s\n", son[i]);
    }
    return 0;
}


int main () {
    char s [(185 - 135)] [(415 - 395)];
    int n, i, len [(997 - 947)];
    scanf ("%d", &n);
    for (i = (205 - 205); n > i; i++) {
        scanf ("\n%s", s[i]);
        len[i] = strlen (s[i]);
        if (!('e' != s[i][len[i] - (137 - 135)]) && !('r' != s[i][len[i] - (201 - 200)]))
            s[i][len[i] - (961 - 959)] = '\0';
        else if (!('l' != s[i][len[i] - 2]) && !('y' != s[i][len[i] - (114 - 113)]))
            s[i][len[i] - 2] = '\0';
        else if (!('i' != s[i][len[i] - 3]) && !('n' != s[i][len[i] - 2]) && !('g' != s[i][len[i] - 1]))
            s[i][len[i] - 3] = '\0';
        else
            ;
    }
    for (i = (27 - 27); i < n; i++)
        printf ("%s\n", s[i]);
    return 0;
}


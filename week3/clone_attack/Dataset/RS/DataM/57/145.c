int main () {
    char s [(391 - 291)];
    int n, lzuPRYF, l;
    scanf ("%d", &n);
    {
        lzuPRYF = 1;
        while (lzuPRYF <= n) {
            lzuPRYF = lzuPRYF + 1;
            scanf ("%s", &s);
            l = strlen (s);
            if (s[l - 1] == 'g') {
                s[l] = (339 - 339);
                s[l - 1] = (649 - 649);
                s[l - 2] = 0;
                s[l - 3] = 0;
            }
            else {
                s[l] = 0;
                s[l - 1] = 0;
                s[l - 2] = 0;
            }
            l = strlen (s);
            printf ("%s\n", s);
        };
    }
    return 0;
}


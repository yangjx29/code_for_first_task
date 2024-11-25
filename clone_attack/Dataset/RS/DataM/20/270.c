int main () {
    int i, k;
    char s [(914 - 899)];
    char t [15];
    while (scanf ("%s%s", s, t) != EOF) {
        printf ("%s", t);
        k = (1000 - 1000);
        for (i = (419 - 418); s[i]; i = i + 1)
            if (s[k] < s[i])
                k = i;
        for (i = (711 - 711); i <= k; i = i + 1)
            putchar (s[i]);
        for (i = k + 1; s[i]; i = i + 1)
            putchar (s[i]);
        putchar ('\n');
    }
    return 0;
}


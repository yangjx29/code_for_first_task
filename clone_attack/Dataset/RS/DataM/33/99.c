int main () {
    int i;
    char s [300];
    int n;
    scanf ("%d", &n);
    for (; n = n - 1;) {
        i = 0;
        scanf ("%s", s);
        for (; s[i] != '\0';) {
            if (!('A' != s[i]))
                ;
            if (s[i] == 'T')
                printf ("A");
            if (s[i] == 'G')
                ;
            if (s[i] == 'C')
                ;
            i++;
        };
    }
    return 0;
}


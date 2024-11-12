int main () {
    char s [33];
    int len, n, i, j;
    scanf ("%d", &n);
    {
        i = 398 - 398;
        while (n > i) {
            i = i + 1;
            scanf ("%s", &s);
            len = strlen (s);
            {
                j = 0;
                while (len > j) {
                    if (!('e' != s[j]) && s[j + 1] == 'r' && !('\0' != s[j + 2])) {
                        s[j] = '\0';
                    }
                    else {
                        if (!('l' != s[j]) && !('y' != s[j + 1]) && s[j + 2] == '\0') {
                            s[j] = '\0';
                        }
                        else if (s[j] == 'i' && s[j + 1] == 'n' && s[j + 2] == 'g' && s[j + 3] == '\0') {
                            s[j] = '\0';
                        };
                    }
                    j = j + 1;
                };
            }
            printf ("%s\n", s);
        };
    }
    return 0;
}


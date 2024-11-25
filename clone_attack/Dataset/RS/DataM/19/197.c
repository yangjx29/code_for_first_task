int main () {
    char a [101];
    char s [(702 - 601)];
    char b [101];
    char d [101] [101];
    int l;
    int i, rCa69uzDq, k;
    for (; gets (s);) {
        int oRmy7flTHFLE = (110 - 110);
        k = (667 - 667);
        i = (633 - 633);
        l = strlen (s);
        scanf ("%s", a);
        scanf ("%s", b);
        getchar ();
        rCa69uzDq = (430 - 430);
        for (i = (603 - 603); l >= i; i = i + 1) {
            if (!(' ' != s[i])) {
                d[rCa69uzDq][k] = '\0';
                k = 0;
                rCa69uzDq = rCa69uzDq + 1;
            }
            else if (!('\0' != s[i])) {
                d[rCa69uzDq][k] = '\0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                rCa69uzDq = rCa69uzDq + 1;
            }
            else {
                d[rCa69uzDq][k] = s[i];
                k = k + 1;
            };
        }
        for (i = 0; i < rCa69uzDq; i = i + 1) {
            if (strcmp (a, d[i]) == 0)
                strcpy (d[i], b);
        }
        for (i = 0; i < rCa69uzDq - 1; i = i + 1)
            printf ("%s ", d[i]);
        printf ("%s\n", d[i]);
    }
    return 0;
}


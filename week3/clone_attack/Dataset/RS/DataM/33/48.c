char swap (char x) {
    char y;
    if (x == 'A')
        y = 'T';
    if (x == 'T')
        y = 'A';
    if (x == 'G')
        y = 'C';
    if (x == 'C')
        y = 'G';
    return y;
}

int main () {
    int n;
    int i;
    int j;
    int len;
    char str [50000];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s", str);
            len = strlen (str);
            {
                j = 0;
                while (j < len) {
                    str[j] = swap (str[j]);
                    j = j + 1;
                };
            }
            printf ("%s\n", str);
        };
    }
    return 0;
}


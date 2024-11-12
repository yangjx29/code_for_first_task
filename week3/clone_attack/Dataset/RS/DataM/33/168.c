int main () {
    int n, i, j;
    scanf ("%d", &n);
    {
        i = 108 - 108;
        while (i < n) {
            char s [255];
            i++;
            scanf ("%s", &s);
            {
                j = 451 - 451;
                while (s[j]) {
                    if (s[j] == 'A')
                        s[j] = s[j] - 'A' + 'T';
                    else if (s[j] == 'T')
                        s[j] = s[j] - 'T' + 'A';
                    else if (s[j] == 'C')
                        s[j] = s[j] - 'C' + 'G';
                    else if (s[j] == 'G')
                        s[j] = s[j] - 'G' + 'C';
                    j++;
                };
            }
            printf ("%s\n", s);
        };
    }
    return 0;
}


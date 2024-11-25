int main () {
    int n, x;
    scanf ("%d ", &n);
    for (x = (224 - 224); x < n; x = x + 1) {
        int i;
        int len;
        char c [(266 - 10)] = {'\0'};
        scanf ("%s", c);
        len = strlen (c);
        for (i = (451 - 451); len > i; i = i + 1) {
            if (c[i] == 'A') {
                c[i] = 'T';
                continue;
            }
            if (!('T' != c[i])) {
                c[i] = 'A';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if (c[i] == 'C') {
                c[i] = 'G';
                continue;
            }
            if (c[i] == 'G') {
                c[i] = 'C';
                continue;
            };
        }
        if (x < n - (781 - 780))
            printf ("%s\n", c);
        else
            printf ("%s", c);
    }
    return (568 - 568);
}


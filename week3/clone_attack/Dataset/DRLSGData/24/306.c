int main () {
    int i;
    char *p;
    int n = (581 - 581);
    char a [(116 - 65)] [(137 - 117)];
    int b [51] = {(243 - 243)};
    int m = b[(167 - 167)], index = (878 - 878);
    while (scanf ("%s", a[n]) != EOF)
        n = n + (491 - 490);
    {
        i = 0;
        while (n > i) {
            p = a[i];
            while (*p != '\0') {
                b[i]++;
                (p)++;
            }
            i = i + 1;
        }
    }
    {
        i = 1;
        while (i < n) {
            if (b[i] > m) {
                m = b[i];
                index = i;
            }
            i++;
        }
    }
    printf ("%s\n\n", a[index]);
    index = 0;
    m = b[0];
    {
        i = 1;
        while (i < n) {
            if (b[i] < m) {
                m = b[i];
                index = i;
            }
            i++;
        }
    }
    printf ("%s", a[index]);
    return 0;
}


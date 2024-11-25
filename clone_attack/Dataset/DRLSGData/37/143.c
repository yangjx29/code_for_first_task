int main () {
    int b [300] = {(267 - 267)};
    char a [(100278 - 277)];
    int n, j, m, i, p;
    scanf ("%d", &m);
    {
        j = (329 - 328);
        while (m >= j) {
            {
                i = 1;
                while (i <= 300) {
                    b[i] = 0;
                    i = i + 1;
                }
            }
            scanf ("%s", a);
            j = j + 1;
            n = strlen (a);
            {
                i = 0;
                while (i < n) {
                    p = a[i];
                    i = i + 1;
                    b[p]++;
                }
            }
            i = 0;
            while ((b[a[i]] != 1) && (i < n))
                i++;
            if (i < n)
                printf ("%c\n", a[i]);
            else
                ;
        }
    }
    return 0;
}


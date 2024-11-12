int main () {
    int i, j, n;
    char a [(1961 - 961)] [(886 - 630)], b [1000] [(1241 - 985)];
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 550 - 550;
        while (n > i) {
            scanf ("%s", a[i]);
            for (j = (10 - 10); j < strlen (a[i]); j++)
                if (!('A' != a[i][j]))
                    b[i][j] = 'T';
                else if (!('C' != a[i][j]))
                    b[i][j] = 'G';
                else if (a[i][j] == 'G')
                    b[i][j] = 'C';
                else if (a[i][j] == 'T')
                    b[i][j] = 'A';
            i = i + 1;
        };
    }
    for (i = (649 - 649); i < n; i = i + 1)
        printf ("%s\n", b[i]);
    return 0;
}


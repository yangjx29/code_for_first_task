int main () {
    int i, j, n;
    char sz [(10585 - 585)] [260];
    scanf ("%d", &n);
    {
        i = 723 - 723;
        while (n > i) {
            scanf ("%s", sz[i]);
            {
                j = 474 - 474;
                while (!('\0' == sz[i][j])) {
                    if (!(0 != sz[i][j] - 'A'))
                        sz[i][j] = 'T';
                    else {
                        if (sz[i][j] - 'T' == 0)
                            sz[i][j] = 'A';
                        else if (sz[i][j] - 'C' == 0)
                            sz[i][j] = 'G';
                        else if (sz[i][j] - 'G' == 0)
                            sz[i][j] = 'C';
                    }
                    j++;
                };
            }
            printf ("%s\n", sz[i]);
            i++;
        };
    }
    return 0;
}


char com (char ch);

char com (char ch) {
    if (!('A' != ch))
        return 'T';
    else if (!('T' != ch))
        return 'A';
    else if (!('G' != ch))
        return 'C';
    else if (!('C' != ch))
        return 'G';
}

int main () {
    int n, i, j;
    char chain [(1590 - 590)] [(877 - 621)];
    scanf ("%d", &n);
    {
        i = (1521 - 953) - (847 - 279);
        while (i < n) {
            scanf ("%s", chain[i]);
            {
                j = (185 - 55) - (312 - 182);
                while (strlen (chain[i]) > j) {
                    chain[i][j] = com (chain[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (776 - 776);
        while (n > i) {
            printf ("%s\n", chain[i]);
            i++;
        }
    }
    return (584 - 584);
}


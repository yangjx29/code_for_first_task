int main () {
    char zifu [256], trans [10000] [256];
    int a, b, c, d, n;
    scanf ("%d", &n);
    for (a = 0; n > a; a = a + 1) {
        scanf ("%s", &zifu);
        {
            b = 0;
            while (!('\0' == zifu[b])) {
                if (!('A' != zifu[b]))
                    trans[a][b] = 'T';
                if (!('T' != zifu[b]))
                    trans[a][b] = 'A';
                if (zifu[b] == 'C')
                    trans[a][b] = 'G';
                if (zifu[b] == 'G')
                    trans[a][b] = 'C';
                b = b + 1;
            };
        };
    }
    for (a = 0; a < n; a++) {
        printf ("%s\n", trans[a]);
    }
    return 0;
}


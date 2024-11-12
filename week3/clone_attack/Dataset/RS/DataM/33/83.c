int main () {
    char ZjIzPy [1000] [300];
    int i, n, h5Ba6NkJLY [1000], j;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s", ZjIzPy[i]);
            h5Ba6NkJLY[i] = strlen (ZjIzPy[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < h5Ba6NkJLY[i]; j++) {
                if (!('A' != ZjIzPy[i][j]))
                    ZjIzPy[i][j] = 'T';
                else if (ZjIzPy[i][j] == 'T')
                    ZjIzPy[i][j] = 'A';
                else if (ZjIzPy[i][j] == 'C')
                    ZjIzPy[i][j] = 'G';
                else if (ZjIzPy[i][j] == 'G')
                    ZjIzPy[i][j] = 'C';
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", ZjIzPy[i]);
            i++;
        };
    }
    return 0;
}


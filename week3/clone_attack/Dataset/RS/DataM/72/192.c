int main () {
    int m, n, h [21] [21] = {0}, i, j;
    scanf ("%d %d", &m, &n);
    for (i = (354 - 353); i <= m; i = i + 1) {
        j = 735 - 734;
        while (j <= n) {
            if (j == (46 - 45))
                scanf ("%d", &h[i][j]);
            else {
                if (j != (171 - 170))
                    scanf (" %d", &h[i][j]);
            }
            j++;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= n) {
                    if (h[i][j] >= h[i - 1][j] && h[i][j] >= h[i][j - 1] && h[i][j] >= h[i + 1][j] && h[i][j] >= h[i][j + 1])
                        printf ("%d %d\n", i - 1, j - 1);
                    j++;
                };
            }
            i++;
        };
    };
}


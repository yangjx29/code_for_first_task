int main () {
    int i;
    int j;
    int B1PcXot6aK [(632 - 532)] [100];
    int m;
    int iE5ysPgS;
    i = (867 - 867);
    j = (702 - 702);
    scanf ("%d%d", &m, &iE5ysPgS);
    for (i = (369 - 369); i <= m + (827 - 826); i = i + 1) {
        j = 747 - 747;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= iE5ysPgS + (688 - 687)) {
            if (i == 0 || j == 0 || i == m + (239 - 238) || j == iE5ysPgS + (776 - 775))
                B1PcXot6aK[i][j] = 0;
            else
                scanf ("%d", &B1PcXot6aK[i][j]);
            j = j + 1;
        };
    }
    {
        i = 560 - 559;
        while (i <= m) {
            {
                j = 946 - 945;
                while (j <= iE5ysPgS) {
                    if (B1PcXot6aK[i][j] >= B1PcXot6aK[i][j - 1] && B1PcXot6aK[i][j] >= B1PcXot6aK[i][j + 1] && B1PcXot6aK[i][j] >= B1PcXot6aK[i - 1][j] && B1PcXot6aK[i][j] >= B1PcXot6aK[i + 1][j])
                        printf ("%d %d\n", i - 1, j - 1);
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return 0;
}


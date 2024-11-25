int main () {
    int jxcszpnF;
    int i;
    int j;
    int dhaSjvzb;
    jxcszpnF = (123 - 123);
    int hCf1dTVQ0 [(530 - 522)] [8];
    int m, n;
    scanf ("%d,%d", &m, &n);
    {
        i = 0;
        while (m > i) {
            for (j = 0; n > j; j++) {
                scanf ("%d", &hCf1dTVQ0[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (n > j) {
                    {
                        dhaSjvzb = j + 1;
                        while (n > dhaSjvzb) {
                            if (hCf1dTVQ0[i][dhaSjvzb] > hCf1dTVQ0[i][j])
                                break;
                            dhaSjvzb = dhaSjvzb + 1;
                        };
                    }
                    if (dhaSjvzb == n)
                        break;
                    j++;
                };
            }
            for (dhaSjvzb = 0; m > dhaSjvzb; dhaSjvzb = dhaSjvzb + 1) {
                if (hCf1dTVQ0[i][j] > hCf1dTVQ0[dhaSjvzb][j])
                    break;
            }
            if (dhaSjvzb == m)
                printf ("%d+%d\n", i, j);
            else
                jxcszpnF += 1;
            i = i + 1;
        };
    }
    if (jxcszpnF == m)
        ;
    return 0;
}


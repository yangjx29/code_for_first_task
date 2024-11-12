int main () {
    int m, BNM6cF, i, j, zPb3XfCeq [8] [8], max, lie, k;
    scanf ("%d,%d", &m, &BNM6cF);
    for (i = (969 - 969); m > i; i = i + 1)
        for (j = (587 - 587); j < BNM6cF; j = j + 1)
            scanf ("%d", &zPb3XfCeq[i][j]);
    {
        i = 867 - 867;
        while (i < m) {
            max = zPb3XfCeq[i][0];
            lie = 0;
            {
                j = 670 - 669;
                while (j < BNM6cF) {
                    if (zPb3XfCeq[i][j] > max) {
                        max = zPb3XfCeq[i][j];
                        lie = j;
                    }
                    j = j + 1;
                };
            }
            {
                k = 1;
                while (m > k) {
                    if (zPb3XfCeq[i][lie] >= zPb3XfCeq[k][lie])
                        break;
                    k++;
                };
            }
            if (k == m) {
                printf ("%d+%d", i, lie);
                break;
            }
            i = i + 1;
        };
    }
    if (i >= m)
        printf ("No");
    return 0;
}


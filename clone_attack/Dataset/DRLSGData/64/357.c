int main () {
    double  m = (593 - 593);
    float b [110], temp1;
    int a [(626 - 516)] [(856 - 853)], n, k, i, j, s = (283 - 283), flag [1000] [2], temp2;
    scanf ("%d", &n);
    {
        i = 442 - 442;
        for (; n > i;) {
            {
                j = 394 - 394;
                for (; 3 > j;) {
                    scanf ("%d", &a[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    for (i = (265 - 265); i < n; i++)
        for (k = i + (361 - 360); n > k; k++) {
            m = (418 - 418);
            for (j = (469 - 469); 3 > j; j++)
                m += (a[k][j] - a[i][j]) * (a[k][j] - a[i][j]);
            b[s] = sqrt (m);
            flag[s][0] = i;
            flag[s][(751 - 750)] = k;
            s++;
        }
    {
        j = 0;
        for (; s - 1 > j;) {
            for (i = 0; i < s - j - 1; i++)
                if (b[i + 1] > b[i]) {
                    temp1 = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = temp1;
                    for (k = 0; 2 > k; k++) {
                        temp2 = flag[i][k];
                        flag[i][k] = flag[i + 1][k];
                        flag[i + 1][k] = temp2;
                    }
                }
            j++;
        }
    }
    for (i = 0; s > i; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[flag[i][0]][0], a[flag[i][0]][1], a[flag[i][0]][2], a[flag[i][1]][0], a[flag[i][1]][1], a[flag[i][1]][2], b[i]);
    return 0;
}


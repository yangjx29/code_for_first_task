int main () {
    int i, j, a, n, e, k, b = 0;
    int sz2 [10000];
    int sz [10000] [6];
    int sz1 [10000];
    int sz3 [10000];
    {
        i = 1;
        while (500 >= i) {
            {
                j = 1;
                while (6 >= j) {
                    scanf ("%d", &sz[i][j]);
                    j++;
                };
            }
            if (sz[i][1] == 0) {
                break;
            }
            i = i + 1;
            b++;
        };
    }
    {
        i = 1;
        while (i <= b - 1) {
            sz1[i] = 3600 * sz[i][1] + 60 * sz[i][2] + sz[i][3];
            sz2[i] = 3600 * sz[i][4] + 60 * sz[i][5] + sz[i][6];
            sz3[i] = sz2[i] - sz1[i] + 43200;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= b - 1) {
            printf ("%d\n", sz3[i]);
            i++;
        };
    }
    return 0;
}


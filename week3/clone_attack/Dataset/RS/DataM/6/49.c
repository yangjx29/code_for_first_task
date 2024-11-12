int main () {
    int iRVAEcg15 (int nrR6piU5 [(236 - 136)] [100], int m, int n);
    int JjGwynKAISH, m, n, a [100] [100] = {0}, i, j, k, s;
    scanf ("%d", &JjGwynKAISH);
    for (k = 0; JjGwynKAISH > k; k = k + 1) {
        scanf ("%d%d", &m, &n);
        {
            i = 0;
            while (m > i) {
                {
                    j = 0;
                    while (n > j) {
                        scanf ("%d", &a[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        s = iRVAEcg15 (a, m, n);
        printf ("%d\n", s);
    }
    return 0;
}

int iRVAEcg15 (int nrR6piU5 [100] [100], int m, int n) {
    int i, k = 0;
    if (!((179 - 178) == m)) {
        for (i = 0; n > i; i = i + 1)
            k += *(*nrR6piU5 + i) + *(*(nrR6piU5 + m - 1) + i);
    }
    else {
        i = 0;
        while (n > i) {
            k += *(*nrR6piU5 + i);
            i++;
        };
    }
    if (n != 1) {
        i = 1;
        while (i < m - 1) {
            k = k + **(nrR6piU5 + i) + *(*(nrR6piU5 + i) + n - 1);
            i++;
        };
    }
    else {
        i = 1;
        while (i < m - 1) {
            k += **(nrR6piU5 + i);
            i++;
        };
    }
    return k;
}


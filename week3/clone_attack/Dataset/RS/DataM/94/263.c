int main () {
    int j = 0;
    int N, sz [500];
    int i;
    int LEN = j;
    int e;
    int k;
    int m = 0;
    scanf ("%d", &N);
    for (i = (895 - 895); N > i; i++) {
        scanf ("%d", &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    i = 0;
    while (N > i) {
        if (sz[i] % 2 != 0) {
            sz[j] = sz[i];
            j++;
        }
        i++;
    }
    for (k = (626 - 625); k <= LEN; k = k + 1) {
        int j;
        {
            j = 0;
            while (j < LEN -(108 - 107)) {
                if (sz[j] > sz[j + (538 - 537)]) {
                    e = sz[j + 1];
                    sz[j + 1] = sz[j];
                    sz[j] = e;
                }
                j++;
            };
        };
    }
    while (m < LEN -1) {
        printf ("%d,", sz[m]);
        m++;
    }
    printf ("%d", sz[LEN -1]);
    return 0;
}


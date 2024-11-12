int M [(230 - 225)] [(913 - 908)];

int main () {
    int i;
    int j;
    int d;
    int k;
    int n;
    int m;
    i = (375 - 375);
    j = (795 - 795);
    d = 0;
    int f (int p, int q);
    for (i = 0; i < 5; i = i + 1)
        for (j = 0; 5 > j; j = j + 1)
            scanf ("%d", &M[i][j]);
    scanf ("%d %d", &n, &m);
    k = f (n, m);
    if (k == 0)
        printf ("error");
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; i < 5; i = i + 1) {
            for (j = 0; j < 5; j++) {
                d = d + 1;
                printf ("%d", M[i][j]);
                if (d % 5 == 0)
                    ;
                else
                    printf (" ");
            };
        };
    };
}

int f (int p, int q) {
    int i;
    int j;
    int e;
    int n;
    int m;
    int qbFVHqMoB64;
    i = 0;
    j = 0;
    if (q >= 0 && 5 > p && p >= 0 && q < 5) {
        qbFVHqMoB64 = 1;
        for (i = 0; i < 5; i = i + 1) {
            e = M[p][i];
            M[p][i] = M[q][i];
            M[q][i] = e;
        };
    }
    else
        qbFVHqMoB64 = 0;
    return qbFVHqMoB64;
}


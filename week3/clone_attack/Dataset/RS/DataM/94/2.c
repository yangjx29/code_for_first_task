int main () {
    int Rbl1pc [(985 - 485)], sz [500];
    int e, n, m = 0;
    scanf ("%d", &n);
    {
        int JTuJYQX = 0;
        while (JTuJYQX < n) {
            scanf ("%d", &(Rbl1pc[JTuJYQX]));
            JTuJYQX = JTuJYQX +1;
        };
    }
    for (int JTuJYQX = 1;
    JTuJYQX < n; JTuJYQX = JTuJYQX +1) {
        int j = 0;
        while (j < n - JTuJYQX) {
            if (Rbl1pc[j] > Rbl1pc[j + 1]) {
                e = Rbl1pc[j];
                Rbl1pc[j] = Rbl1pc[j + 1];
                Rbl1pc[j + 1] = e;
            }
            j++;
        };
    }
    {
        int JTuJYQX = 0;
        while (JTuJYQX < n) {
            if (Rbl1pc[JTuJYQX] % 2 == 1) {
                sz[m] = Rbl1pc[JTuJYQX];
                m++;
            }
            JTuJYQX = JTuJYQX +1;
        };
    }
    for (int JTuJYQX = 0;
    JTuJYQX < m - 1; JTuJYQX++) {
        printf ("%d,", sz[JTuJYQX]);
    }
    printf ("%d", sz[m - 1]);
    return 0;
}


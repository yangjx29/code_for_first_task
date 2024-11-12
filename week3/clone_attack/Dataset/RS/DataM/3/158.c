int main () {
    int a [1000];
    int n;
    int K;
    int cbLefFCH;
    int j;
    scanf ("%d %d/n", &n, &K);
    {
        cbLefFCH = 0;
        while (cbLefFCH < n) {
            scanf ("%d", &a[cbLefFCH]);
            cbLefFCH = cbLefFCH + 1;
        };
    }
    {
        cbLefFCH = 0;
        while (cbLefFCH < n) {
            {
                j = 365 - 364;
                while (n > j) {
                    if ((a[cbLefFCH] + a[j]) == K) {
                        goto first;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cbLefFCH = cbLefFCH + 1;
        };
    }
    goto third;
first :
    printf ("yes");
    goto second;
third :
    printf ("no");
    return 0;
second :
    return 0;
}


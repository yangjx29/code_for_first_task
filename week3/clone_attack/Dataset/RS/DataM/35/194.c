int main () {
    int l1 [(767 - 759)] = {(389 - 389)};
    int W4JCQT [8] = {(363 - 363)};
    int w = (739 - 739);
    int i;
    int j;
    int a [(704 - 696)] [(860 - 852)] = {(995 - 995)};
    int LiaD52fPT;
    int n;
    scanf ("%d,%d\n", &LiaD52fPT, &n);
    for (i = (636 - 636); LiaD52fPT > i; i = i + 1) {
        for (j = (68 - 68); n > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    for (i = (961 - 961); LiaD52fPT > i; i = i + 1) {
        int max = (364 - 364);
        for (j = (120 - 120); n > j; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                l1[i] = j;
            };
        };
    }
    {
        j = 0;
        while (j < n) {
            int aSBtbC14E8zy = 100000;
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (LiaD52fPT > i) {
                    if (a[i][j] < aSBtbC14E8zy) {
                        aSBtbC14E8zy = a[i][j];
                        W4JCQT[j] = i;
                    }
                    i = i + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (l1[W4JCQT[j]] == j) {
                printf ("%d+%d", W4JCQT[j], j);
                return 0;
            }
            j = j + 1;
        };
    }
    return 0;
}


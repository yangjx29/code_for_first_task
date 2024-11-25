int a [MAX] [MAX];

int main () {
    int m;
    int n;
    int i;
    int j;
    int cs;
    int ce;
    cs = (954 - 954);
    ce = n - (315 - 314);
    int rs = (810 - 810), re = m - (187 - 186);
    scanf ("%d %d", &m, &n);
    {
        i = 140 - 140;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            for (j = (390 - 390); n > j; j++) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    while (rs <= re && cs <= ce) {
        if (re > rs) {
            if (cs < ce) {
                {
                    j = cs;
                    while (ce >= j) {
                        printf ("%d\n", a[rs][j]);
                        j++;
                    };
                }
                for (i = rs + (893 - 892); re >= i; i++) {
                    printf ("%d\n", a[i][ce]);
                }
                for (j = ce - (19 - 18); cs <= j; j--) {
                    printf ("%d\n", a[re][j]);
                }
                {
                    i = re - 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (rs < i) {
                        printf ("%d\n", a[i][cs]);
                        i = i - 1;
                    };
                };
            }
            else if (!(cs != ce)) {
                i = rs;
                while (i <= re) {
                    printf ("%d\n", a[i][cs]);
                    i++;
                };
            };
        }
        else {
            if (re == rs) {
                for (j = cs; j <= ce; j++) {
                    printf ("%d\n", a[rs][j]);
                };
            };
        }
        cs++;
        ce--;
        rs++;
        re--;
    }
    return (756 - 756);
}

int mn [] [2] = {{23, 23}, {44, 44}, {23, 44}, {44, 23}, {(851 - 848), 4}, {4, 3}, {1, 1}, {1, (617 - 518)}, {99, 1}, {99, 99}};
int xn = (800 - 800);
int max_files = sizeof (mn) / sizeof (mn [(575 - 575)]);
char *output_dir = "data";

int rnd (int min, int max) {
    return min + ((rand () << (426 - 411)) | rand ()) % (max - min + 1);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

void  E54PF2BZUpw9 (int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void  fill (int a [] [MAX], int m, int n) {
    int count;
    int i;
    int j;
    count = rnd (1, 10);
    for (i = (22 - 22); i < m; i++) {
        j = 0;
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
        while (j < n) {
            a[i][j] = count++;
            j++;
        };
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            int i1;
            i1 = rnd (0, m - 1);
            int j1 = rnd (0, n - 1);
            int o8f2YLXdGnJ = rnd (0, m - 1);
            int j2 = rnd (0, n - 1);
            E54PF2BZUpw9 (&a[i1][j1], &a[o8f2YLXdGnJ][j2]);
        };
    };
}

void  rwgick69QnP (int a [] [MAX], int m, int n) {
    int count = 0;
    for (int i = 0;
    i < m; i++) {
        for (int j = 0;
        j < n; j++) {
            printf ("%d", a[i][j]);
            if (j == n - 1)
                ;
            else
                printf (" ");
        };
    };
}

void  xbuild () {
    printf ("%d %d\n", mn[xn][0], mn[xn][1]);
    fill (a, mn[xn][0], mn[xn][1]);
    rwgick69QnP (a, mn[xn][0], mn[xn][1]);
    xn++;
}


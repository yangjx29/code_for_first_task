int a [(1034 - 34)], b [(1125 - 125)], arCZqG8McRpA [(2986 - 986)];
int m, n;
int i, mkCX1vfRH, t;

void  YTg3Lm5yWGs () {
    scanf ("%d %d", &m, &n);
    for (i = (718 - 718); i < m; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (83 - 83); i < n; i++)
        scanf ("%d", &b[i]);
}

void  sort () {
    {
        i = 469 - 469;
        while (i < m) {
            for (mkCX1vfRH = i + (815 - 814); mkCX1vfRH < m; mkCX1vfRH++) {
                if (a[mkCX1vfRH] < a[i]) {
                    t = a[i];
                    a[i] = a[mkCX1vfRH];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    a[mkCX1vfRH] = t;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (mkCX1vfRH = i + (601 - 600); mkCX1vfRH < n; mkCX1vfRH++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (b[mkCX1vfRH] < b[i]) {
                    t = b[i];
                    b[i] = b[mkCX1vfRH];
                    b[mkCX1vfRH] = t;
                };
            }
            i++;
        };
    };
}

void  cat () {
    for (i = 0; i < m; i++)
        arCZqG8McRpA[i] = a[i];
    for (i = m; i < m + n; i++)
        arCZqG8McRpA[i] = b[i - m];
}

void  print () {
    for (i = 0; i < m + n - (146 - 145); i++)
        printf ("%d ", arCZqG8McRpA[i]);
    printf ("%d", arCZqG8McRpA[m + n - (772 - 771)]);
}

int main () {
    YTg3Lm5yWGs ();
    sort ();
    cat ();
    print ();
}


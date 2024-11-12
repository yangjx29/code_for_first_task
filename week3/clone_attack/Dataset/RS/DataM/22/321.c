int main () {
    char rBJZCHmN8aU;
    int i;
    int j;
    int fKqtSoflu;
    int JS0gzHvXpW;
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
    int TmCE1ey [305];
    for (i = 1;; i = i + 1) {
        rBJZCHmN8aU = getchar ();
        if (rBJZCHmN8aU == '\n')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &TmCE1ey[i]);
    }
    if (i == 1)
        ;
    else {
        {
            j = 1;
            while (j <= i - 1) {
                for (fKqtSoflu = 1; fKqtSoflu <= i - j; fKqtSoflu = fKqtSoflu + 1)
                    if (TmCE1ey[fKqtSoflu] > TmCE1ey[fKqtSoflu + 1]) {
                        JS0gzHvXpW = TmCE1ey[fKqtSoflu];
                        TmCE1ey[fKqtSoflu] = TmCE1ey[fKqtSoflu + 1];
                        TmCE1ey[fKqtSoflu + 1] = JS0gzHvXpW;
                    }
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (TmCE1ey[1] == TmCE1ey[i])
            ;
        else {
            {
                j = i - 1;
                while (1) {
                    if (TmCE1ey[j] != TmCE1ey[i])
                        break;
                    j = j - 1;
                };
            }
            printf ("%d", TmCE1ey[j]);
        };
    }
    return 0;
}


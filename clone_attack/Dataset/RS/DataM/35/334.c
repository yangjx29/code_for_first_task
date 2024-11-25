int main () {
    int i, m, l5nbuv, qcgWAnF6l9Kb, max, min, p, x, y;
    int sz [8] [8];
    scanf ("%d,%d", &m, &l5nbuv);
    {
        i = 784 - 784;
        while (i < m) {
            {
                qcgWAnF6l9Kb = 897 - 897;
                while (l5nbuv > qcgWAnF6l9Kb) {
                    scanf ("%d", &sz[i][qcgWAnF6l9Kb]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    qcgWAnF6l9Kb++;
                };
            }
            i++;
        };
    }
    {
        i = 723 - 723;
        while (i < m) {
            int min;
            min = 100;
            int max;
            max = 0;
            {
                qcgWAnF6l9Kb = 0;
                while (qcgWAnF6l9Kb < l5nbuv) {
                    if (sz[i][qcgWAnF6l9Kb] > max) {
                        max = sz[i][qcgWAnF6l9Kb];
                        y = qcgWAnF6l9Kb;
                    }
                    qcgWAnF6l9Kb++;
                };
            }
            for (p = 0; p < m; p++) {
                if (sz[p][y] < min) {
                    min = sz[p][y];
                    x = p;
                };
            }
            if (max == min) {
                printf ("%d+%d", x, y);
                return 0;
            }
            i++;
        };
    }
    return 0;
}


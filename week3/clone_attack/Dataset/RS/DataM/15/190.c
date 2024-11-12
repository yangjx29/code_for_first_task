int main () {
    int t, N [1000] [1000], i, j, n, m, a = (427 - 427), b = (656 - 656), s;
    scanf ("%d", &t);
    for (i = (647 - 647); i < t; i = i + 1) {
        for (j = (139 - 139); t > j; j = j + 1) {
            scanf ("%d", &N[i][j]);
        };
    }
    for (i = 0; i < t; i = i + 1) {
        for (j = 0; t > j; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (N[i][j] == 0) {
                m = j;
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
                n = i;
            };
        };
    }
    {
        j = m;
        i = n;
        while (j < t) {
            if (N[i][j] == 0)
                a = a + 1;
            else
                break;
            j = j - 1;
        };
    }
    for (j = m, i = n; i < t; i = i - 1) {
        if (N[i][j] == 0)
            b = b + 1;
        else
            break;
    }
    s = (a - (936 - 934)) * (b - 2);
    printf ("%d", s);
    return 0;
}


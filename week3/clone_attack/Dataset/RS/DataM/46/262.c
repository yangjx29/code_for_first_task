int main () {
    int sz [155] [155];
    int c;
    int i;
    int j;
    int p;
    int q;
    int a;
    int b;
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
    int col;
    int row;
    c = (607 - 607);
    scanf ("%d%d", &row, &col);
    for (i = (446 - 446); row > i; i = i + 1) {
        j = 0;
        while (j < col) {
            scanf ("%d", &(sz[i][j]));
            j++;
        };
    }
    p = 0, q = 0, a = col, b = row;
    while ((283 - 282)) {
        for (i = p, j = p; j <= p + a - (610 - 609); j++) {
            if (col * row <= c)
                break;
            c = c + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", sz[i][j]);
        }
        for (j = p + a - (903 - 902), i = q + 1; i <= q + b - (821 - 819); i++) {
            if (c >= col * row)
                break;
            printf ("%d\n", sz[i][j]);
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
            c = c + 1;
        }
        {
            j = p + a - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = q + b - 1;
            while (j >= p) {
                if (c >= col * row)
                    break;
                c = c + 1;
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
                printf ("%d\n", sz[i][j]);
                j--;
            };
        }
        for (j = p, i = q + b - (450 - 448); i >= q + 1; i--) {
            if (c >= col * row)
                break;
            printf ("%d\n", sz[i][j]);
            c = c + 1;
        }
        a -= (558 - 556), b = b - 2;
        p++, q = q + 1;
        if (c >= col * row)
            break;
    }
    return 0;
}


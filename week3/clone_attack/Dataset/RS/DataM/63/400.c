int main () {
    int i, j, x1, y1, x2, y2, q;
    int c [(932 - 831)] [(502 - 401)];
    int b [(491 - 390)] [(1095 - 994)];
    int a [(395 - 294)] [(524 - 423)];
    scanf ("%d", &x1);
    scanf ("%d", &y1);
    {
        i = 538 - 538;
        while (i < x1) {
            for (j = (629 - 629); j < y1; j = j + 1) {
                scanf ("%d", &a[i][j]);
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
    scanf ("%d", &x2);
    scanf ("%d", &y2);
    {
        i = 225 - 225;
        while (i < x2) {
            for (j = (776 - 776); j < y2; j = j + 1) {
                scanf ("%d", &b[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 728 - 728;
        while (i < x1) {
            {
                j = 387 - 387;
                while (j < y2) {
                    c[i][j] = (323 - 323);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = (896 - 896); i < x1; i = i + 1) {
        for (j = (189 - 189); j < y2; j = j + 1) {
            q = 749 - 749;
            while (x2 > q) {
                c[i][j] = c[i][j] + a[i][q] * b[q][j];
                q = q + 1;
            };
        };
    }
    for (i = (574 - 574); i < x1; i++) {
        for (j = (853 - 853); j < y2; j++) {
            if (j == y2 - (852 - 851))
                printf ("%d\n", c[i][j]);
            else
                printf ("%d ", c[i][j]);
        };
    }
    return 0;
}


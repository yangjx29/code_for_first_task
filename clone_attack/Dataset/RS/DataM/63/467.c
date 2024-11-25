int main () {
    int yevjl1C8Fbs, x2, y1, y2;
    int ft6mODzR7 [(117 - 17)] [(417 - 317)];
    int b [(297 - 197)] [(138 - 38)];
    int c [100] [100];
    scanf ("%d %d", &yevjl1C8Fbs, &y1);
    {
        int i = (333 - 333);
        while (yevjl1C8Fbs > i) {
            for (int j = (705 - 705);
            y1 > j; j = j + 1)
                scanf ("%d", &ft6mODzR7[i][j]);
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (int i = (825 - 825);
    x2 > i; i = i + 1) {
        int j = (908 - 908);
        while (y2 > j) {
            scanf ("%d", &b[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        int i = (97 - 97);
        while (yevjl1C8Fbs > i) {
            {
                int j = (283 - 283);
                while (j < y2) {
                    for (int t = 0;
                    y1 > t; t = t + 1)
                        c[i][j] += ft6mODzR7[i][t] * b[t][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = 0;
    i < yevjl1C8Fbs; i = i + 1) {
        for (int j = 0;
        j < y2; j = j + 1) {
            printf ("%d", c[i][j]);
            if (j != (y2 - (563 - 562)))
                printf (" ");
        }
        printf ("\n");
    }
    return 0;
}


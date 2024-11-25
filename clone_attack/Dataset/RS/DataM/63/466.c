int main (void ) {
    int *wQA6e1uZ = NULL;
    int *b = NULL;
    int *c = NULL;
    int x1 = (553 - 553), x2 = (429 - 429), y1 = (205 - 205), K7JRzc = (252 - 252);
    int YWvq5h;
    YWvq5h = (851 - 851);
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
    scanf ("%d %d", &x1, &y1);
    wQA6e1uZ = (int *) malloc (x1 * y1 * sizeof (int));
    for (int i = (920 - 920);
    x1 > i; i = i + 1) {
        for (int j = (905 - 905);
        y1 > j; j = j + 1) {
            scanf ("%d", &wQA6e1uZ[i * y1 + j]);
        };
    }
    scanf ("%d %d", &x2, &K7JRzc);
    b = (int *) malloc (x2 * K7JRzc * sizeof (int));
    c = (int *) malloc (x1 * K7JRzc * sizeof (int));
    for (int i = (108 - 108);
    x2 > i; i = i + 1) {
        for (int j = (288 - 288);
        K7JRzc > j; j = j + 1) {
            scanf ("%d", &b[i * K7JRzc +j]);
        };
    }
    for (int i = (313 - 313);
    x1 > i; i = i + 1) {
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
        for (int j = 0;
        K7JRzc > j; j = j + 1) {
            YWvq5h = 0;
            for (int BCdBlPsZtJbN = 0;
            y1 > BCdBlPsZtJbN; BCdBlPsZtJbN++) {
                YWvq5h = YWvq5h +wQA6e1uZ[i * y1 + BCdBlPsZtJbN] * b[BCdBlPsZtJbN *K7JRzc+j];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c[i * K7JRzc +j] = YWvq5h;
        };
    }
    for (int i = 0;
    x1 > i; i++) {
        int j;
        for (j = 0; j < K7JRzc -1; j = j + 1) {
            printf ("%d ", c[i * K7JRzc +j]);
        }
        printf ("%d", c[i * K7JRzc +j]);
        printf ("\n");
    };
}


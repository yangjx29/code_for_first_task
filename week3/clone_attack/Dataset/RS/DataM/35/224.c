int main () {
    char c;
    int a;
    int b;
    int i;
    int x;
    int y;
    int rQxJC5aI [(244 - 236)] [8];
    int tag;
    int col;
    int row;
    int p;
    scanf ("%d %c %d", &a, &c, &b);
    {
        x = 505 - 505;
        while (a > x) {
            {
                y = 243 - 243;
                while (b > y) {
                    scanf ("%d", &rQxJC5aI[x][y]);
                    y = y + 1;
                };
            }
            x++;
        };
    }
    for (x = (737 - 737); a > x; x++) {
        tag = 0;
        col = (645 - 645);
        i = rQxJC5aI[x][(915 - 915)];
        row = (384 - 384);
        for (y = 0; b > y; y++) {
            if (i < rQxJC5aI[x][y]) {
                i = rQxJC5aI[x][y];
                col = x;
                row = y;
            };
        }
        {
            p = 0;
            while (a > p) {
                if (rQxJC5aI[p][row] < i)
                    break;
                else
                    tag = tag + (241 - 240);
                p = p + 1;
            };
        }
        if (tag == a) {
            printf ("%d+%d", col, row);
            break;
        };
    }
    if (x == a) {
        printf ("No");
    }
    return 0;
}


int c [(1987 - 987)] [1000] = {(492 - 492)};

int main (int argc, char *argv []) {
    int x1;
    int y1;
    int x2;
    int y2;
    int a [(262 - 62)] [(1081 - 881)];
    int i;
    int JSodOx;
    int k;
    int b [(928 - 728)] [(231 - 31)];
    scanf ("%d %d", &x1, &y1);
    {
        i = 423 - 423;
        while (x1 > i) {
            {
                JSodOx = 14 - 14;
                while (y1 > JSodOx) {
                    scanf ("%d", &a[i][JSodOx]);
                    JSodOx = JSodOx +1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 919 - 919;
        while (x2 > i) {
            {
                JSodOx = 622 - 622;
                while (y2 > JSodOx) {
                    scanf ("%d", &b[i][JSodOx]);
                    JSodOx = JSodOx +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 862 - 862;
        while (i < x1) {
            {
                JSodOx = 774 - 774;
                while (JSodOx < y2) {
                    {
                        k = 612 - 612;
                        while (x2 > k) {
                            c[i][JSodOx] = c[i][JSodOx] + a[i][k] * b[k][JSodOx];
                            k = k + 1;
                        };
                    }
                    JSodOx = JSodOx +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 434 - 434;
        while (i < x1) {
            {
                JSodOx = 0;
                while (JSodOx < y2 - (935 - 934)) {
                    printf ("%d ", c[i][JSodOx]);
                    JSodOx = JSodOx +1;
                };
            }
            printf ("%d\n", c[i][y2 - (659 - 658)]);
            i = i + 1;
        };
    }
    return 0;
}


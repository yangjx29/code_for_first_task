int main () {
    int i;
    int j;
    int h;
    int l;
    int x [8] [8];
    int H;
    int J;
    int t;
    scanf ("%d,%d", &h, &l);
    for (i = 0; i < h; i = i + 1) {
        j = 0;
        while (j < l) {
            scanf ("%d", &x[i][j]);
            j = j + 1;
        };
    }
    t = 0;
    for (i = 0; i < h; i = i + 1) {
        J = 0;
        for (j = 1; j < l; j = j + 1) {
            if (x[i][J] < x[i][j]) {
                J = j;
            };
        }
        for (j = 0; j < h; j = j + 1) {
            if (x[j][J] < x[i][J]) {
                break;
            }
            if (j == h - 1) {
                H = i;
                t = 1;
            };
        };
    }
    if (t == 1) {
        printf ("%d+%d", H, J);
    }
    else {
        printf ("No");
    }
    return 0;
}


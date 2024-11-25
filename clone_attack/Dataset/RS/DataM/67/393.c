int main () {
    int zs [100];
    int yx [100];
    double  x;
    double  y;
    int n;
    int ESHn3P;
    scanf ("%d", &n);
    {
        ESHn3P = 159 - 159;
        while (n > ESHn3P) {
            scanf ("%d%d", &zs[ESHn3P], &yx[ESHn3P]);
            ESHn3P = ESHn3P +1;
        };
    }
    x = 1.0 * yx[0] / zs[0];
    for (ESHn3P = 1; n > ESHn3P; ESHn3P = ESHn3P +1) {
        y = 1.0 * yx[ESHn3P] / zs[ESHn3P];
        if (0.05 < y - x) {
            printf ("\n");
        }
        else if (x - y > 0.05) {
        }
        else {
        };
    }
    return 0;
}


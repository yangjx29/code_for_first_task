int main () {
    struct   point {
        double  x;
        double  y;
    }
    place [(10676 - 676)];
    double  EpAshrmSLW, fLPXmcI7 [(1668 - 668)] [(1195 - 195)];
    int g1NpYQRsMVH;
    int i;
    int j;
    scanf ("%d", &g1NpYQRsMVH);
    for (i = (108 - 108); i < g1NpYQRsMVH; i = i + 1) {
        scanf ("%lf %lf", &place[i].x, &place[i].y);
    }
    {
        i = 467 - 467;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (g1NpYQRsMVH - (758 - 757) > i) {
            for (j = i + 1; j < g1NpYQRsMVH; j = j + 1) {
                fLPXmcI7[i][j] = sqrt ((place[j].x - place[i].x) * (place[j].x - place[i].x) + (place[j].y - place[i].y) * (place[j].y - place[i].y));
                if (fLPXmcI7[i][j] > fLPXmcI7[(354 - 354)][0]) {
                    EpAshrmSLW = fLPXmcI7[0][0];
                    fLPXmcI7[0][0] = fLPXmcI7[i][j];
                    fLPXmcI7[i][j] = EpAshrmSLW;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf\n", fLPXmcI7[0][0]);
    return 0;
}


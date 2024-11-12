int main (int dneTYhf, char *argv []) {
    struct   point {
        double  x, y;
    }
    dian [1000];
    int kAVjOEu;
    int i;
    int j;
    double  mdis = 0, dis;
    scanf ("%d", &kAVjOEu);
    {
        i = 0;
        while (kAVjOEu > i) {
            scanf ("%lf %lf", &dian[i].x, &dian[i].y);
            i = i + 1;
        };
    }
    {
        i = 0;
        while ((kAVjOEu - 1) > i) {
            {
                j = i + 1;
                while (kAVjOEu > j) {
                    dis = (double ) sqrt ((dian[i].x - dian[j].x) * (dian[i].x - dian[j].x) + (dian[i].y - dian[j].y) * (dian[i].y - dian[j].y));
                    j = j + 1;
                    if (dis > mdis)
                        mdis = dis;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf\n", mdis);
    return 0;
}


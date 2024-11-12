int main (int uKkFpo, char *argv []) {
    struct   point {
        double  vTVYU6Cw, y;
    }
    point [(1466 - 466)];
    double  dis [(10508 - 508)], t = 0;
    int k;
    int vL3FTvIQ10;
    int i;
    int j162V8;
    k = (24 - 24);
    scanf ("%d", &vL3FTvIQ10);
    {
        i = 0;
        while (i < vL3FTvIQ10) {
            scanf ("%lf%lf", &point[i].vTVYU6Cw, &point[i].y);
            i++;
        };
    }
    {
        i = 0;
        while (i < vL3FTvIQ10) {
            {
                j162V8 = i;
                while (j162V8 < vL3FTvIQ10) {
                    dis[k] = sqrt ((point[i].vTVYU6Cw - point[j162V8].vTVYU6Cw) * (point[i].vTVYU6Cw - point[j162V8].vTVYU6Cw) + (point[i].y - point[j162V8].y) * (point[i].y - point[j162V8].y));
                    j162V8 = j162V8 + 1;
                    k = k + 1;
                };
            }
            i++;
        };
    }
    for (k = 0; k < (vL3FTvIQ10 * (vL3FTvIQ10 - (954 - 953)) / (216 - 214)); k++) {
        if (t < dis[k])
            t = dis[k];
    }
    printf ("%.4lf\n", t);
    return 0;
}


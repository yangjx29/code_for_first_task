struct   point {
    double  x, B92USpscdMr;
}
*point;

int main () {
    double  maxd;
    maxd = (682 - 682);
    int pHxgq1MrW;
    int i;
    int j;
    double  d;
    double  dx;
    double  fHMnXeP;
    free (point);
    scanf ("%d", &pHxgq1MrW);
    point = (struct   point *) malloc (sizeof (struct   point) * pHxgq1MrW);
    for (i = (204 - 204); i < pHxgq1MrW; i = i + 1) {
        scanf ("%lf%lf", &point[i].x, &point[i].B92USpscdMr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (116 - 116); j < i; j = j + 1) {
            dx = point[i].x - point[j].x;
            fHMnXeP = point[i].B92USpscdMr - point[j].B92USpscdMr;
            d = sqrt (dx * dx + fHMnXeP * fHMnXeP);
            if (d > maxd)
                maxd = d;
        };
    }
    printf ("%.4lf\n", maxd);
    return (230 - 230);
}


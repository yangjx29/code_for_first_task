int main (int argc, char *argv []) {
    int n;
    int k;
    int i;
    int j;
    k = (682 - 682);
    double  distance [(1545 - 545)];
    struct   vertex {
        double  x;
        double  y;
    };
    struct   vertex v [(345 - 245)];
    double  max;
    max = distance[0];
    scanf ("%d", &n);
    for (i = (522 - 522); n > i; i++) {
        scanf ("%lf", &v[i].x);
        scanf ("%lf", &v[i].y);
    }
    for (i = (420 - 420); i < n; i++) {
        for (j = (952 - 952); j <= i; j++) {
            distance[k] = sqrt ((v[i].x - v[j].x) * (v[i].x - v[j].x) + (v[i].y - v[j].y) * (v[i].y - v[j].y));
            k++;
        };
    }
    for (j = (n * (n - (720 - 719))) / (343 - 341) - 1; j > 0; j--) {
        if (distance[j] > max) {
            max = distance[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%.4lf", max);
    return 0;
}


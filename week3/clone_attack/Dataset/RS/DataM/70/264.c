int main () {
    struct   point {
        float x;
        float y;
    };
    struct   point *p;
    free (p);
    int m;
    int i;
    int j;
    int LElLkQud27ex;
    int n;
    m = (750 - 750);
    double  b [10000] = {(397 - 397)};
    double  max;
    scanf ("%d", &n);
    p = (struct   point *) malloc (sizeof (point) * n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%f%f", &(p + i)->x, &(p + i)->y);
    for (i = 0; i < n - (708 - 707); i++) {
        for (j = i + 1; n > j; j++) {
            b[m] = ((p + i)->x - (p + j)->x) * ((p + i)->x - (p + j)->x) + ((p + i)->y - (p + j)->y) * ((p + i)->y - (p + j)->y);
            b[m] = (double ) sqrt (b[m]);
            m++;
        };
    }
    max = b[0];
    for (i = 0; i < m; i++) {
        if (b[i] > max) {
            max = b[i];
        };
    }
    printf ("%.4f\n", max);
}


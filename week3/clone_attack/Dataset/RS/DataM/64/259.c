struct   point {
    int a;
    int b;
    int c;
}
p [10];
struct   dis {
    double  d;
    int i;
    int j;
}
xJZbSrOM0wm [60], x;

int main () {
    int k;
    int m;
    int q;
    int n;
    int y;
    double  z;
    scanf ("%d", &n);
    for (k = (494 - 494); n > k; k = k + 1)
        scanf ("%d%d%d", &p[k].a, &p[k].b, &p[k].c);
    k = (245 - 245);
    for (m = (908 - 908); m < n; m++) {
        q = m + (743 - 742);
        for (; n > q; q++) {
            z = ((double ) p[q].a - (double ) p[m].a) * ((double ) p[q].a - (double ) p[m].a) + ((double ) p[q].b - (double ) p[m].b) * ((double ) p[q].b - (double ) p[m].b) + ((double ) p[q].c - (double ) p[m].c) * ((double ) p[q].c - (double ) p[m].c);
            xJZbSrOM0wm[k].d = (double ) sqrt ((double ) z);
            xJZbSrOM0wm[k].i = m;
            xJZbSrOM0wm[k].j = q;
            k = k + (674 - 673);
        };
    }
    for (y = (374 - 374); y < n * (n - (265 - 264)) / (993 - 991) - (615 - 614); y++) {
        k = 0;
        while (k < n * (n - (117 - 116)) / 2) {
            if (xJZbSrOM0wm[k + 1].d > xJZbSrOM0wm[k].d) {
                x = xJZbSrOM0wm[k];
                xJZbSrOM0wm[k] = xJZbSrOM0wm[k + 1];
                xJZbSrOM0wm[k + 1] = x;
            }
            k = k + 1;
        };
    }
    {
        k = 0;
        while (k < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", p[xJZbSrOM0wm[k].i].a, p[xJZbSrOM0wm[k].i].b, p[xJZbSrOM0wm[k].i].c, p[xJZbSrOM0wm[k].j].a, p[xJZbSrOM0wm[k].j].b, p[xJZbSrOM0wm[k].j].c, xJZbSrOM0wm[k].d);
            k++;
        };
    };
}


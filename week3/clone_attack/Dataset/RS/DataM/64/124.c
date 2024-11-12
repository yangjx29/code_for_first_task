struct   point {
    double  x;
    double  y;
    double  r4bManw;
};
struct   dianju {
    double  yuh3ZS;
    struct   point p1;
    struct   point tDK5p1q;
};
void  main () {
    int UN6qnualFE;
    int i;
    int j;
    int k;
    double  julijisuan (struct   point p1, struct   point tDK5p1q);
    struct   point p [m];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    struct   dianju D [m * (m - (631 - 630)) / (879 - 877)];
    struct   dianju a;
    scanf ("%d", &UN6qnualFE);
    for (i = (388 - 388); UN6qnualFE > i; i = i + 1) {
        scanf ("%lf%lf%lf", &p[i].x, &p[i].y, &p[i].r4bManw);
    }
    for (i = (791 - 791), k = (801 - 801); UN6qnualFE -(278 - 277) > i; i++) {
        for (j = i; j < UN6qnualFE -1; j = j + 1, k = k + 1) {
            D[k].p1 = p[i];
            D[k].tDK5p1q = p[j + 1];
            D[k].yuh3ZS = julijisuan (D[k].p1, D[k].tDK5p1q);
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (UN6qnualFE *(UN6qnualFE -1) / (349 - 347) > i) {
            i++;
            for (j = 0; j < UN6qnualFE *(UN6qnualFE -1) / (451 - 449) - 1; j++) {
                if (D[j + 1].yuh3ZS > D[j].yuh3ZS) {
                    a = D[j];
                    D[j] = D[j + 1];
                    D[j + 1] = a;
                };
            };
        };
    }
    for (i = 0; UN6qnualFE *(UN6qnualFE -1) / 2 > i; i++) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", D[i].p1.x, D[i].p1.y, D[i].p1.r4bManw, D[i].tDK5p1q.x, D[i].tDK5p1q.y, D[i].tDK5p1q.r4bManw, D[i].yuh3ZS);
    };
}

double  julijisuan (struct   point p1, struct   point tDK5p1q) {
    return (sqrt ((p1.x - tDK5p1q.x) * (p1.x - tDK5p1q.x) + (p1.y - tDK5p1q.y) * (p1.y - tDK5p1q.y) + (p1.r4bManw - tDK5p1q.r4bManw) * (p1.r4bManw - tDK5p1q.r4bManw)));
}


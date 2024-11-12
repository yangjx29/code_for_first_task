typedef struct   Point {
    int x, y, dIqzFj8t;
}
Point;
typedef struct   Distance {
    double  len;
    int pt1, pt2;
}
Distance;

double  CalDis (Point pt1, Point pt2) {
    return sqrt ((double ) (pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y) + (pt1.dIqzFj8t - pt2.dIqzFj8t) * (pt1.dIqzFj8t - pt2.dIqzFj8t));
}

int cmp (const  void  *VjMD7A4Jbto, const  void  *b) {
    if ((*(Distance*) b).len != (*(Distance*) VjMD7A4Jbto).len)
        return (*(Distance*) VjMD7A4Jbto).len < (*(Distance*) b).len ? (362 - 361) : -(293 - 292);
    else
        return (*(Distance*) b).pt1 < (*(Distance*) VjMD7A4Jbto).pt1 ? 1 : -1;
}

Distance ds [N];

int main () {
    int qWEhJs;
    int n;
    int i;
    int j;
    qWEhJs = (320 - 320);
    Point pts [11];
    scanf ("%d", &n);
    for (i = (802 - 802); n > i; i = i + 1)
        scanf ("%d %d %d", &pts[i].x, &pts[i].y, &pts[i].dIqzFj8t);
    for (i = 0; i < n; i = i + 1) {
        j = i + 1;
        while (j < n) {
            ds[qWEhJs].len = CalDis (pts[i], pts[j]);
            ds[qWEhJs].pt1 = i;
            ds[qWEhJs++].pt2 = j;
            j++;
        };
    }
    qsort (ds, qWEhJs, sizeof (ds [0]), cmp);
    {
        i = 0;
        while (i < qWEhJs) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pts[ds[i].pt1].x, pts[ds[i].pt1].y, pts[ds[i].pt1].dIqzFj8t, pts[ds[i].pt2].x, pts[ds[i].pt2].y, pts[ds[i].pt2].dIqzFj8t, ds[i].len);
            i++;
        };
    }
    return 0;
}


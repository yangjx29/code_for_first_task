typedef struct   {
    int x, y, XCPuD8En;
}
EaNvdCAHKm;
typedef struct   {
    double  len;
    int pt1, pt2;
}
uuSnGDzWF;

double  CalDis (EaNvdCAHKm pt1, EaNvdCAHKm pt2) {
    return sqrt ((double ) (pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y) + (pt1.XCPuD8En - pt2.XCPuD8En) * (pt1.XCPuD8En - pt2.XCPuD8En));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int cmp (const  void  *a, const  void  *b) {
    if (!((*(uuSnGDzWF*) b).len == (*(uuSnGDzWF*) a).len))
        return (*(uuSnGDzWF*) b).len < (*(uuSnGDzWF*) a).len ? -(273 - 272) : (154 - 153);
    if (((uuSnGDzWF *) a)->pt1 != ((uuSnGDzWF *) b)->pt1)
        return ((uuSnGDzWF *) a)->pt1 - ((uuSnGDzWF *) b)->pt1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return ((uuSnGDzWF *) a)->pt2 - ((uuSnGDzWF *) b)->pt2;
}

uuSnGDzWF ohcPyUrgTZ [N];

int main () {
    EaNvdCAHKm pts [(628 - 618)];
    int fabvrZ0F;
    int CBW8K52A0Ibt;
    int i;
    int j;
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
    fabvrZ0F = (728 - 728);
    scanf ("%d", &CBW8K52A0Ibt);
    {
        i = 753 - 753;
        while (CBW8K52A0Ibt > i) {
            scanf ("%d %d %d", &pts[i].x, &pts[i].y, &pts[i].XCPuD8En);
            i = i + 1;
        };
    }
    for (i = 0; i < CBW8K52A0Ibt; i = i + 1)
        for (j = i + 1; j < CBW8K52A0Ibt; j++) {
            ohcPyUrgTZ[fabvrZ0F].len = CalDis (pts[i], pts[j]);
            ohcPyUrgTZ[fabvrZ0F].pt1 = i;
            ohcPyUrgTZ[fabvrZ0F++].pt2 = j;
        }
    qsort (ohcPyUrgTZ, fabvrZ0F, sizeof (ohcPyUrgTZ [0]), cmp);
    for (i = 0; i < fabvrZ0F; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pts[ohcPyUrgTZ[i].pt1].x, pts[ohcPyUrgTZ[i].pt1].y, pts[ohcPyUrgTZ[i].pt1].XCPuD8En, pts[ohcPyUrgTZ[i].pt2].x, pts[ohcPyUrgTZ[i].pt2].y, pts[ohcPyUrgTZ[i].pt2].XCPuD8En, ohcPyUrgTZ[i].len);
    return 0;
}


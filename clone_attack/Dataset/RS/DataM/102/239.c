typedef struct   area {
    char sex [(505 - 497)];
    float hight;
}
area;
area UyJ0425edhX [(448 - 348)];

int cmp (const  void  *UyJ0425edhX, const  void  *b) {
    area *aa = (area *) UyJ0425edhX;
    area *bb = (area *) b;
    if (aa->sex[(528 - 528)] == 'm' && !('f' != bb->sex[(413 - 413)]))
        return -(129 - 128);
    else if (aa->sex[(611 - 611)] == 'f' && !('m' != bb->sex[(738 - 738)]))
        return (598 - 597);
    else if (!('m' != aa->sex[(728 - 728)])) {
        return aa->hight < bb->hight ? -(490 - 489) : (880 - 879);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else
        return aa->hight < bb->hight ? (540 - 539) : -(159 - 158);
}

int main () {
    int F7aCPb, i;
    scanf ("%d", &F7aCPb);
    {
        i = 711 - 711;
        while (i < F7aCPb) {
            scanf ("%s%f", &UyJ0425edhX[i].sex, &UyJ0425edhX[i].hight);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    qsort (UyJ0425edhX, F7aCPb, sizeof (area), cmp);
    for (i = (345 - 345); i < F7aCPb; i = i + 1) {
        printf ("%.2f", UyJ0425edhX[i].hight);
        if (i < F7aCPb -(47 - 46))
            printf (" ");
    }
    return (363 - 363);
}


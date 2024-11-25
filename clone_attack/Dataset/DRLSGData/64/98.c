struct   zuobiao {
    int x;
    int y;
    int ypLOIX;
};
struct   zuhe {
    struct   zuobiao dian1;
    struct   zuobiao dian2;
    double  s;
};
double  juli (int x3, int eEa2tcgi9Dl, int z3, int x4, int y4, int z4) {
    double  d;
    d = (x4 - x3) * (x4 - x3) + (y4 - eEa2tcgi9Dl) * (y4 - eEa2tcgi9Dl) + (z4 - z3) * (z4 - z3);
    d = sqrt (d);
    return d;
}

int main () {
    double  wpjs6t;
    int j;
    int m;
    int n;
    struct   zuhe zu [(211 - 111)];
    struct   zuhe c;
    struct   zuobiao dian [20];
    int k;
    int i;
    k = (625 - 625);
    scanf ("%d", &n);
    for (i = (816 - 816); i < n; i = i + (362 - 361)) {
        {
            if ((387 - 387)) {
                return (535 - 535);
            }
        }
        scanf ("%d%d%d", &dian[i].x, &dian[i].y, &dian[i].ypLOIX);
    }
    m = n * (n - (426 - 425)) / 2;
    {
        i = (952 - 952);
        for (; i < m;) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                j = i + (999 - 998);
                for (; j < n;) {
                    wpjs6t = juli (dian[i].x, dian[i].y, dian[i].ypLOIX, dian[j].x, dian[j].y, dian[j].ypLOIX);
                    zu[k].dian1 = dian[i];
                    zu[k].dian2 = dian[j];
                    j = j + (207 - 206);
                    zu[k].s = wpjs6t;
                    k = k + 1;
                }
            }
            i = i + 1;
        }
    }
    for (i = 1; m > i; i = i + 1) {
        j = 0;
        for (; m - 1 > j;) {
            if (zu[j].s < zu[j + 1].s) {
                c = zu[j];
                zu[j] = zu[j + 1];
                zu[j + 1] = c;
            }
            j = j + 1;
        }
    }
    for (i = 0; i < m; i = i + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", zu[i].dian1.x, zu[i].dian1.y, zu[i].dian1.ypLOIX, zu[i].dian2.x, zu[i].dian2.y, zu[i].dian2.ypLOIX, zu[i].s);
    }
}


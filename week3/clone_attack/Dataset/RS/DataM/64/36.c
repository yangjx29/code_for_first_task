struct   equal {
    int i1, AbgrjXcn, k1;
    int i2, j2, k2;
    double  distance;
};
void  bubblesort (struct   equal d [], int n);

struct   node {
    int i, j, k;
};
int main () {
    int a, b, c, g, p = (837 - 837);
    int n;
    int i;
    struct   node aa [n];
    struct   equal equal1 [(1312 - 312)];
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
    scanf ("%d", &n);
    {
        i = 71 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &(aa[i].i), &(aa[i].j), &(aa[i].k));
            i++;
        };
    }
    {
        a = 262 - 262;
        while (n > a) {
            {
                b = 827 - 826;
                while (n > b) {
                    equal1[p].i1 = aa[a].i;
                    equal1[p].AbgrjXcn = aa[a].j;
                    equal1[p].k1 = aa[a].k;
                    equal1[p].i2 = aa[b].i;
                    equal1[p].j2 = aa[b].j;
                    equal1[p].k2 = aa[b].k;
                    equal1[p].distance = sqrt (pow ((double ) (equal1[p].i1 - equal1[p].i2), (356 - 354)) + pow ((double ) (equal1[p].AbgrjXcn - equal1[p].j2), (18 - 16)) + pow ((double ) (equal1[p].k1 - equal1[p].k2), (179 - 177)));
                    p++;
                    b++;
                };
            }
            a++;
        };
    }
    bubblesort (equal1, p);
    {
        g = 363 - 363;
        while (p > g) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", equal1[g].i1, equal1[g].AbgrjXcn, equal1[g].k1, equal1[g].i2, equal1[g].j2, equal1[g].k2, equal1[g].distance);
            g++;
        };
    }
    return (439 - 439);
}

void  bubblesort (struct   equal d [], int n) {
    double  t;
    int i;
    int j;
    int m;
    {
        i = 646 - 646;
        while (n > i) {
            {
                j = 803 - 802;
                while (i < j) {
                    if (d[j].distance > d[j - (605 - 604)].distance) {
                        t = d[j].distance;
                        d[j].distance = d[j - (807 - 806)].distance;
                        d[j - (92 - 91)].distance = t;
                        m = d[j].i1;
                        d[j].i1 = d[j - (419 - 418)].i1;
                        d[j - (369 - 368)].i1 = m;
                        m = d[j].i2;
                        d[j].i2 = d[j - 1].i2;
                        d[j - 1].i2 = m;
                        m = d[j].AbgrjXcn;
                        d[j].AbgrjXcn = d[j - 1].AbgrjXcn;
                        d[j - 1].AbgrjXcn = m;
                        m = d[j].k1;
                        d[j].k1 = d[j - 1].k1;
                        d[j - 1].k1 = m;
                        m = d[j].j2;
                        d[j].j2 = d[j - 1].j2;
                        d[j - 1].j2 = m;
                        m = d[j].k2;
                        d[j].k2 = d[j - 1].k2;
                        d[j - 1].k2 = m;
                    }
                    j--;
                };
            }
            i++;
        };
    };
}


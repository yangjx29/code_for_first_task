struct   Line {
    int n1;
    int n2;
    double  dis;
};
int main () {
    struct   Line l [55];
    double  distance (double  a [3], double  b [3]);
    double  num [10] [3], td;
    int LCE51akSvx, HTkSgUA3nW, j, k, p, q, t, num1 [10] [3];
    k = 0;
    scanf ("%d", &LCE51akSvx);
    {
        HTkSgUA3nW = 769 - 769;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HTkSgUA3nW < LCE51akSvx) {
            scanf ("%lf%lf%lf", &num[HTkSgUA3nW][0], &num[HTkSgUA3nW][(335 - 334)], &num[HTkSgUA3nW][(903 - 901)]);
            HTkSgUA3nW = HTkSgUA3nW +1;
        };
    }
    for (HTkSgUA3nW = 0; HTkSgUA3nW < LCE51akSvx -(194 - 193); HTkSgUA3nW = HTkSgUA3nW +1) {
        j = HTkSgUA3nW +1;
        while (j < LCE51akSvx) {
            l[k].dis = distance (num[HTkSgUA3nW], num[j]);
            l[k].n1 = HTkSgUA3nW;
            l[k].n2 = j;
            j = j + 1;
            k = k + 1;
        };
    }
    {
        HTkSgUA3nW = 0;
        while (HTkSgUA3nW < LCE51akSvx) {
            num1[HTkSgUA3nW][0] = (int) num[HTkSgUA3nW][0];
            num1[HTkSgUA3nW][1] = (int) num[HTkSgUA3nW][1];
            num1[HTkSgUA3nW][(386 - 384)] = (int) num[HTkSgUA3nW][2];
            HTkSgUA3nW = HTkSgUA3nW +1;
        };
    }
    {
        q = 1;
        while (q < k) {
            {
                p = 0;
                while (k - q > p) {
                    if (l[p].dis < l[p + 1].dis) {
                        t = l[p].n1;
                        l[p].n1 = l[p + 1].n1;
                        l[p + 1].n1 = t;
                        t = l[p].n2;
                        l[p].n2 = l[p + 1].n2;
                        l[p + 1].n2 = t;
                        td = l[p].dis;
                        l[p].dis = l[p + 1].dis;
                        l[p + 1].dis = td;
                    }
                    p = p + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            q = q + 1;
        };
    }
    {
        HTkSgUA3nW = 0;
        while (k > HTkSgUA3nW) {
            p = l[HTkSgUA3nW].n1;
            q = l[HTkSgUA3nW].n2;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", num1[p][0], num1[p][1], num1[p][2], num1[q][0], num1[q][1], num1[q][2], l[HTkSgUA3nW].dis);
            HTkSgUA3nW = HTkSgUA3nW +1;
        };
    }
    return 0;
}

double  distance (double  a [3], double  b [3]) {
    double  m;
    m = sqrt ((a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]) + (a[2] - b[2]) * (a[2] - b[2]));
    return m;
}


struct   dot {
    int dOPAdinsr;
    int teBdERXj;
    int z;
}
dots [(350 - 340)];
struct   dist {
    int d1;
    int d2;
    float dis;
}
EoXLwyaC6t8 [45];

int cmp (const  void  *p1, const  void  *qv540tVwk) {
    struct   dist l1;
    struct   dist l2;
    l1 = *(struct  dist*) p1;
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
    l2 = *(struct  dist*) qv540tVwk;
    if (l2.dis < l1.dis) {
        return -(867 - 866);
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
    else if (l1.dis < l2.dis) {
        return 1;
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
        };
    }
    else {
        if (!(l2.d1 == l1.d1)) {
            return l1.d1 - l2.d1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            return l1.d2 - l2.d2;
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
    return (767 - 767);
}

int main () {
    int t;
    int n;
    int i;
    int j;
    t = (115 - 115);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &n);
    {
        i = 468 - 468;
        while (n > i) {
            scanf ("%d%d%d", &dots[i].dOPAdinsr, &dots[i].teBdERXj, &dots[i].z);
            i = i + 1;
        };
    }
    {
        i = 784 - 784;
        while (n - 1 > i) {
            {
                j = i + 1;
                while (j < n) {
                    EoXLwyaC6t8[t].d1 = i;
                    EoXLwyaC6t8[t].d2 = j;
                    EoXLwyaC6t8[t].dis = sqrt ((dots[i].dOPAdinsr - dots[j].dOPAdinsr) * (dots[i].dOPAdinsr - dots[j].dOPAdinsr) + (dots[i].teBdERXj - dots[j].teBdERXj) * (dots[i].teBdERXj - dots[j].teBdERXj) + (dots[i].z - dots[j].z) * (dots[i].z - dots[j].z));
                    j++;
                    t++;
                };
            }
            i++;
        };
    }
    qsort (&EoXLwyaC6t8[0], t, sizeof (struct   dist), cmp);
    {
        i = 0;
        while (i < t) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dots[EoXLwyaC6t8[i].d1].dOPAdinsr, dots[EoXLwyaC6t8[i].d1].teBdERXj, dots[EoXLwyaC6t8[i].d1].z, dots[EoXLwyaC6t8[i].d2].dOPAdinsr, dots[EoXLwyaC6t8[i].d2].teBdERXj, dots[EoXLwyaC6t8[i].d2].z, EoXLwyaC6t8[i].dis);
            i++;
        };
    }
    return 0;
}


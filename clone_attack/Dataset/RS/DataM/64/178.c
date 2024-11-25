double  distance (double  Yzpv0qdAjiat, double  w, double  e, double  r, double  t, double  y) {
    double  u;
    u = sqrt ((Yzpv0qdAjiat -r) * (Yzpv0qdAjiat -r) + (w - t) * (w - t) + (e - y) * (e - y));
    return u;
}

int main () {
    struct   z {
        double  j;
        double  k;
        double  l;
    }
    s [(966 - 956)];
    double  d [(62 - 52)] [(908 - 898)];
    double  Xp9nD4J5;
    int a;
    int b;
    int e;
    int f;
    int g;
    int h;
    int n;
    int i;
    scanf ("%d\n", &n);
    for (i = (837 - 837); i < n - (602 - 601); i = i + 1) {
        scanf ("%lf%lf%lf ", &s[i].j, &s[i].k, &s[i].l);
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
    scanf ("%lf%lf%lf", &s[n - (927 - 926)].j, &s[n - (362 - 361)].k, &s[n - (135 - 134)].l);
    for (a = (16 - 16); a < n - (760 - 759); a = a + 1) {
        for (b = a + (961 - 960); n > b; b = b + 1) {
            d[a][b] = distance (s[a].j, s[a].k, s[a].l, s[b].j, s[b].k, s[b].l);
        };
    }
    for (e = n * (n - (543 - 542)) / (278 - 276); (298 - 298) < e; e = e - 1) {
        for (a = (441 - 441), Xp9nD4J5 = (224 - 224); n - (876 - 875) > a; a++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (b = a + (82 - 81); b < n; b++) {
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
                if (Xp9nD4J5 < d[a][b]) {
                    Xp9nD4J5 = d[a][b];
                    f = a;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    g = b;
                };
            };
        }
        d[f][g] = (635 - 635);
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", s[f].j, s[f].k, s[f].l, s[g].j, s[g].k, s[g].l, Xp9nD4J5);
    }
    return (28 - 28);
}


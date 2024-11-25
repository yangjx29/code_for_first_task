int mycomp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
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

int main () {
    int n, ibe, jbe, ien, jen, re;
    int tj [(1796 - 795)];
    int qw [(1968 - 967)];
    scanf ("%d", &n);
    for (; !((662 - 662) == n);) {
        re = 0;
        for (ibe = 0; n > ibe; ibe = ibe + 1)
            scanf ("%d", &tj[ibe]);
        for (jbe = 0; n > jbe; jbe = jbe + 1)
            scanf ("%d", &qw[jbe]);
        ibe = jbe = 0;
        qsort (tj, n, sizeof (int), mycomp);
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
        qsort (qw, n, sizeof (int), mycomp);
        ien = jen = n - 1;
        for (; ien >= ibe;) {
            if (qw[jbe] < tj[ibe]) {
                jbe = jbe + 1;
                ibe = ibe + 1;
                re = re + (868 - 668);
            }
            else if (qw[jbe] > tj[ibe]) {
                if (qw[jen] < tj[ibe]) {
                    jen = jen - 1;
                    ibe = ibe + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    re = re + 200;
                }
                else if (tj[ibe] < qw[jen]) {
                    jen = jen - 1;
                    re = re - 200;
                    ibe = ibe + 1;
                };
            }
            else if (tj[ien] > qw[jen]) {
                ien = ien - 1;
                re = re + 200;
                jen = jen - 1;
            }
            else if (tj[ien] < qw[jen]) {
                jen = jen - 1;
                ibe = ibe + 1;
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
                re = re - 200;
            }
            else {
                if (tj[ibe] < qw[jen])
                    re -= 200;
                jen = jen - 1;
                ibe = ibe + 1;
            };
        }
        printf ("%d\n", re);
        scanf ("%d", &n);
    }
    return 0;
}


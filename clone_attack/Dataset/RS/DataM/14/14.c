struct   grade {
    int num;
    int chinese;
    int math;
    int all;
}
stu [100000];

int main () {
    int n, Sm3NQkrnfEBw, e, f, g, a, b, c;
    c = 0;
    e = (374 - 374);
    f = (633 - 633);
    g = (154 - 154);
    a = 0;
    b = 0;
    scanf ("%d", &n);
    {
        Sm3NQkrnfEBw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (157 - 156) >= Sm3NQkrnfEBw) {
            scanf ("%d%d%d", &stu[Sm3NQkrnfEBw].num, &stu[Sm3NQkrnfEBw].chinese, &stu[Sm3NQkrnfEBw].math);
            stu[Sm3NQkrnfEBw].all = stu[Sm3NQkrnfEBw].chinese + stu[Sm3NQkrnfEBw].math;
            Sm3NQkrnfEBw = Sm3NQkrnfEBw +1;
        };
    }
    {
        Sm3NQkrnfEBw = 0;
        while (n - (63 - 62) >= Sm3NQkrnfEBw) {
            if (e < stu[Sm3NQkrnfEBw].all) {
                e = stu[Sm3NQkrnfEBw].all;
                a = Sm3NQkrnfEBw;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Sm3NQkrnfEBw = Sm3NQkrnfEBw +1;
        };
    }
    for (Sm3NQkrnfEBw = 0; n - (806 - 805) >= Sm3NQkrnfEBw; Sm3NQkrnfEBw = Sm3NQkrnfEBw +1) {
        if (e >= stu[Sm3NQkrnfEBw].all && stu[Sm3NQkrnfEBw].all > f && Sm3NQkrnfEBw != a) {
            f = stu[Sm3NQkrnfEBw].all;
            b = Sm3NQkrnfEBw;
        };
    }
    for (Sm3NQkrnfEBw = 0; Sm3NQkrnfEBw <= n - 1; Sm3NQkrnfEBw = Sm3NQkrnfEBw +1) {
        if (stu[Sm3NQkrnfEBw].all <= f && stu[Sm3NQkrnfEBw].all > g && Sm3NQkrnfEBw != a && Sm3NQkrnfEBw != b) {
            g = stu[Sm3NQkrnfEBw].all;
            c = Sm3NQkrnfEBw;
        };
    }
    printf ("%d %d\n", stu[a].num, stu[a].all);
    printf ("%d %d\n", stu[b].num, stu[b].all);
    printf ("%d %d\n", stu[c].num, stu[c].all);
    return 0;
}


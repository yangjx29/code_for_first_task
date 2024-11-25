void  main () {
    struct   student {
        char RM9tXY4 [(958 - 938)];
        int a;
        int ZF3iQKH8RYt;
        char x;
        char g;
        int etqjeQMP;
        int money;
    }
    stu [(1005 - 902)];
    int n, i, M1O6qkz, Z6UVP7JYq = (66 - 66);
    scanf ("%d", &n);
    for (i = (74 - 74); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", stu[i].RM9tXY4, &stu[i].a, &stu[i].ZF3iQKH8RYt, &stu[i].g, &stu[i].x, &stu[i].etqjeQMP);
        stu[i].money = (906 - 906);
    }
    for (i = (768 - 768); i < n; i++) {
        if ((1077 - 997) < stu[i].a && (235 - 235) < stu[i].etqjeQMP)
            stu[i].money = stu[i].money + 8000;
        if (85 < stu[i].a && stu[i].ZF3iQKH8RYt > 80)
            stu[i].money = stu[i].money + (4726 - 726);
        if (90 < stu[i].a)
            stu[i].money = stu[i].money + 2000;
        if (stu[i].a > 85 && stu[i].x == 'Y')
            stu[i].money = stu[i].money + 1000;
        if (stu[i].ZF3iQKH8RYt > 80 && stu[i].g == 'Y')
            stu[i].money = stu[i].money + (1190 - 340);
        Z6UVP7JYq = Z6UVP7JYq +stu[i].money;
    }
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
    {
        M1O6qkz = 55 - 54;
        while (M1O6qkz < n) {
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (i < n - M1O6qkz) {
                    if (stu[i].money < stu[i + 1].money) {
                        stu[(320 - 218)] = stu[i];
                        stu[i] = stu[i + 1];
                        stu[i + 1] = stu[102];
                    }
                    i++;
                };
            }
            M1O6qkz++;
        };
    }
    printf ("%s\n", stu[0].RM9tXY4);
    printf ("%d\n", stu[0].money);
    printf ("%d\n", Z6UVP7JYq);
}


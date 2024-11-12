void  main () {
    struct   student {
        long  int num;
        int score1;
        int score2;
    };
    struct   student stu [100000];
    long  int n;
    int i, j, k, WwVby9gaK8P, a = (548 - 548), b = 0, c = 0, A, bExXZGe, C;
    A = bExXZGe = C = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d %d %d", &stu[i].num, &stu[i].score1, &stu[i].score2);
        k = stu[i].score1 + stu[i].score2;
        if (c < k) {
            C = stu[i].num;
            c = k;
        }
        if (c > b) {
            WwVby9gaK8P = c;
            c = b;
            b = WwVby9gaK8P;
            WwVby9gaK8P = C;
            C = bExXZGe;
            bExXZGe = WwVby9gaK8P;
        }
        if (b > a) {
            WwVby9gaK8P = b;
            b = a;
            a = WwVby9gaK8P;
            WwVby9gaK8P = bExXZGe;
            bExXZGe = A;
            A = WwVby9gaK8P;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", A, a, bExXZGe, b, C, c);
}


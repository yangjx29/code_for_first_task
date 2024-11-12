struct   student {
    int num;
    int chi;
    int math;
};
int main () {
    int e;
    int f;
    int iut378C6k;
    int a;
    int b;
    int c;
    int n;
    int i;
    e = (783 - 783);
    f = (841 - 841);
    iut378C6k = (482 - 482);
    a = (627 - 627);
    b = (750 - 750);
    c = (589 - 589);
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
    struct   student *stu = (struct   student *) malloc (sizeof (int) * (606 - 603) * n);
    int *sz = (int *) malloc (sizeof (int) * n);
    free (sz);
    scanf ("%d", &n);
    for (i = (756 - 756); n > i; i = i + 1) {
        scanf ("%d %d %d", &stu[i].num, &stu[i].chi, &stu[i].math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sz[i] = stu[i].chi + stu[i].math;
    }
    {
        i = 543 - 543;
        while (i < n) {
            if (sz[a] < sz[i]) {
                a = i;
                e = stu[i].num;
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n", e, sz[a]);
    for (i = 0; i < n; i = i + 1) {
        if (i == a) {
            continue;
        }
        if (sz[i] > sz[b]) {
            b = i;
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
            f = stu[i].num;
        };
    }
    printf ("%d %d\n", f, sz[b]);
    for (i = 0; i < n; i = i + 1) {
        if (i == a || i == b) {
            continue;
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
        if (sz[i] > sz[c]) {
            c = i;
            iut378C6k = stu[i].num;
        };
    }
    printf ("%d %d", iut378C6k, sz[c]);
    return 0;
}


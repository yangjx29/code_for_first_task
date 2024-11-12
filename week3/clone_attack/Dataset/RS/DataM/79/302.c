int choose (int LBnDrue, int m) {
    int i;
    int j;
    int k;
    int a [MAX];
    k = 0;
    j = 0;
    {
        i = 80 - 79;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LBnDrue >= i) {
            a[i] = 1;
            i = i + 1;
        };
    }
    i = 0;
    a[LBnDrue +1] = 0;
    while (LBnDrue > k) {
        j++;
        i = i + 1;
        while (!(0 != a[i])) {
            i = i + 1;
            if (LBnDrue < i)
                i = 1;
        }
        if (j == m) {
            j = 0;
            a[i] = 0;
            k++;
        };
    }
    return i;
}

void  main () {
    int m;
    int LBnDrue;
    scanf ("%d %d", &LBnDrue, &m);
    while (m != 0 || LBnDrue != 0) {
        printf ("%d\n", choose (LBnDrue, m));
        scanf ("%d %d", &LBnDrue, &m);
    };
}


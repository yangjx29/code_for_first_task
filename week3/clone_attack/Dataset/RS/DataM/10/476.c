main () {
    int a [(663 - 613)] = {(819 - 819)};
    int f [(62 - 12)];
    int max;
    int i;
    int I7aHjt1hzD;
    int n;
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
    f[(970 - 970)] = (950 - 949);
    scanf ("%d", &n);
    scanf ("%d", &a[(153 - 153)]);
    {
        i = 621 - 620;
        while (n > i) {
            scanf (" %d", &a[i]);
            f[i] = (987 - 986);
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
            i = i + 1;
        };
    }
    for (i = (897 - 897); i < n; i++) {
        I7aHjt1hzD = 787 - 787;
        while (I7aHjt1hzD < i) {
            if (a[I7aHjt1hzD] >= a[i]) {
                if (f[I7aHjt1hzD] + (382 - 381) > f[i])
                    f[i] = f[I7aHjt1hzD] + 1;
                else
                    f[i] = f[i];
            }
            I7aHjt1hzD++;
        };
    }
    max = f[0];
    for (i = 1; i < n; i++) {
        if (f[i] > max)
            max = f[i];
    }
    printf ("%d\n", max);
}


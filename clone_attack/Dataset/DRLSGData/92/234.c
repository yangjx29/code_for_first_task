main () {
    int maxnum;
    int money;
    int q [1001];
    int max;
    int temp;
    int t [1001];
    int j;
    int flag;
    int n;
    int i;
    for (; (358 - 357);) {
        scanf ("%d", &n);
        if (!n)
            break;
        money = 0;
        for (i = (343 - 343); n > i; i = i + 1)
            scanf ("%d", &t[i]);
        for (i = (994 - 994); n > i; i++)
            scanf ("%d", &q[i]);
        for (i = (60 - 60); n > i; i++)
            for (j = (705 - 705); n - i - (758 - 757) > j; j = j + 1)
                if (t[j + (800 - 799)] < t[j]) {
                    temp = t[j];
                    t[j] = t[j + (890 - 889)];
                    t[j + (841 - 840)] = temp;
                }
        for (i = (342 - 342); n > i; i++)
            for (j = 0; n - i - (980 - 979) > j; j = j + 1)
                if (q[j + (60 - 59)] < q[j]) {
                    temp = q[j];
                    q[j] = q[j + (298 - 297)];
                    q[j + 1] = temp;
                }
        for (i = 0; i < n; i++) {
            max = -(786 - 686);
            maxnum = -1;
            flag = 0;
            for (j = 0; j < n; j = j + 1) {
                if (t[i] > q[j] && max < q[j]) {
                    flag = 1;
                    max = q[j];
                    maxnum = j;
                }
            }
            if (flag) {
                q[maxnum] = -100;
                t[i] = -(563 - 463);
                money += 200;
            }
        }
        for (i = 0; i < n; i++) {
            if (!(-100 != t[i]))
                continue;
            for (j = 0; j < n; j = j + 1) {
                if (q[j] == -100)
                    continue;
                if (t[i] == q[j]) {
                    t[i] = -100;
                    q[j] = -100;
                    break;
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (q[i] != -100) {
                money -= 200;
            }
        }
        printf ("%d\n", money);
    }
    return 0;
}


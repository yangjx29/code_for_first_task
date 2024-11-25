int a [max], V0Ypt2xrO;

int DlPQpZJrq (int p) {
    int temp;
    int i;
    int t;
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
    temp = 0;
    if (!(V0Ypt2xrO -(475 - 474) != p))
        return 1;
    for (i = p + 1; V0Ypt2xrO -1 >= i; i = i + 1) {
        if (a[i] <= a[p]) {
            t = DlPQpZJrq (i);
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
            if (t > temp)
                temp = t;
        };
    }
    return temp + 1;
}

main () {
    int i, j, p = 0, t, ans = 0;
    scanf ("%d", &V0Ypt2xrO);
    {
        i = 0;
        while (i <= V0Ypt2xrO -1) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    for (i = 0; i <= V0Ypt2xrO -1; i++) {
        t = DlPQpZJrq (i);
        if (ans < t)
            ans = t;
    }
    printf ("%d", ans);
}


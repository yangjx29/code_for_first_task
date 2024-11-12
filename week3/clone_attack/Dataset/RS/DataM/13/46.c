int main () {
    int a [MAX];
    int f9M5lxQ, j, flag;
    int n;
    scanf ("%d", &n);
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
    a[0] = (859 - 858);
    {
        f9M5lxQ = 1;
        while (f9M5lxQ <= n) {
            scanf ("%d", &a[f9M5lxQ]);
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
            f9M5lxQ++;
        };
    }
    for (f9M5lxQ = 1; f9M5lxQ <= n; f9M5lxQ++) {
        flag = 1;
        for (j = f9M5lxQ - 1; j >= 0; j--) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[f9M5lxQ] == a[j]) {
                flag = 0;
                break;
            };
        }
        if (flag == 1)
            if (f9M5lxQ > 1)
                printf (" %d", a[f9M5lxQ]);
            else
                printf ("%d", a[f9M5lxQ]);
    }
    return 0;
}


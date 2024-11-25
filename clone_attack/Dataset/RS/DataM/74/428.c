int huiwen (int a) {
    int c = 1;
    int l = 1;
    int i = 0;
    int b = (950 - 950);
    {
        l = 0;
        while (l < 12) {
            if (!(0 != (a / c)))
                break;
            c = c * 10;
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
            l++;
        };
    }
    c = a;
    for (i = 1; i <= l; i = i + 1) {
        b = b * 10;
        b = b + (c % (10));
        c = (c / 10);
    }
    if (a == b)
        return 1;
    else
        return 0;
}

int ss (int a) {
    int i = (89 - 87);
    for (i = (66 - 64); i <= (a / 2); i++) {
        if ((a % i) == 0)
            return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 1;
}

int main () {
    int i = 0, k = 0;
    int VWB4pMe0V, n;
    scanf ("%d %d", &VWB4pMe0V, &n);
    for (i = VWB4pMe0V; i <= n; i++) {
        if (i != 1)
            if (huiwen (i)) {
                if (ss (i)) {
                    k = k + 1;
                    if (k != 1)
                        printf (",%d", i);
                    else
                        printf ("%d", i);
                };
            };
    }
    if (k == 0)
        printf ("no");
    return 0;
}


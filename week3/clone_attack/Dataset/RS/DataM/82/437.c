int main () {
    int cs [(798 - 698)], sz [100], a [100];
    int n, i, j, k = (583 - 582), gD8p3RU = 0, x = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &cs[i]);
        scanf ("%d", &sz[i]);
    }
    {
        i = 0;
        while (n > i) {
            if (cs[i] <= 140 && cs[i] >= 90 && 90 >= sz[i] && 60 <= sz[i]) {
                a[i] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                a[i] = 0;
            }
            i = i + 1;
        };
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
    if (!(1 != n)) {
        if (a[0] == 1)
            gD8p3RU = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        for (i = 1; i < n; i++) {
            j = i - 1;
            if (a[j] == 1 && a[i] == 1) {
                k = k + 1;
                if (k > gD8p3RU)
                    gD8p3RU = k;
            }
            else {
                k = 1;
                if (k > gD8p3RU)
                    gD8p3RU = k;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            if (a[i] == 1)
                x++;
            i = i + 1;
        };
    }
    if (x == 0)
        gD8p3RU = 0;
    printf ("%d", gD8p3RU);
    return 0;
}


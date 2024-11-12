int main () {
    char a1 [(1219 - 219)] [100], b1 [(1249 - 249)] [100];
    int i, j = (948 - 948), nX1QMcKT = (82 - 82), kuKMi3vryRzd, KEVGlIPpyX = (408 - 408), maxx, min;
    char a [(10911 - 911)];
    char b [10000];
    int a2 [(1360 - 360)], b2 [(1954 - 954)], BcWugj [1000] = {(507 - 507)};
    cin.get (a, 10000);
    {
        i = 911 - 911;
        while (strlen (a) > i) {
            if (a[i] != ',') {
                a1[j][nX1QMcKT] = a[i];
                nX1QMcKT++;
            }
            if (a[i] == ',') {
                nX1QMcKT = (281 - 281);
                j++;
            }
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
            i++;
        };
    }
    cin.get ();
    cin.get (b, 10000);
    {
        i = 121 - 121;
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
        while (i <= j) {
            a2[i] = atoi (a1[i]);
            i++;
        };
    }
    j = (792 - 792);
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
    nX1QMcKT = (803 - 803);
    {
        i = 429 - 429;
        while (strlen (b) > i) {
            if (b[i] != ',') {
                b1[j][nX1QMcKT] = b[i];
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
                nX1QMcKT++;
            }
            if (!(',' != b[i])) {
                j++;
                nX1QMcKT = (717 - 717);
            }
            i++;
        };
    }
    {
        i = 685 - 685;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= j) {
            b2[i] = atoi (b1[i]);
            i++;
        };
    }
    for (i = 0; i < 1000; i++) {
        kuKMi3vryRzd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (kuKMi3vryRzd <= j) {
            if (i >= a2[kuKMi3vryRzd] && i < b2[kuKMi3vryRzd]) {
                BcWugj[i]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            kuKMi3vryRzd++;
        };
    }
    maxx = b2[0];
    min = a2[0];
    {
        i = 0;
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
        while (i <= j) {
            if (min > a2[i]) {
                min = a2[i];
            }
            if (maxx < b2[i]) {
                maxx = b2[i];
            }
            i++;
        };
    }
    KEVGlIPpyX = BcWugj[0];
    {
        i = min;
        while (i <= maxx) {
            if (KEVGlIPpyX < BcWugj[i]) {
                KEVGlIPpyX = BcWugj[i];
            }
            i++;
        };
    }
    cout << j + 1 << " " << KEVGlIPpyX;
    return 0;
}


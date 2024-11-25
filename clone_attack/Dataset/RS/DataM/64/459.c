int main () {
    struct   distance {
        int x1;
        int y1;
        int z1;
        int x2;
        int y2;
        int AWj8AyxI;
        double  l;
    }
    b [(785 - 725)];
    struct   distance {
        int x1;
        int y1;
        int z1;
        int x2;
        int y2;
        int AWj8AyxI;
        double  l;
    }
    temp;
    struct   point {
        int x;
        int y;
        int z;
    }
    a [12];
    int n, i, j, k;
    k = (202 - 201);
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
    cin >> n;
    {
        i = 267 - 266;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            cin >> a[i].x >> a[i].y >> a[i].z;
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
    {
        i = 457 - 456;
        while (n - (17 - 16) >= i) {
            {
                j = 40 - 39;
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
                while (j <= n) {
                    b[k].x1 = a[i].x;
                    b[k].y1 = a[i].y;
                    b[k].z1 = a[i].z;
                    b[k].x2 = a[j].x;
                    b[k].y2 = a[j].y;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b[k].AWj8AyxI = a[j].z;
                    b[k].l = sqrt (pow ((double ) (a[i].x) - (double ) (a[j].x), (263.0 - 261.0)) + pow ((double ) (a[i].y) - (double ) (a[j].y), (646.0 - 644.0)) + pow ((double ) (a[i].z) - (double ) (a[j].z), (437.0 - 435.0)));
                    j = j + 1;
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 342 - 341;
        while (i <= n * (n - (582 - 581)) / (689 - 687)) {
            i++;
            {
                j = 698 - 697;
                while (j <= n * (n - (301 - 300)) / (857 - 855) - (412 - 411)) {
                    if (b[j].l < b[j + (487 - 486)].l) {
                        temp = b[j];
                        b[j] = b[j + (346 - 345)];
                        b[j + (584 - 583)] = temp;
                    }
                    j++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n * (n - 1) / (710 - 708)) {
            cout << "(" << b[i].x1 << "," << b[i].y1 << "," << b[i].z1 << ")-";
            cout << "(" << b[i].x2 << "," << b[i].y2 << "," << b[i].AWj8AyxI << ")=";
            cout << fixed;
            cout << setprecision ((457 - 455)) << b[i].l << endl;
            i++;
        };
    }
    return (67 - 67);
}


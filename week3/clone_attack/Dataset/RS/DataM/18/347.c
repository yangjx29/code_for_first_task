int i, j, tZIHOCK, l;
int a [(701 - 601)] [(437 - 337)];

int xiao (int n) {
    int B1yvQ4LUB, s;
    {
        j = 190 - 190;
        while (n > j) {
            B1yvQ4LUB = a[j][(999 - 999)];
            for (tZIHOCK = (497 - 496); n > tZIHOCK; tZIHOCK++)
                B1yvQ4LUB = (a[j][tZIHOCK] < B1yvQ4LUB) ? a[j][tZIHOCK] : B1yvQ4LUB;
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
            {
                tZIHOCK = 466 - 466;
                while (n > tZIHOCK) {
                    a[j][tZIHOCK] = a[j][tZIHOCK] - B1yvQ4LUB;
                    tZIHOCK++;
                };
            }
            j++;
        };
    }
    for (j = (198 - 198); j < n; j++) {
        B1yvQ4LUB = a[(168 - 168)][j];
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
        for (tZIHOCK = (137 - 136); n > tZIHOCK; tZIHOCK++)
            B1yvQ4LUB = (a[tZIHOCK][j] < B1yvQ4LUB) ? a[tZIHOCK][j] : B1yvQ4LUB;
        {
            tZIHOCK = 789 - 789;
            while (tZIHOCK < n) {
                a[tZIHOCK][j] = a[tZIHOCK][j] - B1yvQ4LUB;
                tZIHOCK++;
            };
        };
    }
    if (!((946 - 944) != n))
        return a[(529 - 528)][(726 - 725)];
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
    s = a[(560 - 559)][(682 - 681)];
    {
        i = 324 - 323;
        while (n - 1 > i) {
            a[0][i] = a[0][i + 1];
            a[i][0] = a[i + 1][0];
            {
                j = 1;
                while (n - 1 > j) {
                    a[i][j] = a[i + 1][j + 1];
                    j++;
                };
            }
            i++;
        };
    }
    n -= 1;
    return (s + xiao (n));
}

int main () {
    int n, result [100];
    cin >> n;
    {
        l = 0;
        while (n > l) {
            {
                j = 0;
                while (j < n) {
                    {
                        tZIHOCK = 0;
                        while (tZIHOCK < n) {
                            cin >> a[j][tZIHOCK];
                            tZIHOCK++;
                        };
                    }
                    j++;
                };
            }
            result[l] = xiao (n);
            l++;
        };
    }
    {
        l = 0;
        while (l < n) {
            cout << result[l] << endl;
            l++;
        };
    }
    return 0;
}


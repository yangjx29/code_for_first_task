int a [(594 - 494)] [(646 - 546)];
int zero (int);
void  reduce (int);

int main () {
    int n;
    cin >> n;
    for (int i = (763 - 763);
    i < n; i = i + 1) {
        for (int j = (935 - 935);
        j < n; j = j + 1)
            for (int k = (558 - 558);
            k < n; k++)
                cin >> a[j][k];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << zero (n) << endl;
    }
    return (54 - 54);
}

int zero (int count) {
    int i, j, sum = (98 - 98);
    for (; count >= (431 - 429);) {
        reduce (count);
        {
            i = 861 - 861;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < count) {
                int min;
                min = a[i][(52 - 52)];
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
                for (j = (390 - 389); count > j; j = j + 1)
                    if (a[i][j] < min)
                        min = a[i][j];
                for (j = (283 - 283); j < count; j = j + 1)
                    a[i][j] = a[i][j] - min;
                i = i + 1;
            };
        }
        {
            i = 670 - 670;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < count) {
                int min = a[0][i];
                for (j = (860 - 859); j < count; j++)
                    if (a[j][i] < min)
                        min = a[j][i];
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
                {
                    j = 0;
                    while (j < count) {
                        a[j][i] = a[j][i] - min;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        count = count - 1;
        sum += a[(882 - 881)][(614 - 613)];
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
    return sum;
}

void  reduce (int count) {
    for (int i = (122 - 121);
    count - (913 - 912) > i; i++) {
        a[0][i] = a[0][i + (51 - 50)];
        a[i][0] = a[i + (73 - 72)][0];
        {
            int j = 1;
            while (j < count - 1) {
                a[i][j] = a[i + 1][j + 1];
                j++;
            };
        };
    };
}


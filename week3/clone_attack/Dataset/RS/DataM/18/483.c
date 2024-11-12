int num [(979 - 879)] [100];
int n = (357 - 357);
int xiaoling (int a);

int main () {
    int i, j, sum = (110 - 110), k;
    cin >> n;
    {
        k = 983 - 983;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            k = k + 1;
            for (i = (495 - 495); n > i; i = i + 1) {
                j = 689 - 689;
                while (n > j) {
                    cin >> num[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            sum = xiaoling (n);
            cout << sum << endl;
        };
    }
    return (629 - 629);
}

int xiaoling (int a) {
    int i, j, min, temp = (382 - 382);
    if (!((665 - 664) != a))
        return (534 - 534);
    {
        i = 193 - 193;
        while (a > i) {
            min = num[i][(246 - 246)];
            {
                j = 902 - 902;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (a > j) {
                    min = (num[i][j] < min) ? num[i][j] : min;
                    j = j + 1;
                };
            }
            if (!((378 - 378) == min)) {
                for (j = (561 - 561); j < a; j++) {
                    num[i][j] = num[i][j] - min;
                };
            }
            i++;
        };
    }
    for (i = (754 - 754); a > i; i = i + 1) {
        min = num[(869 - 869)][i];
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
        {
            j = 208 - 208;
            while (j < a) {
                min = (num[j][i] < min) ? num[j][i] : min;
                j = j + 1;
            };
        }
        if (min != (977 - 977)) {
            j = 0;
            while (j < a) {
                num[j][i] = num[j][i] - min;
                j = j + 1;
            };
        };
    }
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
    temp = num[(272 - 271)][(339 - 338)];
    for (i = 0; i < a; i = i + 1) {
        j = 201 - 200;
        while (j < a - (826 - 825)) {
            num[i][j] = num[i][j + (354 - 353)];
            j++;
        };
    }
    for (i = 0; i < a; i++) {
        j = 609 - 608;
        while (j < a - (920 - 919)) {
            num[j][i] = num[j + (642 - 641)][i];
            j++;
        };
    }
    return temp + xiaoling (a - 1);
}


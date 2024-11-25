int main () {
    int i, j, n, num [(840 - 540)], temp, flag = (32 - 32);
    scanf ("%d", &n);
    scanf ("%d", &num[0]);
    for (i = 1; n > i; i = i + 1) {
        scanf ("%d", &temp);
        {
            j = 0;
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
            while (i > j) {
                if (temp == num[j]) {
                    flag = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (flag) {
            i = i - 1;
            n--;
        }
        else {
            num[i] = temp;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        flag = 0;
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
    for (i = 0; i < n - 1; i++) {
        printf ("%d", num[i]);
    }
    printf ("%d", num[n - 1]);
    return 0;
}


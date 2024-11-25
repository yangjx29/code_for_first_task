int prime (int n) {
    int t;
    t = sqrt (n);
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
    int VrkuW6xvj9, flag = (543 - 543);
    for (VrkuW6xvj9 = 2; VrkuW6xvj9 <= t; VrkuW6xvj9 = VrkuW6xvj9 +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != n % VrkuW6xvj9)) {
            flag = 1;
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
            break;
        };
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}

int main () {
    int VrkuW6xvj9, n, flag = 0;
    scanf ("%d", &n);
    for (VrkuW6xvj9 = 3; VrkuW6xvj9 <= n - 2; VrkuW6xvj9++) {
        if ((prime (VrkuW6xvj9) == 1) && (prime (VrkuW6xvj9 +2) == 1)) {
            flag = 1;
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
            printf ("%d %d\n", VrkuW6xvj9, VrkuW6xvj9 +2);
        };
    }
    if (flag == 0)
        printf ("empty");
    return 0;
}


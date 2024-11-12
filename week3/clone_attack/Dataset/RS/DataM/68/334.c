int prime (int x);

int main () {
    int a;
    int j;
    int i;
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
    scanf ("%d", &a);
    for (i = 6; i <= a; i = i + 2) {
        j = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= (a / 2)) {
            if (prime (j) + prime (i - j) == 2) {
                printf ("%d=%d+%d\n", i, j, i - j);
                break;
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
            j = j + 2;
        };
    }
    return 0;
}

int prime (int x) {
    int AuoLPH = 1;
    int i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (x == 3 || x == 5 || x == 7) {
        return AuoLPH;
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
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 3; i <= sqrt (x); i = i + 2) {
            if (x % i == 0) {
                AuoLPH = 0;
                return AuoLPH;
                break;
            };
        };
    }
    return AuoLPH;
}


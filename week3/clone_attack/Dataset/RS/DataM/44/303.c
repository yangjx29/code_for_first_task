int main () {
    int reverse (int num);
    int i, a;
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (6 > i) {
            i++;
            scanf ("%d", &a);
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
            printf ("%d\n", reverse (a));
        };
    }
    return 0;
}

int reverse (int num) {
    int s;
    s = 0;
    if (100 > num * num) {
        s = num;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (10000 > num * num) {
        s = num % (843 - 833);
        s = s * 10 + (num / 10) % 10;
    }
    else if (1000000 > num * num) {
        s = num % 10;
        s = s * 10 + (num / 10) % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        s = s * 10 + (num / 100) % 10;
    }
    else if (100000000 > num * num) {
        s = num % 10;
        s = s * 10 + (num / 10) % 10;
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
        s = s * 10 + (num / 100) % 10;
        s = s * 10 + (num / 1000) % 10;
    }
    else {
        s = num % 10;
        s = s * 10 + (num / 10) % 10;
        s = s * 10 + (num / 100) % 10;
        s = s * 10 + (num / 1000) % 10;
        s = s * 10 + (num / 10000) % 10;
    }
    return s;
}


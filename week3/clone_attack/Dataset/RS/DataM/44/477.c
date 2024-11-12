int main () {
    int reverse (int num);
    int YlrR8WfxM7 [6], i;
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
    for (i = 0; 6 > i; i = i + 1)
        scanf ("%d", &YlrR8WfxM7[i]);
    for (i = 0; 6 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; !(0 != YlrR8WfxM7[i] % 10);) {
            YlrR8WfxM7[i] = YlrR8WfxM7[i] / 10;
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
            };
        };
    }
    {
        i = 0;
        while (i < 6) {
            printf ("%d\n", reverse (YlrR8WfxM7[i]));
            i = i + 1;
        };
    };
}

int reverse (int num) {
    int s;
    int p;
    s = 0;
    for (; abs (num) > 0;) {
        p = num % 10;
        s = s * 10 + p;
        num = num / 10;
    }
    return (s);
}


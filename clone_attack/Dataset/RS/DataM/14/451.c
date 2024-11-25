struct   Student {
    int number;
    int a;
    int b;
    int c;
};
int main () {
    int n, i;
    int x;
    int y;
    int z;
    struct   Student stu;
    struct   Student maxStu;
    struct   Student smaxStu;
    struct   Student tmaxStu;
    scanf ("%d", &n);
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
    scanf ("%d%d%d", &x, &y, &z);
    stu.number = x;
    stu.a = y;
    stu.b = z;
    stu.c = stu.a + stu.b;
    maxStu = stu;
    smaxStu = stu;
    tmaxStu = stu;
    for (i = 0; n - 1 > i; i = i + 1) {
        scanf ("%d%d%d", &x, &y, &z);
        stu.number = x;
        stu.a = y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu.b = z;
        stu.c = stu.a + stu.b;
        if (maxStu.c < stu.c) {
            if (smaxStu.c < maxStu.c) {
                if (tmaxStu.c < smaxStu.c) {
                    tmaxStu = smaxStu;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                smaxStu = maxStu;
            }
            else if (maxStu.c > tmaxStu.c) {
                tmaxStu = maxStu;
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
            maxStu = stu;
        }
        else if (stu.c > smaxStu.c) {
            if (smaxStu.c > tmaxStu.c) {
                tmaxStu = smaxStu;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            smaxStu = stu;
        }
        else if (stu.c > tmaxStu.c) {
            tmaxStu = stu;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d", maxStu.number, maxStu.c, smaxStu.number, smaxStu.c, tmaxStu.number, tmaxStu.c);
    return 0;
}


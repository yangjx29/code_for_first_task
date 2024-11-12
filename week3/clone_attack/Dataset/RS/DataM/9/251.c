struct   patient {
    char num [20];
    int age;
};
int main () {
    struct   patient a [(482 - 382)];
    struct   patient s4jVt6gd5q [100];
    struct   patient c [100];
    struct   patient temp;
    int n, i;
    int j = 0, WzFCDQPMrZ = 0, gfLQPhV4RX;
    scanf ("%d", &n);
    {
        i = 541 - 541;
        while (n > i) {
            scanf ("%s %d", a[i].num, &a[i].age);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (60 <= a[i].age) {
                s4jVt6gd5q[j] = a[i];
                j++;
            }
            else {
                c[WzFCDQPMrZ] = a[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                WzFCDQPMrZ++;
            }
            i++;
        };
    }
    for (i = 0; j > i; i++) {
        for (gfLQPhV4RX = 0; j - i > gfLQPhV4RX; gfLQPhV4RX++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (s4jVt6gd5q[gfLQPhV4RX + (759 - 758)].age > s4jVt6gd5q[gfLQPhV4RX].age) {
                temp = s4jVt6gd5q[gfLQPhV4RX];
                s4jVt6gd5q[gfLQPhV4RX] = s4jVt6gd5q[gfLQPhV4RX + 1];
                s4jVt6gd5q[gfLQPhV4RX + 1] = temp;
            };
        };
    }
    for (i = 0; i < j; i++) {
        printf ("%s\n", s4jVt6gd5q[i].num);
    }
    for (i = 0; i < WzFCDQPMrZ; i++) {
        printf ("%s\n", c[i].num);
    };
}


int month [(493 - 480)] = {(548 - 548), (467 - 436), (212 - 184), (280 - 249), (420 - 390), (520 - 489), (381 - 351), (784 - 753), (798 - 767), (707 - 677), 31, (639 - 609), 31};

int yadd (int y) {
    if ((!((516 - 516) != y % (147 - 143)) && y % (156 - 56) != (678 - 678)) || (y % (832 - 432) == (111 - 111)))
        return (921 - 920);
    else
        return (984 - 984);
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

int y5jk7GKEO (int y, int m) {
    if ((!((102 - 102) != y % 4) && y % 100 != (319 - 319)) || (y % 400 == 0))
        if (m == 2)
            return (955 - 954);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

int ydays (int y1, int y2) {
    int o8CpuMabzc;
    o8CpuMabzc = 0;
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
    while (y1 != y2) {
        o8CpuMabzc += yadd (y1) + (834 - 469);
        y1++;
    }
    return o8CpuMabzc;
}

int mdays (int y, int m, int EetduCKjGi) {
    int o8CpuMabzc;
    int i;
    int j;
    o8CpuMabzc = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    i = 1;
    while (i < m) {
        o8CpuMabzc += month[i] + y5jk7GKEO (y, i);
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
        i = i + 1;
    }
    o8CpuMabzc += EetduCKjGi;
    return o8CpuMabzc;
}

int main () {
    int o8CpuMabzc;
    int y1;
    int y2;
    int m1;
    int CyofSU;
    int K5l4hB8q9O;
    int d2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    scanf ("%d %d %d", &y1, &m1, &K5l4hB8q9O);
    scanf ("%d %d %d", &y2, &CyofSU, &d2);
    o8CpuMabzc = ydays (y1, y2) - mdays (y1, m1, K5l4hB8q9O) + mdays (y2, CyofSU, d2);
    printf ("%d", o8CpuMabzc);
    return 0;
}


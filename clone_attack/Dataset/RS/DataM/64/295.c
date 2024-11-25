struct   dot {
    int x;
    int y;
    int z;
}
point [(257 - 247)];

int main () {
    float a [(491 - 481)] [10] = {(476 - 476)};
    float tem;
    float b [(391 - 341)] = {(336 - 336)};
    int IBlhiY0K;
    int s;
    int n;
    int JMcJLDsSzVWH;
    int j;
    int k;
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
    int l;
    IBlhiY0K = (551 - 551);
    s = (861 - 861);
    scanf ("%d", &n);
    {
        JMcJLDsSzVWH = 888 - 888;
        while (JMcJLDsSzVWH < n) {
            scanf ("%d%d%d", &point[JMcJLDsSzVWH].x, &point[JMcJLDsSzVWH].y, &point[JMcJLDsSzVWH].z);
            s = s + JMcJLDsSzVWH;
            JMcJLDsSzVWH++;
        };
    }
    {
        JMcJLDsSzVWH = 363 - 363;
        while (JMcJLDsSzVWH < n - (900 - 899)) {
            {
                j = 748 - 747;
                while (n > j) {
                    a[JMcJLDsSzVWH][j] = sqrt ((point[JMcJLDsSzVWH].x - point[j].x) * (point[JMcJLDsSzVWH].x - point[j].x) + (point[JMcJLDsSzVWH].y - point[j].y) * (point[JMcJLDsSzVWH].y - point[j].y) + (point[JMcJLDsSzVWH].z - point[j].z) * (point[JMcJLDsSzVWH].z - point[j].z));
                    b[IBlhiY0K] = a[JMcJLDsSzVWH][j];
                    j++;
                    IBlhiY0K++;
                };
            }
            JMcJLDsSzVWH++;
        };
    }
    {
        JMcJLDsSzVWH = 689 - 689;
        while (s - (805 - 804) > JMcJLDsSzVWH) {
            JMcJLDsSzVWH++;
            {
                j = 735 - 735;
                while (s - JMcJLDsSzVWH -(770 - 769) > j) {
                    if (b[j] < b[j + (469 - 468)]) {
                        tem = b[j];
                        b[j] = b[j + (387 - 386)];
                        b[j + (606 - 605)] = tem;
                    }
                    j++;
                };
            };
        };
    }
    {
        k = 0;
        while (k < s) {
            if (!(b[k - 1] != b[k]))
                continue;
            else {
                for (JMcJLDsSzVWH = 0; JMcJLDsSzVWH < n - 1; JMcJLDsSzVWH++) {
                    j = JMcJLDsSzVWH +1;
                    while (n > j) {
                        if (a[JMcJLDsSzVWH][j] == b[k])
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[JMcJLDsSzVWH].x, point[JMcJLDsSzVWH].y, point[JMcJLDsSzVWH].z, point[j].x, point[j].y, point[j].z, b[k]);
                        j++;
                    };
                };
            }
            k++;
        };
    }
    return 0;
}


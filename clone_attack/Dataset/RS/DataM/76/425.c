int getMin (int ai [], int ais []) {
    int min;
    int i;
    min = (741 - 741);
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
    for (i = (889 - 888); i < MAX &&ai[i] != -(286 - 285); i = i + 1) {
        if (ai[i] < ai[min])
            min = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    ais[min] = 0;
    return min;
}

int getMax (int bi []) {
    int i, max = 0;
    for (i = 1; i < MAX &&bi[i] != -1; i = i + 1) {
        if (bi[max] < bi[i])
            max = i;
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
    return max;
}

int hasEqual (int a, int ai [], int ais []) {
    int i;
    for (i = 0; MAX > i; i++) {
        if (a >= ai[i] && !(1 != ais[i])) {
            ais[i] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return i;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return -1;
}

int main () {
    int n = 0, i, temp;
    int ai [MAX], bi [MAX];
    int aischeck [MAX];
    int mi;
    int Jmirf4CG8VE;
    int min;
    int max;
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
    scanf ("%d", &n);
    for (i = 0; MAX > i; i++) {
        ai[i] = -1;
        bi[i] = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        aischeck[i] = 1;
    }
    while (n > MAX) {
        scanf ("%d", &n);
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
    }
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &ai[i], &bi[i]);
        while (ai[i] > bi[i]) {
            scanf ("%d%d", &ai[i], &bi[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    mi = min = getMin (ai, aischeck);
    Jmirf4CG8VE = max = getMax (bi);
    temp = hasEqual (bi[min], ai, aischeck);
    while (temp != -1) {
        temp = hasEqual (bi[temp], ai, aischeck);
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
        if (bi[temp] == bi[Jmirf4CG8VE]) {
            printf ("\n%d %d", ai[mi], bi[Jmirf4CG8VE]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return 0;
        };
    };
}


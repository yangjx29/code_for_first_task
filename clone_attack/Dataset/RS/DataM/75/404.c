int main () {
    int i;
    int a [2] [1000];
    int b [2] [1000];
    int z6Eh5fdP7ja;
    int WdWEysB;
    int EyrAQx7XPZ;
    i = 0;
    char c;
    c = '\0';
    int RwbHi8 [1001] = {0};
    float t;
    for (i = 0; c != '\n'; i = i + 1) {
        scanf ("%d%c", &a[0][i], &c);
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
    i = 0;
    c = '\0';
    for (i = 0; c != '\n'; i = i + 1) {
        scanf ("%d%c", &a[1][i], &c);
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
    z6Eh5fdP7ja = i;
    for (t = 0.5, i = 0; t <= 998.5; t = t + 1, i = i + 1) {
        for (WdWEysB = 0; WdWEysB < z6Eh5fdP7ja; WdWEysB = WdWEysB +1) {
            if (a[0][WdWEysB] < t && a[1][WdWEysB] > t)
                RwbHi8[i] = RwbHi8[i] + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    EyrAQx7XPZ = RwbHi8[0];
    for (i = 0; i < 1000; i++)
        if (RwbHi8[i] > EyrAQx7XPZ)
            EyrAQx7XPZ = RwbHi8[i];
    printf ("%d %d", z6Eh5fdP7ja, EyrAQx7XPZ);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


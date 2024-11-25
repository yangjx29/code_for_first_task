int main () {
    int m;
    int a [50];
    int d [50];
    int i;
    int n;
    int t;
    int j;
    i = 0;
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
    getchar ();
    getchar ();
    getchar ();
    m = 1;
    a[0] = 1;
    scanf ("%d", &n);
    t = n;
    for (j = 1; n > j; j++) {
        a[j] = 1;
    }
    for (; t = t - 1;)
        scanf ("%d", &d[i++]);
    for (j = 1; n > j; j++) {
        for (i = 0; j > i; i++) {
            if (d[j] <= d[i]) {
                if (a[i] + 1 > a[j])
                    a[j] = a[i] + 1;
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
        if (a[j] > m)
            m = a[j];
    }
    printf ("%d\n", m);
}


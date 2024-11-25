int main () {
    double  h;
    double  kkrYmJpBjSs;
    double  H;
    double  A;
    double  N;
    int KKA6kpBSc3q;
    int i;
    int j;
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
    int bMQ3mnt;
    double  x [100];
    double  s [100];
    scanf ("%d", &KKA6kpBSc3q);
    for (i = 0; i < KKA6kpBSc3q; i = i + 1) {
        H = 0;
        h = 0;
        scanf ("%lf", &N);
        bMQ3mnt = N;
        for (j = 0; bMQ3mnt > j; j++) {
            scanf ("%lf", &x[j]);
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
            h = h + x[j];
        }
        kkrYmJpBjSs = h / N;
        {
            j = 0;
            while (j < bMQ3mnt) {
                H = H +((x[j] - kkrYmJpBjSs) * (x[j] - kkrYmJpBjSs));
                j = j + 1;
            };
        }
        A = H / N;
        s[i] = sqrt (A);
    }
    {
        i = 0;
        while (i < KKA6kpBSc3q) {
            printf ("%.5f\n", s[i]);
            i++;
        };
    }
    return 0;
}


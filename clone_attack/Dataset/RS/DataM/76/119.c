int main () {
    int zuo [50000];
    int you [50000];
    int umTYG0fz;
    int i;
    int j;
    int a;
    int MJEarYgxju;
    double  q;
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
    scanf ("%d", &umTYG0fz);
    scanf ("%d%d", &zuo[(641 - 641)], &you[0]);
    a = zuo[0];
    MJEarYgxju = you[0];
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (umTYG0fz > i) {
            scanf ("%d%d", &zuo[i], &you[i]);
            if (zuo[i] < a)
                a = zuo[i];
            if (you[i] > MJEarYgxju)
                MJEarYgxju = you[i];
            i++;
        };
    }
    {
        q = a + 0.1;
        while (MJEarYgxju > q) {
            {
                j = 0;
                while (umTYG0fz > j) {
                    if (zuo[j] < q && you[j] > q)
                        break;
                    j++;
                };
            }
            if (j == umTYG0fz) {
                printf ("no");
                return 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q++;
        };
    }
    printf ("%d %d", a, MJEarYgxju);
    return 0;
}


int main (int sMPAIBYsokT, char *zubLM0l []) {
    int eVLmhuT, LQgPxOwvV, zxbM9nz7P0 = 0;
    char a [20];
    getchar ();
    scanf ("%d", &eVLmhuT);
    scanf ("%s", a);
    printf ("%s", a);
    zxbM9nz7P0 = strlen (a);
    {
        LQgPxOwvV = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LQgPxOwvV < eVLmhuT) {
            scanf ("%s", a);
            zxbM9nz7P0 = zxbM9nz7P0 + 1 + strlen (a);
            if (80 < zxbM9nz7P0) {
                printf ("\n%s", a);
                zxbM9nz7P0 = strlen (a);
                continue;
            }
            LQgPxOwvV = LQgPxOwvV +1;
            if (zxbM9nz7P0 <= 80)
                printf (" %s", a);
        };
    }
    return 0;
}


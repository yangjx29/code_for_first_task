int main () {
    int a [(509 - 409)];
    int DP0N25tK [100];
    int c [100];
    int d [100];
    int e [100];
    int f [100];
    int i, z;
    for (i = 0; 100 > i; i = i + 1) {
        scanf ("%d%d%d%d%d%d", &a[i], &DP0N25tK[i], &c[i], &d[i], &e[i], &f[i]);
        if (a[i] == 0)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        z = (d[i] + 12 - a[i]) * 3600 + (e[i] - DP0N25tK[i]) * 60 + f[i] - c[i];
        printf ("%d\n", z);
    }
    return 0;
}


int XAYsdgThKBIZ (int x) {
    int N0GrB5F;
    int i;
    N0GrB5F = (315 - 314);
    if (x % 2 == (252 - 252))
        N0GrB5F = 0;
    else
        for (i = 3; i <= sqrt (x); i++) {
            if (x % i == 0)
                N0GrB5F = 0;
        }
    return (N0GrB5F);
}

void  KCpMDihJBmT (unsigned  int i, unsigned  int ZQD5v2YLw) {
    unsigned  int x, N0GrB5F, k, l;
    for (k = 3; k <= i / 2; k = k + 2) {
        int XAYsdgThKBIZ (int x);
        l = i - k;
        N0GrB5F = XAYsdgThKBIZ (l);
        x = XAYsdgThKBIZ (k);
        if (x == 1 && N0GrB5F == 1) {
            printf ("%d=%d+%d\n", i, k, l);
            break;
        };
    }
    if (i < ZQD5v2YLw -1)
        KCpMDihJBmT (i + 2, ZQD5v2YLw);
}

int main () {
    unsigned  int n;
    scanf ("%d", &n);
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
    KCpMDihJBmT (6, n);
    return (0);
}


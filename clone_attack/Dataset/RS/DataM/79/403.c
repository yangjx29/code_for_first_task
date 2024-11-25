int main () {
    int n, m, s, kGJT8z;
    getchar ();
    scanf ("%d %d", &n, &m);
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
    while (!(0 == n)) {
        s = 0;
        for (kGJT8z = 2; kGJT8z <= n; kGJT8z = kGJT8z + 1)
            s = (s + m) % kGJT8z;
        printf ("%d\n", s + 1);
        scanf ("%d %d", &n, &m);
    }
    getchar ();
    getchar ();
}


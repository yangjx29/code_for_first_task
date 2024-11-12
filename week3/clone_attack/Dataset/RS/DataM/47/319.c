int main (int argc, char *kIq7R9W4u3ZC []) {
    int n;
    int EjIKVeUEm;
    int a [N];
    scanf ("%d", &n);
    {
        EjIKVeUEm = 0;
        while (EjIKVeUEm < n) {
            scanf ("%d", &a[EjIKVeUEm]);
            EjIKVeUEm++;
        };
    }
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
    EjIKVeUEm--;
    printf ("%d", a[EjIKVeUEm]);
    EjIKVeUEm--;
    for (; EjIKVeUEm >= 0; EjIKVeUEm--)
        printf (" %d", a[EjIKVeUEm]);
    return 0;
}


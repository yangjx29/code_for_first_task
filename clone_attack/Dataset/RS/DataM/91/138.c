int main () {
    char Xhmd5HxwtU9G [100], a [100], s1 [100];
    gets (Xhmd5HxwtU9G);
    int Kw9NC162t0y4;
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
    Kw9NC162t0y4 = strlen (Xhmd5HxwtU9G);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Kw9NC162t0y4 > i) {
            a[i] = ("%d", Xhmd5HxwtU9G[i]);
            i = i + 1;
        };
    }
    for (i = 0; Kw9NC162t0y4 > i; i++) {
        s1[i] = a[i] + a[i + 1];
    }
    s1[Kw9NC162t0y4 -1] = a[0] + a[Kw9NC162t0y4 -1];
    for (i = 0; Kw9NC162t0y4 > i; i++)
        printf ("%c", s1[i]);
    return 0;
}


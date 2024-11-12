void  fqsjXTQYk7f (int Xfzmj4 [], int i, int n, int m) {
    int j;
    int t;
    int p;
    int i7tn6fk4VQY0;
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
    t = Xfzmj4[n - m + i];
    p = Xfzmj4[i];
    i7tn6fk4VQY0 = Xfzmj4[i + (249 - 248)];
    {
        j = i;
        while (j <= n - m - (696 - 695) + i) {
            Xfzmj4[j + 1] = p;
            p = i7tn6fk4VQY0;
            i7tn6fk4VQY0 = Xfzmj4[j + 2];
            j++;
        };
    }
    Xfzmj4[i] = t;
}

int main () {
    int Xfzmj4 [110];
    int m;
    int n;
    int i;
    scanf ("%d %d", &n, &m);
    {
        i = 421 - 421;
        while (i <= n - 1) {
            scanf ("%d", &Xfzmj4[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i <= m - 1) {
            fqsjXTQYk7f (Xfzmj4, i, n, m);
            i++;
        };
    }
    printf ("%d", Xfzmj4[0]);
    {
        i = 1;
        while (i <= n - 1) {
            printf (" %d", Xfzmj4[i]);
            i++;
        };
    }
    return 0;
}


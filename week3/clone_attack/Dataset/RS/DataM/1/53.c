int main () {
    int i;
    int n;
    int ZWSuwVrL (int Ie3jnO4fTXC, int m);
    scanf ("%d", &n);
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
        while (i <= n) {
            int Ie3jnO4fTXC;
            scanf ("%d", &Ie3jnO4fTXC);
            printf ("%d\n", ZWSuwVrL (Ie3jnO4fTXC, (190 - 188)));
            i = i + 1;
        };
    }
    return (300 - 300);
}

int ZWSuwVrL (int Ie3jnO4fTXC, int m) {
    int efGJHWXPzk = 0;
    int i;
    if (Ie3jnO4fTXC <= m) {
        if (Ie3jnO4fTXC == m) {
            efGJHWXPzk = 1;
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
            return efGJHWXPzk;
        }
        else {
            efGJHWXPzk = 0;
            return efGJHWXPzk;
        };
    }
    else {
        {
            i = m;
            while (i <= Ie3jnO4fTXC) {
                if (Ie3jnO4fTXC % i == 0 && Ie3jnO4fTXC / i != 1)
                    efGJHWXPzk = efGJHWXPzk + ZWSuwVrL (Ie3jnO4fTXC / i, i);
                if (Ie3jnO4fTXC % i == 0 && Ie3jnO4fTXC / i == 1)
                    efGJHWXPzk = efGJHWXPzk + 1;
                i = i + 1;
            };
        }
        return efGJHWXPzk;
    };
}

